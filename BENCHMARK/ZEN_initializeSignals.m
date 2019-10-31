%% ************************************************************************
%
%           Description : initialize Signals used for simulation
%                           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - simParams : struct containing simulation parameters
%                       
%           Outputs : 
%                       - signals : Struct containing all simulation signals
%
% *************************************************************************

function [signals] = ZEN_initializeSignals(paramsSim)

t = [0:paramsSim.Ts:paramsSim.duration] + paramsSim.t0;
Npts = length(t);
% numMonteCarlo = paramsSim.numMonteCarloSim;

%% ************************************************************************
%
%                           Dynamic signals
%
% *************************************************************************

signals.t = t;
signals.position = zeros(2,Npts);
signals.velocity = zeros(2,Npts);


%% ************************************************************************
%
%                           Sonar signals
%
% *************************************************************************

signals.sonar.newMeasurement = zeros(1, Npts, 'int8');
signals.sonar.range_perfect = zeros(1, Npts);
signals.sonar.azimuth_perfect = zeros(1, Npts);
signals.sonar.range = zeros(1, Npts);
signals.sonar.azimuth = zeros(1, Npts);

end