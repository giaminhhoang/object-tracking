%% ****************************************************************
%
%           Description : simulate complete dynamics and sonar signals
%                           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - Params : struct containing simulation parameters 
%                       - Profile : struct containing profile parameters
%           Outputs : 
%                       - Signals : struct containing all signals generated by simulation
%
% *************************************************************

function [signals] = ZEN_simulateSignals(simulationParameters, profile)

%% *************************************************************
%
%   Dynamics signals generation
%
% **************************************************************

if simulationParameters.displayText
    disp('Trajectory generation...')
end

tic;
if 

