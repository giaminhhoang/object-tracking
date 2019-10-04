%% ****************************************************************
%
%           Description : process a simulation according to a given test
%           number which defines
%               * Profile = scenario for test (dynamics + sensors + GNSS + Odometer)
%               * AlgoName = algorithm used to process the simulation data
%               * DisplayName = selection of plots to display
%               * AlgoConfigName = configuration (=set of parameters) used
%               by the algorithm
%           
%
%           Author : 
%
%           Rev. 0 : baseline
%           Rev. 1 : group scenario of tests under "TestNum"
%
%           Inputs :
%                       - none
%
%           Outputs :
%                       - Stats : stucture containing simulation
%                       performances
%
% *************************************************************

function Stats = ZEN_runSimulation()

%% *************************************************************
% parameters
useLoadedTrajectory = 1;

%% **************************************
%
%              Load a trajectory from file
% 
% ***************************************

if useLoadedTrajectory

    [valuesRef] = ZEN_readReference();

    npts = length(valuesRef);

    params.dt = 0.1;
    params.t0 = 0;
    t = params.t0:params.dt:(npts-1)*params.dt;

    params.Tmax = t(end) - t(1);
    params.useRandomTrajectory = 0;         % trajectory is loaded from file or simulated

    params.loadedTrajectory.t = t;
    params.loadedTrajectory.position = valuesRef;

end

%% **************************************
%
%              Simulate signals
%
% ***************************************

% get profile
[profile] = ZEN_getProfile(profileName);


disp('Simulation...')
% simulate signals
[signals] = ZEN_generateSignalsFromReference(params, profile);

%% **************************************
%
%              processing
%
% ***************************************

[results] = objectTrackingEngine(signals, paramsSimulation, dataAlgo, paramsAlgo);


%% **************************************
%
%              Compute stats
%
% ***************************************

[stats] = computeStats(results,signals,params);


%% **************************************
%
%               Display            
%
% ***************************************







