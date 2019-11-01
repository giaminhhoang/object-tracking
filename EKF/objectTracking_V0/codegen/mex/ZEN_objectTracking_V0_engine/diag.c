/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "diag.h"

/* Function Definitions */
void diag(const real_T v[2], real_T d[4])
{
  d[1] = 0.0;
  d[2] = 0.0;
  d[0] = v[0];
  d[3] = v[1];
}

/* End of code generation (diag.c) */
