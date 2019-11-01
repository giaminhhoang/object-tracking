/*
 * interp1.h
 *
 * Code generation for function 'interp1'
 *
 */

#ifndef INTERP1_H
#define INTERP1_H

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
extern void interp1Linear(const emlrtStack *sp, const emxArray_real_T *y, const
  emxArray_real_T *xi, emxArray_real_T *yi, const emxArray_real_T *varargin_1);

#endif

/* End of code generation (interp1.h) */
