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