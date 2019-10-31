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
results.position_std = zeros(2,Npts);
results.velocity_std = zeros(2,Npts);
    
% innovations
results.innovationRange = zeros(1,Npts);
results.innovationAzimuth = zeros(1,Npts);
    
results.innovationRange_norm = zeros(1,Npts);
results.innovationAzimuth_norm = zeros(1,Npts);
    
results.innovationRange_std = zeros(1,Npts);
results.innovationAzimuth_std = zeros(1,Npts);

end