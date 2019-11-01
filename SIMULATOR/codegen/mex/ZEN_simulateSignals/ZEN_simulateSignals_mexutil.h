/*
 * ZEN_simulateSignals_mexutil.h
 *
 * Code generation for function 'ZEN_simulateSignals_mexutil'
 *
 */

#ifndef ZEN_SIMULATESIGNALS_MEXUTIL_H
#define ZEN_SIMULATESIGNALS_MEXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "omp.h"
#include "ZEN_simulateSignals_types.h"

/* Function Declarations */
extern emlrtCTX emlrtGetRootTLSGlobal(void);
extern void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX
  aTLS, void *aData);

#endif

/* End of code generation (ZEN_simulateSignals_mexutil.h) */
