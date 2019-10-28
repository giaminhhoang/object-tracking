%% ****************************************************************
%
%           Description : function that read Reference file 
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs :
%                       - none (using default resolution)
%
%           Outputs :
%                       - none
%
% *************************************************************


function [valuesRef] = ZEN_readReference(varargin)

switch nargin

    case 0

        path = [pwd, '\DATA\'];
        file = '*.mat';

        [file,path]=uigetfile([path,file],'Choose reference file');

    case 2

        path = varargin{1};
        file = varargin{2};

    otherwise
        error('Invalid inputs');

end

disp(['Loading file ', fullfile(path,file)]);
load(fullfile(path,file));

valuesRef = x_traj_pos;