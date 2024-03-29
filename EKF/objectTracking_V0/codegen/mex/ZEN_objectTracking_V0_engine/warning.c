/*
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "warning.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtRSInfo sd_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
};

/* Function Declarations */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m38;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m38, 4, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m36;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m36, 2, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp, int32_T varargin_1, const char_T
               varargin_2[14])
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m6;
  static const int32_T iv6[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m7;
  static const int32_T iv7[2] = { 1, 32 };

  static const char_T msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *d_y;
  const mxArray *m8;
  const mxArray *e_y;
  const mxArray *m9;
  static const int32_T iv8[2] = { 1, 14 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 7, m5, &u[0]);
  emlrtAssign(&y, m5);
  b_y = NULL;
  m6 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 7, m6, &b_u[0]);
  emlrtAssign(&b_y, m6);
  c_y = NULL;
  m7 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 32, m7, &msgID[0]);
  emlrtAssign(&c_y, m7);
  d_y = NULL;
  m8 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m8) = varargin_1;
  emlrtAssign(&d_y, m8);
  e_y = NULL;
  m9 = emlrtCreateCharArray(2, iv8);
  emlrtInitCharArrayR2013a(sp, 14, m9, &varargin_2[0]);
  emlrtAssign(&e_y, m9);
  st.site = &sd_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, e_y, &b_emlrtMCI), &c_emlrtMCI);
}

void warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv3[2] = { 1, 21 };

  static const char_T msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m0, &u[0]);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 21, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  st.site = &sd_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &b_emlrtMCI), &c_emlrtMCI);
}

/* End of code generation (warning.c) */
