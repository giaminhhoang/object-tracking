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

t = [0:paramsSim.Ts:(paramsSim.Npts-1)*paramsSim.Ts] + paramsSim.t0;
Npts = paramsSim.Npts;
numMonteCarlo = paramsSim.numMonteCarloSim;


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

signals.sonar_newMeasurement = zeros(1, Npts);
signals.sonar_range_perfect = zeros(1, Npts);
signals.sonar_azimuth_perfect = zeros(1, Npts);
signals.sonar_range = zeros(numMonteCarlo, Npts);
signals.sonar_azimuth = zeros(numMonteCarlo, Npts);

end