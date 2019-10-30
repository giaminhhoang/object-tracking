/*
 * ZEN_objectTracking_V0_systemNoiseCov.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_systemNoiseCov'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_systemNoiseCov.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void c_ZEN_objectTracking_V0_systemN(real_T q, real_T Ts, real_T Q[16])
{
  int32_T i;
  static const int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  real_T Q_tmp;
  real_T b_Q_tmp;

  /*  **************************************************************** */
  /*  */
  /*            Description : return SystemNoiseCovMatrix  */
  /*                    frame = Cartesian */
  /*                    state = 4 parameters */
  /*             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - q : [1x1] spectral density of process noise in m^2/s^3 */
  /*                        - Ts : [1x1] sampling period in s */
  /*                         */
  /*            Outputs :  */
  /*                        - Q : [4x4] system noise covariance matrix */
  /*               */
  /*  */
  /*  ************************************************************* */
  for (i = 0; i < 16; i++) {
    Q[i] = iv[i];
  }

  Q_tmp = muDoubleScalarPower(Ts, 3.0) / 3.0;
  Q[0] = Q_tmp;
  b_Q_tmp = Ts * Ts / 2.0;
  Q[8] = b_Q_tmp;
  Q[5] = Q_tmp;
  Q[13] = b_Q_tmp;
  Q[2] = b_Q_tmp;
  Q[10] = Ts;
  Q[7] = b_Q_tmp;
  Q[15] = Ts;
  for (i = 0; i < 16; i++) {
    Q[i] *= q;
  }
}

/* End of code generation (ZEN_objectTracking_V0_systemNoiseCov.c) */
