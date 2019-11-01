/*
 * randn.c
 *
 * Code generation for function 'randn'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "randn.h"
#include "ZEN_simulateSignals_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "randn",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pName */
};

/* Function Definitions */
void randn(const emlrtStack *sp, real_T varargin_2, emxArray_real_T *r)
{
  int32_T i3;
  i3 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity_real_T(sp, r, i3, &p_emlrtRTEI);
  emlrtRandn(&r->data[0], r->size[1]);
}

/* End of code generation (randn.c) */
