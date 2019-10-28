function simulationParameters = getSimulationParameters()

simulationParameters.Ts = 0.1;

simulationParameters.displayText = 1;

simulationParameters.controlRandom = true;
simulationParameters.numberOfMonteCarloSimulation = 100;

% ***************************************************
%% loaded trajectory
simulationParameters.useRandomTrajectory = 1;                         % loaded trajectory from file or simulated
simulationParameters.loadedTrajectory.t = zeros(1,2048);              % loaded time vector
simulationParameters.loadedTrajectory.position = zeros(2,2048);       % loaded position
