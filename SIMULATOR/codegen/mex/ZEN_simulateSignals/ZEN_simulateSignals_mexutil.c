/*
 * ZEN_simulateSignals_mexutil.c
 *
 * Code generation for function 'ZEN_simulateSignals_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "ZEN_simulateSignals_mexutil.h"
#include "ZEN_simulateSignals_data.h"

/* Function Definitions */
emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (ZEN_simulateSignals_mexutil.c) */
