/*
 * interp1.c
 *
 * Code generation for function 'interp1'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "interp1.h"
#include "eml_int_forloop_overflow_check.h"
#include "ZEN_simulateSignals_data.h"

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 582, /* lineNo */
  "interp1Linear",                     /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

/* Function Definitions */
void interp1Linear(const emlrtStack *sp, const emxArray_real_T *y, const
                   emxArray_real_T *xi, emxArray_real_T *yi, const
                   emxArray_real_T *varargin_1)
{
  real_T minx;
  real_T maxx;
  boolean_T overflow;
  int32_T ub_loop;
  int32_T k;
  int32_T high_i;
  int32_T low_i;
  int32_T low_ip1;
  real_T r;
  int32_T mid_i;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  minx = varargin_1->data[0];
  maxx = varargin_1->data[varargin_1->size[1] - 1];
  st.site = &w_emlrtRSI;
  overflow = ((1 <= xi->size[1]) && (xi->size[1] > 2147483646));
  if (overflow) {
    b_st.site = &o_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  ub_loop = xi->size[1];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel for \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(high_i,low_i,low_ip1,r,mid_i)

  for (k = 0; k <= ub_loop; k++) {
    if (muDoubleScalarIsNaN(xi->data[k])) {
      yi->data[k] = rtNaN;
    } else {
      if ((!(xi->data[k] > maxx)) && (!(xi->data[k] < minx))) {
        high_i = varargin_1->size[1];
        low_i = 1;
        low_ip1 = 2;
        while (high_i > low_ip1) {
          mid_i = (low_i >> 1) + (high_i >> 1);
          if (((low_i & 1) == 1) && ((high_i & 1) == 1)) {
            mid_i++;
          }

          if (xi->data[k] >= varargin_1->data[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i + 1;
          } else {
            high_i = mid_i;
          }
        }

        r = (xi->data[k] - varargin_1->data[low_i - 1]) / (varargin_1->
          data[low_i] - varargin_1->data[low_i - 1]);
        if (r == 0.0) {
          yi->data[k] = y->data[low_i - 1];
        } else if (r == 1.0) {
          yi->data[k] = y->data[low_i];
        } else if (y->data[low_i - 1] == y->data[low_i]) {
          yi->data[k] = y->data[low_i - 1];
        } else {
          yi->data[k] = (1.0 - r) * y->data[low_i - 1] + r * y->data[low_i];
        }
      }
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
}

/* End of code generation (interp1.c) */
