%% ****************************************************************
%
%           Description : return SystemNoiseCovMatrix 
%                   frame = Cartesian
%                   state = 4 parameters
%           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - q : [1x1] spectral density of process noise in m^2/s^3
%                       - Ts : [1x1] sampling period in s
%                       
%           Outputs : 
%                       - Q : [4x4] system noise covariance matrix
%             
%
% *************************************************************


function Q = getObjectTrackingSystemNoiseCov(q, Ts)

Q = eye(4);

Q(1,1) = Ts^3/3;
Q(1,3) = Ts^2/2;
Q(2,2) = Ts^3/3;
Q(2,4) = Ts^2/2;
Q(3,1) = Ts^2/2;
Q(3,3) = Ts;
Q(4,2) = Ts^2/2;
Q(4,4) = Ts;

Q = q*Q;