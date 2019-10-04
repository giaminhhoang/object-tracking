function H = getObjectTrackingMeasurementMatrix(Xk)

H = zeros(2,4);

range = sqrt(Xk(1,1)^2 + Xk(2,1)^2);
range2 = range*range;

H(1,1) = Xk(1,1)/range;
H(2,1) = Xk(2,1)/range;
H(2,1) = -Xk(2,1)/range2;
H(2,2) = Xk(1,1)/range2;
