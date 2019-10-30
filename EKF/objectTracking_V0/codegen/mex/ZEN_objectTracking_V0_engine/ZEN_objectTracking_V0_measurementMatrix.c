/*
 * ZEN_objectTracking_V0_measurementMatrix.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_measurementMatrix'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_measurementMatrix.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 25, /* lineNo */
  "ZEN_objectTracking_V0_measurementMatrix",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_measurementMatrix.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

/* Function Definitions */
void c_ZEN_objectTracking_V0_measure(const emlrtStack *sp, const real_T Xk[4],
  real_T H[8])
{
  real_T range;
  real_T range2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  **************************************************************** */
  /*  */
  /*            Description : return MeasurmentMatrix  */
  /*                    frame = Cartesian */
  /*                    state = 4 parameters */
  /*             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - Xk : [4x1] state vector [x, y, vx, vy] */
  /*                         */
  /*            Outputs :  */
  /*                        - H : [2x4] measurement matrix */
  /*               */
  /*  */
  /*  ************************************************************* */
  memset(&H[0], 0, 8U * sizeof(real_T));
  st.site = &jb_emlrtRSI;
  range = Xk[0] * Xk[0] + Xk[1] * Xk[1];
  if (range < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  range = muDoubleScalarSqrt(range);
  range2 = range * range;

  /*  range measurement */
  H[0] = Xk[0] / range;

  /*  angle measurement */
  H[1] = -Xk[1] / range2;
  H[3] = Xk[0] / range2;
}

/* End of code generation (ZEN_objectTracking_V0_measurementMatrix.c) */
