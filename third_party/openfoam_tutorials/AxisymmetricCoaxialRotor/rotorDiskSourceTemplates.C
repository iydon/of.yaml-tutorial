/*---------------------------------------------------------------------------*\
    =========                 |
    \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
     \\    /   O peration     |
      \\  /    A nd           | Copyright (C) 2011-2016 OpenFOAM Foundation
       \\/     M anipulation  |
-------------------------------------------------------------------------------
License
        This file is part of OpenFOAM.

        OpenFOAM is free software: you can redistribute it and/or modify it
        under the terms of the GNU General Public License as published by
        the Free Software Foundation, either version 3 of the License, or
        (at your option) any later version.

        OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
        ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
        FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
        for more details.

        You should have received a copy of the GNU General Public License
        along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.
\*---------------------------------------------------------------------------*/

// This has been modified to allow for opposite rotation, for lift in the same direction.
//  To switch rotation directions, flip the sign on rpm.
// This has also been modified to include total power output.

#include "rotorDiskSource.H"
#include "volFields.H"
#include "unitConversion.H"

using namespace Foam::constant;

// * * * * * * * * * * * * Protected Member Functions  * * * * * * * * * * * //

template<class RhoFieldType>
void Foam::fv::rotorDiskSource::calculate (
        const RhoFieldType& rho,
        const vectorField& U,
        const scalarField& thetag,
        vectorField& force,
        const bool divideVolume,
        const bool output
) const {
    const scalarField& V = mesh_.V();

    // Logging info
    scalar dragEff = 0.0;
    scalar powerEff = 0.0;
    scalar liftEff = 0.0;
    scalar AOAmin = GREAT;
    scalar AOAmax = -GREAT;

    forAll(cells_, i) {
        if (area_[i] > ROOTVSMALL) {
            const label celli = cells_[i];

            const scalar radius = x_[i].x();

            // Transform velocity into local cylindrical reference frame
            vector Uc = cylindrical_->invTransform(U[celli], i);

            // Transform velocity into local coning system
            Uc = R_[i] & Uc;

            // Set radial component of velocity to zero
            Uc.x() = 0.0;

            // Set blade normal component of velocity (drag direction)
            Uc.y() = radius * omega_ - Uc.y();

            // Determine blade data for this radius
            // i2 = index of upper radius bound data point in blade list
            scalar twist = 0.0;
            scalar chord = 0.0;
            label i1 = -1;
            label i2 = -1;
            scalar invDr = 0.0;
            blade_.interpolate(radius, twist, chord, i1, i2, invDr);

            scalar alphaGeom = thetag[i] + twist;
            // Flip geometric angle if blade is spinning in reverse (clockwise)
            // if (omega_ < 0) alphaGeom = mathematical::pi - alphaGeom;

            // Effective angle of attack
            scalar inducedAlpha = (omega_ > 0)
                ? atan2(-Uc.z(), Uc.y())
                : atan2(-Uc.z(), -Uc.y());
            scalar alphaEff = alphaGeom - inducedAlpha;
            if (alphaEff > mathematical::pi)  alphaEff -= mathematical::twoPi;
            if (alphaEff < -mathematical::pi) alphaEff += mathematical::twoPi;

            AOAmin = min(AOAmin, alphaEff);
            AOAmax = max(AOAmax, alphaEff);

            // Determine profile data for this radius and angle of attack
            const label profile1 = blade_.profileID()[i1];
            const label profile2 = blade_.profileID()[i2];

            scalar Cd1 = 0.0;
            scalar Cl1 = 0.0;
            profiles_[profile1].Cdl(alphaEff, Cd1, Cl1);

            scalar Cd2 = 0.0;
            scalar Cl2 = 0.0;
            profiles_[profile2].Cdl(alphaEff, Cd2, Cl2);

            scalar Cd = invDr*(Cd2 - Cd1) + Cd1;
            scalar Cl = invDr*(Cl2 - Cl1) + Cl1;

            // Apply tip effect for blade lift
            scalar tipFactor = neg(radius / rMax_ - tipEffect_);

            // Calculate forces perpendicular to blade
            scalar pDyn = 0.5*rho[celli]*magSqr(Uc);

            scalar f = pDyn * chord * nBlades_ * area_[i] / radius / mathematical::twoPi;
            scalar dragForce = (omega_ > 0) ? (-f * Cd) : (f * Cd);
            vector localForce = vector(0.0, dragForce, tipFactor * f * Cl);

            // Accumulate forces
            dragEff   += rhoRef_ * localForce.y();
            powerEff  += rhoRef_ * localForce.y() * radius * omega_;
            liftEff   += rhoRef_ * localForce.z();

            // Transform force from local coning system into rotor cylindrical
            localForce = invR_[i] & localForce;

            // Transform force into global Cartesian co-ordinate system
            force[celli] = cylindrical_->transform(localForce, i);

            if (divideVolume) force[celli] /= V[celli];
        }
    }

    if (output) {
        reduce(AOAmin, minOp<scalar>());
        reduce(AOAmax, maxOp<scalar>());
        reduce(dragEff, sumOp<scalar>());
        reduce(liftEff, sumOp<scalar>());

        Info<< type() << " output:" << nl
            << "    min/max(AOA)    = " << radToDeg(AOAmin) << ", "
            << radToDeg(AOAmax) << nl
            << "    Effective drag  = " << dragEff << nl
            << "    Effective power = " << powerEff << nl
            << "    Effective lift  = " << liftEff << endl;
    }
}


template<class Type>
void Foam::fv::rotorDiskSource::writeField (
        const word& name,
        const List<Type>& values,
        const bool writeNow
) const {
    typedef GeometricField<Type, fvPatchField, volMesh> fieldType;

    if (mesh_.time().writeTime() || writeNow) {
        tmp<fieldType> tfield (
            new fieldType (
                IOobject (
                    name,
                    mesh_.time().timeName(),
                    mesh_,
                    IOobject::NO_READ,
                    IOobject::NO_WRITE
                ),
                mesh_,
                dimensioned<Type>("zero", dimless, Zero)
            )
        );

        Field<Type>& field = tfield.ref().primitiveFieldRef();

        if (cells_.size() != values.size()) {
            FatalErrorInFunction
                << abort(FatalError);
        }

        forAll(cells_, i) {
            const label celli = cells_[i];
            field[celli] = values[i];
        }

        tfield().write();
    }
}
