/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "sqrt.h"
#include "ZEN_objectTracking_V0_engine_data.h"

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T *x)
{
  if (*x < 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.c) */
