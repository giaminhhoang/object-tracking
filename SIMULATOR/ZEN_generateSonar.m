%% ****************************************************************
%
%           Description : generate sonar signals
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - signals : struct containing simulation signals
%                       - profile : struct containging sensors parameters
%           Outputs : 
%                       - signals : updated struct with sensors signals
%
% *************************************************************

function signals = ZEN_generateSonar(signals, profile)

Npts = length(signals.t);
Ts = (signals.t(Npts)-signals.t(1))/(Npts-1);

%% build the reference (perfect signal)
signals.sonar.range_perfect = sqrt(signals.position(1,:).^2 + signals.position(2,:).^2);
signals.sonar.azimuth_perfect = atan2(signals.position(2,:), signals.position(1,:));

%% ************************************************************************
% new measurement flag
% compute update measurement flags
Inew = round([1:profile.sonar.Ts/Ts:Npts]);
signals.sonar.newMeasurement(Inew) = int8(1);

% generate random measuements
signals.sonar.range = signals.sonar.range_perfect + profile.sonar.range_std * randn(1,Npts);
signals.sonar.azimuth = signals.sonar.azimuth_perfect + profile.sonar.azimuth_std * randn(1,Npts);

end