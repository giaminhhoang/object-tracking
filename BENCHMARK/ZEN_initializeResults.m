%% ****************************************************************
%
%           Description : initialize results struct
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - signals struct
%                       
%           Outputs : 
%                       - results struct
%
% *************************************************************

function [results] = ZEN_initializeResults(signals)

Npts = length(signals.t);

% initialize structure
results.t = zeros(1,Npts);

% algorithm status
results.status = zeros(1,Npts,'int8');

% solution used in the algorithm
results.usedInSolution = zeros(1,Npts,'int8');

% main outputs
results.position = zeros(2,Npts);
results.velocity = zeros(2,Npts);
results.positionStd = zeros(2,Npts);
results.velocityStd = zeros(2,Npts);
    
% innovations
results.innovationRange = zeros(2,Npts);
results.innovationAzimuth = zeros(2,Npts);
    
results.innovationRangeNorm = zeros(2,Npts);
results.innovationAzimuthNorm = zeros(2,Npts);
    
results.innovationRangeStd = zeros(2,Npts);
results.innovationAzimuthStd = zeros(2,Npts);

end