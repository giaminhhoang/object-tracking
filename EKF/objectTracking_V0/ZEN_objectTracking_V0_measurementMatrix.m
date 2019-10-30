%% ****************************************************************
%
%           Description : return MeasurmentMatrix 
%                   frame = Cartesian
%                   state = 4 parameters
%           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - Xk : [4x1] state vector [x, y, vx, vy]
%                       
%           Outputs : 
%                       - H : [2x4] measurement matrix
%             
%
% *************************************************************

function [H] = ZEN_objectTracking_V0_measurementMatrix(Xk)

H = zeros(2,4);

range = sqrt(Xk(1,1)^2 + Xk(2,1)^2);
range2 = range*range;

% range measurement
H(1,1) = Xk(1,1)/range;
H(2,1) = Xk(2,1)/range;

% angle measurement
H(2,1) = -Xk(2,1)/range2;
H(2,2) = Xk(1,1)/range2;
