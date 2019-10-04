function params = getSignalsParameters()

deg2rad=pi/180;

params.Ts = 0.1;
params.sonarRangeStd = 0.1;
params.sonarAzimuthStd = 3*deg2rad;

params.controlRandom = true;
params.numberOfMonteCarloSimulation = 100;

% ***************************************************
%% loaded trajectory
params.useRandomTrajectory=1;                           % loaded trajectory from file or simulated
params.loadedTrajectory.t = zeros(1,2048);              % loaded time vector
params.loadedTrajectory.position = zeros(2,2048);       % loaded position
