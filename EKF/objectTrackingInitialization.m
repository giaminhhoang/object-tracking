function [data_algo, params_algo] = objectTrackingInitialization()

%% data structure definition
data_algo.t = 0;        % current time

data_algo.UsedInSolution = int8(0);     % (1) : Sonar range
                                        % (2) : Sonar azimuth

% sonar measurements
data_algo.sonar.range = 0;
data_algo.sonar.azimuth = 0;

% Extended Kalman filter
data_algo.EKF.dt = 0;       % update period
data_algo.EKF.Xk = zeros(4,1);     % state vector: [x, y, vx, vy]
data_algo.EKF.Pk = eye(4);

data_algo.EKF.InnovationRange = 0;
data_algo.EKF.InnovationAzimuth = 0;
data_algo.EKF.InnovationRangeNorm = 0;
data_algo.EKF.InnovationAzimuthNorm = 0;
data_algo.EKF.InnovationRangeStd = 0;
data_algo.EKF.InnovationAzimuthStd = 0;

% main outputs
data_algo.outputs.position = zeros(2,1);
data_algo.outputs.velocity = zerod(2,1);
data_algo.outputs.positionStd = zeros(2,1);
data_algo.outputs.velocityStd = zeros(2,1);

%% params structure defintion
params_algo.configNum = 0;  % default config

% processing parameters
params_algo.Ts = 0.1;           % sampling period 
params_algo.maximalUpdatePeriod = 0.2;
params_algo.minimalUpdatePeriod = 0;

% initial uncertainty
params_algo.positionStd0 = 1;
params_algo.velocityStd0 = 1;

% Sonar parameters
params_algo.sonarInnovationPositionThreshold = 6;
params_algo.sonarInnovationVelocityThreshold = 6;


