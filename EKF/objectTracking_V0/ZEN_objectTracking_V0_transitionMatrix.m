%% ****************************************************************
%
%           Description : return TransitionMatrix
%                   frame = Cartesian
%                   state = 4 parameters
%           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - Ts : [1x1] sampling period
%                       
%           Outputs : 
%                       - Phi : [4x4] transition matrix
%             
%
% *************************************************************

function Phi = ZEN_objectTracking_V0_transitionMatrix(Ts)

Phi = eye(4);
Phi(1,3) = Ts;
Phi(2,4) = Ts;

