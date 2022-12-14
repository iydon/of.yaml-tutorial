# Tutorials

The following table shows the [OpenFOAM-7](https://github.com/OpenFOAM/OpenFOAM-7) cases that have been converted to YAML format. You can find the corresponding rules by comparing the YAML format with its original format.

<details>
  <summary>The existing OpenFOAM tutorials in YAML format</summary>

  | YAML | OpenFOAM | Solver |
  | --- | --- | --- |
  | [airFoil2D.yaml](incompressible/simpleFoam/airFoil2D.yaml) | [airFoil2D](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/incompressible/simpleFoam/airFoil2D) | [incompressible/simpleFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/incompressible/simpleFoam) |
  | [beamEndLoad.yaml](stressAnalysis/solidEquilibriumDisplacementFoam/beamEndLoad.yaml) | [beamEndLoad](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/stressAnalysis/solidEquilibriumDisplacementFoam/beamEndLoad) | [stressAnalysis/solidEquilibriumDisplacementFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/stressAnalysis/solidEquilibriumDisplacementFoam) |
  | [boxTurb16.yaml](DNS/dnsFoam/boxTurb16.yaml) | [boxTurb16](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/DNS/dnsFoam/boxTurb16) | [DNS/dnsFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/DNS/dnsFoam) |
  | [cylinder.yaml](basic/potentialFoam/cylinder.yaml) | [cylinder](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/basic/potentialFoam/cylinder) | [basic/potentialFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/basic/potentialFoam) |
  | [damBreak.yaml](multiphase/interMixingFoam/laminar/damBreak.yaml) | [damBreak](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/interMixingFoam/laminar/damBreak) | [multiphase/interMixingFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/interFoam/interMixingFoam) |
  | [damBreak4phase.yaml](multiphase/multiphaseInterFoam/laminar/damBreak4phase.yaml) | [damBreak4phase](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/multiphaseInterFoam/laminar/damBreak4phase) | [multiphase/multiphaseInterFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/multiphaseInterFoam) |
  | [damBreak4phaseFine.yaml](multiphase/multiphaseInterFoam/laminar/damBreak4phaseFine.yaml) | [damBreak4phaseFine](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/multiphaseInterFoam/laminar/damBreak4phaseFine) | [multiphase/multiphaseInterFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/multiphaseInterFoam) |
  | [damBreakWithObstacle.yaml](multiphase/interFoam/laminar/damBreakWithObstacle.yaml) | [damBreakWithObstacle](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/interFoam/laminar/damBreakWithObstacle) | [multiphase/interFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/interFoam) |
  | [DTCHull.yaml](multiphase/interFoam/RAS/DTCHull.yaml) | [DTCHull](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/interFoam/RAS/DTCHull) | [multiphase/interFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/interFoam) |
  | [elbow.yaml](incompressible/icoFoam/elbow.yaml) | [elbow](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/incompressible/icoFoam/elbow) | [incompressible/icoFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/incompressible/icoFoam) |
  | [europeanCall.yaml](financial/financialFoam/europeanCall.yaml) | [europeanCall](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/financial/financialFoam/europeanCall) | [financial/financialFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/financial/financialFoam) |
  | [fileHandler.yaml](IO/fileHandler.yaml) | [fileHandler](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/IO/fileHandler) | [lagrangian/icoUncoupledKinematicParcelFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/lagrangian/icoUncoupledKinematicParcelFoam) |
  | [flange.yaml](basic/laplacianFoam/flange.yaml) | [flange](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/basic/laplacianFoam/flange) | [basic/laplacianFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/basic/laplacianFoam) |
  | [mixerVessel2D.yaml](multiphase/multiphaseInterFoam/laminar/mixerVessel2D.yaml) | [mixerVessel2D](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/multiphaseInterFoam/laminar/mixerVessel2D) | [multiphase/multiphaseInterFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/multiphaseInterFoam) |
  | [nozzleFlow2D.yaml](multiphase/interFoam/LES/nozzleFlow2D.yaml) | [nozzleFlow2D](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/interFoam/LES/nozzleFlow2D) | [multiphase/interFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/interFoam) |
  | [pipeCyclic.yaml](incompressible/simpleFoam/pipeCyclic.yaml) | [pipeCyclic](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/incompressible/simpleFoam/pipeCyclic) | [incompressible/simpleFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/incompressible/simpleFoam) |
  | [pitzDaily.yaml](basic/potentialFoam/pitzDaily.yaml) | [pitzDaily](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/basic/potentialFoam/pitzDaily) | [basic/potentialFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/basic/potentialFoam) |
  | [pitzDaily.yaml](basic/scalarTransportFoam/pitzDaily.yaml) | [pitzDaily](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/basic/scalarTransportFoam/pitzDaily) | [basic/scalarTransportFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/basic/scalarTransportFoam) |
  | [plateHole.yaml](stressAnalysis/solidDisplacementFoam/plateHole.yaml) | [plateHole](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/stressAnalysis/solidDisplacementFoam/plateHole) | [stressAnalysis/solidDisplacementFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/stressAnalysis/solidDisplacementFoam) |
  | [sloshingTank3D6DoF.yaml](multiphase/interFoam/laminar/sloshingTank3D6DoF.yaml) | [sloshingTank3D6DoF](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/interFoam/laminar/sloshingTank3D6DoF) | [multiphase/interFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/interFoam) |
  | [propeller.yaml](multiphase/interPhaseChangeFoam/propeller.yaml) | [propeller](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/interPhaseChangeFoam/propeller) | [multiphase/interPhaseChangeFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/interPhaseChangeFoam) |
  | [mixerVesselAMI.yaml](multiphase/interFoam/RAS/mixerVesselAMI.yaml) | [mixerVesselAMI](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/interFoam/RAS/mixerVesselAMI) | [multiphase/interFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/interFoam) |
  | [sloshingTank2D.yaml](multiphase/compressibleInterFoam/laminar/sloshingTank2D.yaml) | [sloshingTank2D](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/compressibleInterFoam/laminar/sloshingTank2D) | [multiphase/compressibleInterFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/compressibleInterFoam) |
  | [damBreak4phase.yaml](multiphase/compressibleMultiphaseInterFoam/laminar/damBreak4phase.yaml) | [damBreak4phase](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/compressibleMultiphaseInterFoam/laminar/damBreak4phase) | [multiphase/compressibleMultiphaseInterFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/compressibleMultiphaseInterFoam) |
  | [flamePropagationWithObstacles.yaml](combustion/PDRFoam/flamePropagationWithObstacles.yaml) | [flamePropagationWithObstacles](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/combustion/PDRFoam/flamePropagationWithObstacles) | [combustion/PDRFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/combustion/PDRFoam) |
  | [kivaTest.yaml](combustion/XiEngineFoam/kivaTest.yaml) | [kivaTest](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/combustion/XiEngineFoam/kivaTest) | [combustion/XiEngineFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/combustion/XiFoam/XiEngineFoam) |
  | [moriyoshiHomogeneous.yaml](combustion/XiFoam/RAS/moriyoshiHomogeneous.yaml) | [moriyoshiHomogeneous](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/combustion/XiFoam/RAS/moriyoshiHomogeneous) | [combustion/XiFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/combustion/XiFoam) |
  | [throttle.yaml](multiphase/cavitatingFoam/LES/throttle.yaml) | [throttle](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/cavitatingFoam/LES/throttle) | [multiphase/cavitatingFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/cavitatingFoam) |
  | [throttle3D.yaml](multiphase/cavitatingFoam/LES/throttle3D.yaml) | [throttle3D](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/cavitatingFoam/LES/throttle3D) | [multiphase/cavitatingFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/cavitatingFoam) |
  | [throttle.yaml](multiphase/cavitatingFoam/RAS/throttle.yaml) | [throttle](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/multiphase/cavitatingFoam/RAS/throttle) | [multiphase/cavitatingFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/multiphase/cavitatingFoam) |
  | [nacaAirfoil.yaml](compressible/rhoPimpleFoam/RAS/nacaAirfoil.yaml) | [nacaAirfoil](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/tutorials/compressible/rhoPimpleFoam/RAS/nacaAirfoil) | [compressible/rhoPimpleFoam](https://github.com/OpenFOAM/OpenFOAM-7/tree/master/applications/solvers/compressible/rhoPimpleFoam) |
</details>



# Task List

The following is a task list to convert [OpenFOAM-7](https://github.com/OpenFOAM/OpenFOAM-7) to the corresponding YAML format. The corresponding rules for conversion are not currently organized because some of them are still unstable. I will first try to convert as many tutorials as possible, and then organize the rules afterwards.

<details>
  <summary>Conversion task list</summary>

  - [x] DNS
      - [x] dnsFoam
          - [x] boxTurb16
  - [x] IO
      - [x] fileHandler
  - [x] basic
      - [x] laplacianFoam
          - [x] flange
      - [x] potentialFoam
          - [x] cylinder
          - [x] pitzDaily
      - [x] scalarTransportFoam
          - [x] pitzDaily
  - [ ] combustion
      - [x] PDRFoam
          - [x] flamePropagationWithObstacles
      - [x] XiEngineFoam
          - [x] kivaTest
      - [x] XiFoam
          - [x] RAS
              - [x] moriyoshiHomogeneous
      - [ ] chemFoam
          - [ ] gri
          - [ ] h2
          - [ ] ic8h18
          - [ ] ic8h18_TDAC
          - [ ] nc7h16
      - [ ] coldEngineFoam
          - [ ] freePiston
      - [ ] fireFoam
          - [ ] LES
              - [ ] flameSpreadWaterSuppressionPanel
              - [ ] oppositeBurningPanels
              - [ ] smallPoolFire2D
              - [ ] smallPoolFire3D
      - [ ] reactingFoam
          - [ ] RAS
              - [ ] DLR_A_LTS
              - [ ] SandiaD_LTS
              - [ ] membrane
          - [ ] laminar
              - [ ] counterFlowFlame2D
              - [ ] counterFlowFlame2DLTS
              - [ ] counterFlowFlame2DLTS_GRI_TDAC
              - [ ] counterFlowFlame2D_GRI
              - [ ] counterFlowFlame2D_GRI_TDAC
  - [ ] compressible
      - [ ] rhoCentralFoam
          - [ ] LadenburgJet60psi
          - [ ] biconic25-55Run35
          - [ ] forwardStep
          - [ ] movingCone
          - [ ] obliqueShock
          - [ ] shockTube
          - [ ] wedge15Ma5
      - [ ] rhoPimpleFoam
          - [ ] LES
              - [ ] pitzDaily
          - [ ] RAS
              - [ ] aerofoilNACA0012
              - [ ] angledDuct
              - [ ] angledDuctLTS
              - [ ] annularThermalMixer
              - [ ] cavity
              - [ ] mixerVessel2D
              - [x] nacaAirfoil
              - [ ] prism
              - [ ] squareBendLiq
          - [ ] laminar
              - [ ] blockedChannel
              - [ ] decompressionTank
              - [ ] forwardStep
              - [ ] helmholtzResonance
              - [ ] shockTube
      - [ ] rhoPorousSimpleFoam
          - [ ] angledDuctExplicit
          - [ ] angledDuctImplicit
      - [ ] rhoSimpleFoam
          - [ ] aerofoilNACA0012
          - [ ] angledDuctExplicitFixedCoeff
          - [ ] squareBend
          - [ ] squareBendLiq
  - [ ] discreteMethods
      - [ ] dsmcFoam
          - [ ] freeSpacePeriodic
          - [ ] freeSpaceStream
          - [ ] supersonicCorner
          - [ ] wedge15Ma5
      - [ ] molecularDynamics
          - [ ] mdEquilibrationFoam
              - [ ] periodicCubeArgon
              - [ ] periodicCubeWater
          - [ ] mdFoam
              - [ ] nanoNozzle
  - [ ] electromagnetics
      - [ ] electrostaticFoam
          - [ ] chargedWire
      - [ ] mhdFoam
          - [ ] hartmann
  - [x] financial
      - [x] financialFoam
          - [x] europeanCall
  - [ ] heatTransfer
      - [ ] buoyantPimpleFoam
          - [ ] BernardCells
          - [ ] hotRoom
          - [ ] hotRoomBoussinesq
      - [ ] buoyantSimpleFoam
          - [ ] buoyantCavity
          - [ ] circuitBoardCooling
          - [ ] externalCoupledCavity
          - [ ] hotRadiationRoom
          - [ ] hotRadiationRoomFvDOM
          - [ ] hotRoomBoussinesq
          - [ ] iglooWithFridges
      - [ ] chtMultiRegionFoam
          - [ ] coolingSphere
          - [ ] heatExchanger
          - [ ] heatedDuct
          - [ ] reverseBurner
          - [ ] shellAndTubeHeatExchanger
  - [ ] incompressible
      - [ ] SRFPimpleFoam
          - [ ] rotor2D
      - [ ] SRFSimpleFoam
          - [ ] mixer
      - [ ] adjointShapeOptimizationFoam
          - [ ] pitzDaily
      - [ ] boundaryFoam
          - [ ] boundaryLaunderSharma
          - [ ] boundaryWallFunctions
          - [ ] boundaryWallFunctionsProfile
      - [ ] icoFoam
          - [ ] cavity
              - [ ] cavity
              - [ ] cavityClipped
              - [ ] cavityGrade
          - [x] elbow
      - [ ] nonNewtonianIcoFoam
          - [ ] offsetCylinder
      - [ ] pimpleFoam
          - [ ] LES
              - [ ] channel395
          - [ ] RAS
              - [ ] TJunction
              - [ ] TJunctionFan
              - [ ] elipsekkLOmega
              - [ ] impeller
              - [ ] oscillatingInletACMI2D
              - [ ] pitzDaily
              - [ ] pitzDailyLTS
              - [ ] propeller
              - [ ] wingMotion
          - [ ] laminar
              - [ ] blockedChannel
              - [ ] mixerVesselAMI2D
              - [ ] movingCone
              - [ ] offsetCylinder
              - [ ] planarContraction
              - [ ] planarCouette
              - [ ] planarPoiseuille
      - [ ] pisoFoam
          - [ ] LES
              - [ ] motorBike
              - [ ] pitzDaily
              - [ ] pitzDailyMapped
          - [ ] RAS
              - [ ] cavity
              - [ ] cavityCoupledU
          - [ ] laminar
              - [ ] porousBlockage
      - [ ] porousSimpleFoam
          - [ ] angledDuctExplicit
          - [ ] angledDuctImplicit
          - [ ] straightDuctImplicit
      - [ ] shallowWaterFoam
          - [ ] squareBump
      - [ ] simpleFoam
          - [ ] T3A
          - [x] airFoil2D
          - [ ] mixerVessel2D
          - [ ] motorBike
          - [x] pipeCyclic
          - [ ] pitzDaily
          - [ ] pitzDailyExptInlet
          - [ ] rotorDisk
          - [ ] turbineSiting
          - [ ] windAroundBuildings
  - [ ] lagrangian
      - [ ] DPMFoam
          - [ ] Goldschmidt
      - [ ] MPPICFoam
          - [ ] Goldschmidt
          - [ ] column
          - [ ] cyclone
          - [ ] injectionChannel
      - [ ] coalChemistryFoam
          - [ ] simplifiedSiwek
      - [ ] icoUncoupledKinematicParcelFoam
          - [ ] hopper
              - [ ] hopperEmptying
              - [ ] hopperInitialState
          - [ ] mixerVesselAMI2D
      - [ ] reactingParcelFoam
          - [ ] counterFlowFlame2DLTS
          - [ ] cylinder
          - [ ] filter
          - [ ] hotBoxes
          - [ ] parcelInBox
          - [ ] rivuletPanel
          - [ ] splashPanel
          - [ ] verticalChannel
          - [ ] verticalChannelLTS
      - [ ] simpleReactingParcelFoam
          - [ ] verticalChannel
      - [ ] sprayFoam
          - [ ] aachenBomb
  - [ ] mesh
      - [ ] blockMesh
          - [ ] pipe
          - [ ] sphere
          - [ ] sphere7
          - [ ] sphere7ProjectedEdges
      - [ ] foamyHexMesh
          - [ ] blob
          - [ ] flange
          - [ ] mixerVessel
          - [ ] simpleShapes
          - [ ] straightDuctImplicit ??? ../../incompressible/porousSimpleFoam/straightDuctImplicit
      - [ ] foamyQuadMesh
          - [ ] jaggedBoundary
          - [ ] square
      - [ ] moveDynamicMesh
          - [ ] SnakeRiverCanyon
      - [ ] refineMesh
          - [ ] refineFieldDirs
      - [ ] snappyHexMesh
          - [ ] flange
          - [ ] iglooWithFridges ??? ../../heatTransfer/buoyantSimpleFoam/iglooWithFridges
          - [ ] motorBike ??? ../../incompressible/simpleFoam/motorBike
  - [ ] multiphase
      - [x] cavitatingFoam
          - [x] LES
              - [x] throttle
              - [x] throttle3D
          - [x] RAS
              - [x] throttle
      - [ ] compressibleInterFoam
          - [ ] laminar
              - [ ] climbingRod
              - [ ] depthCharge2D
              - [ ] depthCharge3D
              - [x] sloshingTank2D
      - [x] compressibleMultiphaseInterFoam
          - [x] laminar
              - [x] damBreak4phase
      - [ ] driftFluxFoam
          - [ ] RAS
              - [ ] dahl
              - [ ] mixerVessel2D
              - [ ] tank3D
      - [ ] interFoam
          - [x] LES
              - [x] nozzleFlow2D
          - [ ] RAS
              - [x] DTCHull
              - [ ] DTCHullMoving
              - [ ] DTCHullWave
              - [ ] angledDuct
              - [ ] damBreak
              - [ ] damBreakPorousBaffle
              - [ ] floatingObject
              - [x] mixerVesselAMI
              - [ ] waterChannel
              - [ ] weirOverflow
          - [ ] laminar
              - [ ] capillaryRise
              - [ ] damBreak
              - [x] damBreakWithObstacle
              - [ ] mixerVessel2D
              - [ ] sloshingCylinder
              - [ ] sloshingTank2D
              - [ ] sloshingTank2D3DoF
              - [ ] sloshingTank3D
              - [ ] sloshingTank3D3DoF
              - [x] sloshingTank3D6DoF
              - [ ] testTubeMixer
              - [ ] wave
      - [x] interMixingFoam
          - [x] laminar
              - [x] damBreak
      - [ ] interPhaseChangeFoam
          - [ ] cavitatingBullet
          - [x] propeller
      - [ ] multiphaseEulerFoam
          - [ ] bubbleColumn
          - [ ] damBreak4phase
          - [ ] damBreak4phaseFine
          - [ ] mixerVessel2D
      - [x] multiphaseInterFoam
          - [x] laminar
              - [x] damBreak4phase
              - [x] damBreak4phaseFine
              - [x] mixerVessel2D
      - [ ] potentialFreeSurfaceFoam
          - [ ] movingOscillatingBox
          - [ ] oscillatingBox
      - [ ] reactingMultiphaseEulerFoam
          - [ ] RAS
              - [ ] wallBoiling1D_2phase
              - [ ] wallBoiling1D_3phase
          - [ ] laminar
              - [ ] bed
              - [ ] bubbleColumn
              - [ ] bubbleColumnFixedPolydisperse
              - [ ] bubbleColumnPolydisperse
              - [ ] mixerVessel2D
              - [ ] trickleBed
      - [ ] reactingTwoPhaseEulerFoam
          - [ ] LES
              - [ ] bubbleColumn
          - [ ] RAS
              - [ ] LBend
              - [ ] bubbleColumn
              - [ ] bubbleColumnEvaporatingReacting
              - [ ] bubbleColumnPolydisperse
              - [ ] fluidisedBed
              - [ ] wallBoiling
              - [ ] wallBoiling1D
              - [ ] wallBoilingIATE
              - [ ] wallBoilingPolyDisperse
          - [ ] laminar
              - [ ] bubbleColumn
              - [ ] bubbleColumnEvaporating
              - [ ] bubbleColumnEvaporatingDissolving
              - [ ] bubbleColumnIATE
              - [ ] fluidisedBed
              - [ ] injection
              - [ ] mixerVessel2D
              - [ ] steamInjection
      - [ ] twoLiquidMixingFoam
          - [ ] lockExchange
      - [ ] twoPhaseEulerFoam
          - [ ] LES
              - [ ] bubbleColumn
          - [ ] RAS
              - [ ] bubbleColumn
              - [ ] fluidisedBed
          - [ ] laminar
              - [ ] bubbleColumn
              - [ ] bubbleColumnIATE
              - [ ] fluidisedBed
              - [ ] injection
              - [ ] mixerVessel2D
  - [ ] resources
      - [ ] geometry
  - [x] stressAnalysis
      - [x] solidDisplacementFoam
          - [x] plateHole
      - [x] solidEquilibriumDisplacementFoam
          - [x] beamEndLoad
</details>
