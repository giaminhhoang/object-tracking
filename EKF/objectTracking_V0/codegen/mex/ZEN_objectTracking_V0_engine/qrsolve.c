/*
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo kc_emlrtRSI = { 35, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 39, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 46, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 57, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 85, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 86, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 119,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 123,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 132,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 131,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 130,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 79, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 102,/* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtMCInfo d_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtRSInfo gd_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void qrsolve(const emlrtStack *sp, const real_T A_data[], const int32_T A_size[2],
             const real_T B_data[], const int32_T B_size[2], real_T Y_data[],
             int32_T Y_size[2])
{
  int32_T A_size_idx_0;
  int32_T minmn;
  int32_T maxmn;
  real_T b_A_data[4];
  int32_T na;
  int32_T jpvt_data[2];
  int32_T minmana;
  int32_T i;
  real_T tau_data[2];
  ptrdiff_t jpvt_t_data[2];
  real_T tol;
  ptrdiff_t info_t;
  const mxArray *y;
  boolean_T p;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *b_y;
  int32_T j;
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 'q', 'p', '3' };

  real_T b_B_data[8];
  const mxArray *m1;
  char_T str[14];
  ptrdiff_t nrc_t;
  boolean_T b_p;
  static const char_T b_fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'o', 'r', 'm', 'q', 'r' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  A_size_idx_0 = A_size[0];
  minmn = A_size[1];
  maxmn = A_size[0] * A_size[1];
  if (0 <= maxmn - 1) {
    memcpy(&b_A_data[0], &A_data[0], maxmn * sizeof(real_T));
  }

  na = A_size[1] - 1;
  if (0 <= minmn - 1) {
    memset(&jpvt_data[0], 0, minmn * sizeof(int32_T));
  }

  b_st.site = &nc_emlrtRSI;
  minmana = muIntScalarMin_sint32(A_size[0], A_size[1]);
  c_st.site = &oc_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
    if (0 <= minmana - 1) {
      memset(&tau_data[0], 0, minmana * sizeof(real_T));
    }

    for (maxmn = 0; maxmn <= na; maxmn++) {
      jpvt_data[maxmn] = maxmn + 1;
    }
  } else {
    for (i = 0; i < minmn; i++) {
      jpvt_t_data[i] = (ptrdiff_t)0;
    }

    c_st.site = &qc_emlrtRSI;
    c_st.site = &rc_emlrtRSI;
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A_size[0], (ptrdiff_t)A_size[1],
      &b_A_data[0], (ptrdiff_t)A_size[0], &jpvt_t_data[0], &tau_data[0]);
    maxmn = (int32_T)info_t;
    c_st.site = &sc_emlrtRSI;
    if (maxmn != 0) {
      p = true;
      if (maxmn != -4) {
        if (maxmn == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, maxmn);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      for (j = 0; j <= na; j++) {
        for (minmn = 0; minmn < A_size_idx_0; minmn++) {
          b_A_data[j * A_size_idx_0 + minmn] = rtNaN;
        }
      }

      i = na + 1;
      minmn = muIntScalarMin_sint32(A_size[0], i) - 1;
      for (maxmn = 0; maxmn <= minmn; maxmn++) {
        tau_data[maxmn] = rtNaN;
      }

      if (minmn + 2 <= minmana) {
        tau_data[1] = 0.0;
      }

      for (maxmn = 0; maxmn <= na; maxmn++) {
        jpvt_data[maxmn] = maxmn + 1;
      }
    } else {
      for (maxmn = 0; maxmn <= na; maxmn++) {
        jpvt_data[maxmn] = (int32_T)jpvt_t_data[maxmn];
      }
    }
  }

  st.site = &lc_emlrtRSI;
  minmana = 0;
  tol = 0.0;
  if (A_size[0] < A_size[1]) {
    minmn = A_size[0];
    maxmn = A_size[1];
  } else {
    minmn = A_size[1];
    maxmn = A_size[0];
  }

  if (minmn > 0) {
    tol = 2.2204460492503131E-15 * (real_T)maxmn * muDoubleScalarAbs(b_A_data[0]);
    while ((minmana < minmn) && (!(muDoubleScalarAbs(b_A_data[minmana +
              A_size_idx_0 * minmana]) <= tol))) {
      minmana++;
    }
  }

  if (minmana < minmn) {
    b_st.site = &tc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m1);
    c_st.site = &gd_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &d_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &uc_emlrtRSI;
    b_warning(&b_st, minmana, str);
  }

  st.site = &mc_emlrtRSI;
  na = B_size[0];
  maxmn = B_size[0] * B_size[1];
  if (0 <= maxmn - 1) {
    memcpy(&b_B_data[0], &B_data[0], maxmn * sizeof(real_T));
  }

  Y_size[0] = (int8_T)A_size[1];
  Y_size[1] = 4;
  maxmn = (int8_T)A_size[1] << 2;
  if (0 <= maxmn - 1) {
    memset(&Y_data[0], 0, maxmn * sizeof(real_T));
  }

  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if ((A_size[0] != 0) && (A_size[1] != 0) && (B_size[0] != 0)) {
    nrc_t = (ptrdiff_t)B_size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)4, (ptrdiff_t)
      muIntScalarMin_sint32(A_size[0], A_size[1]), &b_A_data[0], (ptrdiff_t)
      A_size[0], &tau_data[0], &b_B_data[0], nrc_t);
    maxmn = (int32_T)info_t;
    d_st.site = &cd_emlrtRSI;
    if (maxmn != 0) {
      p = true;
      b_p = false;
      if (maxmn == -7) {
        b_p = true;
      } else if (maxmn == -9) {
        b_p = true;
      } else {
        if (maxmn == -10) {
          b_p = true;
        }
      }

      if (!b_p) {
        if (maxmn == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &c_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, b_fname, 12, maxmn);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      for (i = 0; i < na; i++) {
        b_B_data[i] = rtNaN;
      }

      for (i = 0; i < na; i++) {
        b_B_data[i + na] = rtNaN;
      }

      for (i = 0; i < na; i++) {
        b_B_data[i + na * 2] = rtNaN;
      }

      for (i = 0; i < na; i++) {
        b_B_data[i + na * 3] = rtNaN;
      }
    }
  }

  for (minmn = 0; minmn < minmana; minmn++) {
    Y_data[jpvt_data[minmn] - 1] = b_B_data[minmn];
  }

  for (j = minmana; j >= 1; j--) {
    i = jpvt_data[j - 1];
    maxmn = A_size_idx_0 * (j - 1);
    Y_data[i - 1] /= b_A_data[(j + maxmn) - 1];
    for (minmn = 0; minmn <= j - 2; minmn++) {
      Y_data[jpvt_data[0] - 1] -= Y_data[jpvt_data[j - 1] - 1] * b_A_data[maxmn];
    }
  }

  for (minmn = 0; minmn < minmana; minmn++) {
    Y_data[(jpvt_data[minmn] + Y_size[0]) - 1] = b_B_data[minmn + na];
  }

  for (j = minmana; j >= 1; j--) {
    maxmn = (jpvt_data[j - 1] + Y_size[0]) - 1;
    Y_data[maxmn] /= b_A_data[(j + A_size_idx_0 * (j - 1)) - 1];
    for (minmn = 0; minmn <= j - 2; minmn++) {
      maxmn = (jpvt_data[0] + Y_size[0]) - 1;
      Y_data[maxmn] -= Y_data[(jpvt_data[j - 1] + Y_size[0]) - 1] *
        b_A_data[A_size_idx_0 * (j - 1)];
    }
  }

  for (minmn = 0; minmn < minmana; minmn++) {
    Y_data[(jpvt_data[minmn] + Y_size[0] * 2) - 1] = b_B_data[minmn + na * 2];
  }

  for (j = minmana; j >= 1; j--) {
    maxmn = (jpvt_data[j - 1] + Y_size[0] * 2) - 1;
    Y_data[maxmn] /= b_A_data[(j + A_size_idx_0 * (j - 1)) - 1];
    for (minmn = 0; minmn <= j - 2; minmn++) {
      maxmn = (jpvt_data[0] + Y_size[0] * 2) - 1;
      Y_data[maxmn] -= Y_data[(jpvt_data[j - 1] + Y_size[0] * 2) - 1] *
        b_A_data[A_size_idx_0 * (j - 1)];
    }
  }

  for (minmn = 0; minmn < minmana; minmn++) {
    Y_data[(jpvt_data[minmn] + Y_size[0] * 3) - 1] = b_B_data[minmn + na * 3];
  }

  for (j = minmana; j >= 1; j--) {
    maxmn = (jpvt_data[j - 1] + Y_size[0] * 3) - 1;
    Y_data[maxmn] /= b_A_data[(j + A_size_idx_0 * (j - 1)) - 1];
    for (minmn = 0; minmn <= j - 2; minmn++) {
      maxmn = (jpvt_data[0] + Y_size[0] * 3) - 1;
      Y_data[maxmn] -= Y_data[(jpvt_data[j - 1] + Y_size[0] * 3) - 1] *
        b_A_data[A_size_idx_0 * (j - 1)];
    }
  }
}

/* End of code generation (qrsolve.c) */
