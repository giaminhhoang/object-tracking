%% ************************************************************************
%
%           Description : process a simulation according to a given test
%           number which defines
%               * profile = scenario for test (dynamics + sonar)
%               * algoName = algorithm used to process the simulation data
%               * displayName = selection of plots to display
%               * algoConfigName = configuration (=set of parameters) used
%               by the algorithm
%           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs :
%                       - none
%
%           Outputs :
%                       - stat : stucture containing simulation
%                       performances
%
% *************************************************************************

function [stat, signals, results] = ZEN_runSimulation()

%% *************************************************************
% parameters
useLoadedTrajectory = 1;        % 1: load trajectory, 0: generate random trajectory (TODO) 
useMex = 0;                     % run in mex to speed up

%% **************************************
%
%              Load a trajectory from file
% 
% ***************************************

testNum = 2;            % Test 1: loaded trajectory, with perfect sensors, algo = standard EKF
                        % Test 2: loaded trajectory, with standard sensor error model, algo = standard EKF
                        % Test 3: ...

%% ***************************************
% 
%              Display options
%   
% ****************************************

switch testNum

    case 1

        algoName = 'objectTracking_V0';
        displayName = 'objectTracking';
        profileName = 'submarine';
        algoConfigName = 'debug';
        Npts = 500;
        Ts = 0.1;

    case 2

        algoName = 'objectTracking_V0';
        displayName = 'all';
        profileName = 'submarine';
        algoConfigName = 'debug';
        Npts = 500;
        Ts = 0.1;

end

%******************************************
%               Algorithm config
% *****************************************

algoConfigNum = ZEN_getAlgoConfigNum(algoConfigName);

%******************************************
%               Simulation parameters
% *****************************************

[paramsSim] = ZEN_getSimulationParameters(Npts, Ts);
paramsSim.Ts = Ts;
paramsSim.Npts = Npts;
paramsSim.useMex = useMex;

if useLoadedTrajectory

    [valuesRef] = ZEN_readReference();
    Npts = length(valuesRef);

    paramsSim.Ts = 0.1;
    paramsSim.Npts = Npts;
    paramsSim.t0 = 0;
    t = paramsSim.t0:paramsSim.Ts:(Npts-1)*paramsSim.Ts;

    paramsSim.tEnd = t(end);
    paramsSim.useRandomTrajectory = 0;         % trajectory is loaded from file or simulated

    paramsSim.loadedTrajectory.t = t;
    paramsSim.loadedTrajectory.position = valuesRef;

end

%% **************************************
%              Display options
% ***************************************

[display] = ZEN_getDisplayOptions(displayName);


%% **************************************
%
%              Simulate signals
%
% ***************************************

% get profile
[profile] = ZEN_getProfile(profileName);

disp('**********************************')
disp('Simulation parameters: ')
disp(['Duration: T=', num2str((paramsSim.Npts-1)*paramsSim.Ts),' s, Ts=', num2str(paramsSim.Ts),' s']);

disp('Simulation...')
% simulate signals
if paramsSim.useMex
    [signals] = ZEN_simulateSignals_mex(paramsSim, profile);
else
    [signals] = ZEN_simulateSignals(paramsSim, profile);
end

%% **************************************
%
%              processing
%
% ***************************************

[results] = ZEN_algoEngine(paramsSim, signals, algoName, algoConfigNum, overwriteParamsList);


%% **************************************
%
%              Compute stats
%
% ***************************************

[stat] = ZEN_computeStat(results,signals,paramsSim);


%% **************************************
%
%               Display            
%
% ***************************************

display = ZEN_displayDynamicSignals();
display = ZEN_displaySensorSignanls();
display = ZEN_displayAlgorithmSignals();


disp('**********************************')
disp(['Statistics'])





