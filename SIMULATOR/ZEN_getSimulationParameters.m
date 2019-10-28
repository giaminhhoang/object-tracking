%% ****************************************************************
%
%           Description : return simulation parameters
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - none 
%                       
%           Outputs : 
%                       - simulationParameters
%
% *************************************************************

function simParams = ZEN_getSimulationParameters(Npts,Ts)

simParams.algoName = 'EKF_V0';              % algorithm name under test
simParams.algoConfigName = 'standard';      % settings of the algorithm
simParams.displayName = 'objectTracking';   % configuration name for plottings

simParams.useMex = 1;
simParams.displayText = 1;
simParams.displayFig = 1;

% common parameters
simParams.Ts = Ts;                                     % sample interval
simParams.Npts = Npts;                                  % number of points in the simulation
simParams.t0 = 0;                                       % initial simulation time
simParams.tEnd = simParams.t0 + (simParams.Npts - 1)*simParams.Ts;     % end of simulation
simParams.duration = simParams.tEnd - simParams.t0;         % simulation duration

simParams.controlRandom = true;
simParams.numMonteCarloSim = 100;

% ***************************************************
%% loaded trajectory
simParams.useRandomTrajectory = 0;                         % loaded trajectory from file or simulated
simParams.loadedTrajectory.t = zeros(1,2048);              % loaded time vector
simParams.loadedTrajectory.position = zeros(2,2048);       % loaded position
