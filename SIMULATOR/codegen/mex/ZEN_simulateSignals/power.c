/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "power.h"
#include "ZEN_simulateSignals_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "ZEN_simulateSignals_data.h"

/* Variable Definitions */
static emlrtRSInfo eb_emlrtRSI = { 55, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 64, /* lineNo */
  "fltpower",                          /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 187,/* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRTEInfo o_emlrtRTEI = { 64,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  int32_T nx;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &eb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &fb_emlrtRSI;
  nx = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&b_st, y, nx, &o_emlrtRTEI);
  c_st.site = &gb_emlrtRSI;
  nx = a->size[1];
  d_st.site = &hb_emlrtRSI;
  overflow = ((1 <= y->size[1]) && (y->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &o_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
