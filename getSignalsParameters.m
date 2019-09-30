function params = getSignalsParameters()

deg2rad=pi/180;

params.Ts = 0.1;
params.sonarRangeStd = 0.1;
params.sonarAzimuthStd = 3*deg2rad;

params.controlRandom = true;
params.numberOfMonteCarloSimulation = 100;

