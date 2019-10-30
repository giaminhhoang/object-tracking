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

function paramsSim = ZEN_getSimulationParameters(Npts,Ts)

paramsSim.algoName = 'objectTracking_V0';   % algorithm name under test
paramsSim.algoConfigName = 'debug';      % settings of the algorithm
paramsSim.displayName = 'objectTracking';   % configuration name for plottings

paramsSim.useMex = 1;
paramsSim.displayText = 1;
paramsSim.displayFig = 1;

% common parameters
paramsSim.Ts = Ts;                                     % sample interval
paramsSim.Npts = Npts;                                  % number of points in the simulation
paramsSim.t0 = 0;                                       % initial simulation time
paramsSim.tEnd = paramsSim.t0 + (paramsSim.Npts - 1)*paramsSim.Ts;     % end of simulation
paramsSim.duration = paramsSim.tEnd - paramsSim.t0;         % simulation duration

paramsSim.controlRandom = true;
% paramsSim.numMonteCarloSim = 100;

% ***************************************************
%% loaded trajectory
paramsSim.useRandomTrajectory = 0;                         % loaded trajectory from file or simulated
paramsSim.loadedTrajectory.t = zeros(1,2048);              % loaded time vector
paramsSim.loadedTrajectory.position = zeros(2,2048);       % loaded position
