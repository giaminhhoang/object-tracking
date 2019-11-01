%% ************************************************************************
%
%           Description : compute metrics from reference signals and Results
%                         
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - signals  : structure containing all reference signals
%                       - results : structure containing
%                       
%           Outputs : 
%                       - stats : error structure
%
% *************************************************************************

function [stat] = ZEN_computeStat(signals,results)

% compute errors
position_error = results.position - signals.position;
velocity_error = results.velocity - signals.velocity;

% position x
stat.position_x.mean = mean(position_error(1,:),2);         % mean value
stat.position_x.std = sqrt(var(position_error(1,:),1,2));   % std
stat.position_x.rms = sqrt(mean(position_error(1,:).^2));   % rms
stat.position_x.max = max(abs(position_error(1,:)));        % max
stat.position_x.Nvalues = length(position_error(1,:));      % Nvalues

% position y
stat.position_y.mean = mean(position_error(2,:),2);         % mean value
stat.position_y.std = sqrt(var(position_error(2,:),1,2));   % std
stat.position_y.rms = sqrt(mean(position_error(2,:).^2));   % rms
stat.position_y.max = max(abs(position_error(2,:)));        % max
stat.position_y.Nvalues = length(position_error(2,:));      % Nvalues

% velocity x
stat.velocity_x.mean = mean(velocity_error(1,:),2);         % mean value
stat.velocity_x.std = sqrt(var(velocity_error(1,:),1,2));   % std
stat.velocity_x.rms = sqrt(mean(velocity_error(1,:).^2));   % rms
stat.velocity_x.max = max(abs(velocity_error(1,:)));        % max
stat.velocity_x.Nvalues = length(velocity_error(1,:));      % Nvalues

% velocity y
stat.velocity_y.mean = mean(velocity_error(2,:),2);         % mean value
stat.velocity_y.std = sqrt(var(velocity_error(2,:),1,2));   % std
stat.velocity_y.rms = sqrt(mean(velocity_error(2,:).^2));   % rms
stat.velocity_y.max = max(abs(velocity_error(2,:)));        % max
stat.velocity_y.Nvalues = length(velocity_error(2,:));      % Nvalues

end

