/*
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "qrsolve.h"
#include "warning.h"
#include "xgeqp3.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo tc_emlrtRSI = { 35, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 39, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 46, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 131,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 130,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 79, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 86, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 96, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 102,/* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtMCInfo d_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtRSInfo td_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m37;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m37, 2, pArrays, "sprintf", true,
    location);
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

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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
  int32_T b_A_size[2];
  int32_T minmn;
  real_T b_A_data[4];
  real_T tau_data[2];
  int32_T tau_size[1];
  int32_T jpvt_data[2];
  int32_T jpvt_size[2];
  int32_T rankR;
  real_T tol;
  int32_T maxmn;
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv4[2] = { 1, 6 };

  int32_T B_size_idx_0;
  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *b_y;
  real_T b_B_data[8];
  const mxArray *m4;
  char_T cv0[14];
  int32_T Y_data_tmp;
  int32_T b_Y_data_tmp;
  ptrdiff_t nrc_t;
  ptrdiff_t info_t;
  boolean_T p;
  boolean_T b_p;
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'o', 'r', 'm', 'q', 'r' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  minmn = A_size[0] * A_size[1];
  if (0 <= minmn - 1) {
    memcpy(&b_A_data[0], &A_data[0], (uint32_T)(minmn * (int32_T)sizeof(real_T)));
  }

  st.site = &tc_emlrtRSI;
  xgeqp3(&st, b_A_data, b_A_size, tau_data, tau_size, jpvt_data, jpvt_size);
  st.site = &uc_emlrtRSI;
  rankR = 0;
  tol = 0.0;
  if (b_A_size[0] < b_A_size[1]) {
    minmn = b_A_size[0];
    maxmn = b_A_size[1];
  } else {
    minmn = b_A_size[1];
    maxmn = b_A_size[0];
  }

  if (minmn > 0) {
    tol = 2.2204460492503131E-15 * (real_T)maxmn * muDoubleScalarAbs(b_A_data[0]);
    while ((rankR < minmn) && (!(muDoubleScalarAbs(b_A_data[rankR + b_A_size[0] *
              rankR]) <= tol))) {
      rankR++;
    }
  }

  if (rankR < minmn) {
    b_st.site = &dd_emlrtRSI;
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 6, m3, &rfmt[0]);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m4 = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m4);
    c_st.site = &td_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &d_emlrtMCI),
                     "<output of sprintf>", cv0);
    b_st.site = &ed_emlrtRSI;
    b_warning(&b_st, rankR, cv0);
  }

  st.site = &vc_emlrtRSI;
  B_size_idx_0 = B_size[0];
  minmn = B_size[0] * B_size[1];
  if (0 <= minmn - 1) {
    memcpy(&b_B_data[0], &B_data[0], (uint32_T)(minmn * (int32_T)sizeof(real_T)));
  }

  Y_size[0] = (int8_T)b_A_size[1];
  Y_size[1] = 4;
  minmn = (int8_T)b_A_size[1] << 2;
  if (0 <= minmn - 1) {
    memset(&Y_data[0], 0, (uint32_T)(minmn * (int32_T)sizeof(real_T)));
  }

  b_st.site = &fd_emlrtRSI;
  c_st.site = &id_emlrtRSI;
  if ((b_A_size[0] != 0) && (b_A_size[1] != 0) && (B_size[0] != 0)) {
    nrc_t = (ptrdiff_t)B_size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)4, (ptrdiff_t)
      muIntScalarMin_sint32(b_A_size[0], b_A_size[1]), &b_A_data[0], (ptrdiff_t)
      b_A_size[0], &tau_data[0], &b_B_data[0], nrc_t);
    minmn = (int32_T)info_t;
    d_st.site = &nd_emlrtRSI;
    if (minmn != 0) {
      p = true;
      b_p = false;
      if (minmn == -7) {
        b_p = true;
      } else if (minmn == -9) {
        b_p = true;
      } else {
        if (minmn == -10) {
          b_p = true;
        }
      }

      if (!b_p) {
        if (minmn == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &c_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, minmn);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      minmn = B_size[0];
      for (maxmn = 0; maxmn < minmn; maxmn++) {
        b_B_data[maxmn] = rtNaN;
      }

      for (maxmn = 0; maxmn < minmn; maxmn++) {
        b_B_data[maxmn + B_size_idx_0] = rtNaN;
      }

      for (maxmn = 0; maxmn < minmn; maxmn++) {
        b_B_data[maxmn + (B_size_idx_0 << 1)] = rtNaN;
      }

      for (maxmn = 0; maxmn < minmn; maxmn++) {
        b_B_data[maxmn + B_size_idx_0 * 3] = rtNaN;
      }
    }
  }

  b_st.site = &gd_emlrtRSI;
  for (minmn = 0; minmn < rankR; minmn++) {
    Y_data[jpvt_data[minmn] - 1] = b_B_data[minmn];
  }

  for (maxmn = rankR; maxmn >= 1; maxmn--) {
    Y_data_tmp = jpvt_data[maxmn - 1] - 1;
    b_Y_data_tmp = b_A_size[0] * (maxmn - 1);
    Y_data[Y_data_tmp] /= b_A_data[(maxmn + b_Y_data_tmp) - 1];
    b_st.site = &hd_emlrtRSI;
    for (minmn = 0; minmn <= maxmn - 2; minmn++) {
      Y_data[jpvt_data[0] - 1] -= Y_data[Y_data_tmp] * b_A_data[b_Y_data_tmp];
    }
  }

  b_st.site = &gd_emlrtRSI;
  for (minmn = 0; minmn < rankR; minmn++) {
    Y_data[(jpvt_data[minmn] + Y_size[0]) - 1] = b_B_data[minmn + B_size_idx_0];
  }

  for (maxmn = rankR; maxmn >= 1; maxmn--) {
    Y_data_tmp = (jpvt_data[maxmn - 1] + Y_size[0]) - 1;
    Y_data[Y_data_tmp] /= b_A_data[(maxmn + b_A_size[0] * (maxmn - 1)) - 1];
    b_st.site = &hd_emlrtRSI;
    for (minmn = 0; minmn <= maxmn - 2; minmn++) {
      b_Y_data_tmp = (jpvt_data[0] + Y_size[0]) - 1;
      Y_data[b_Y_data_tmp] -= Y_data[Y_data_tmp] * b_A_data[b_A_size[0] * (maxmn
        - 1)];
    }
  }

  b_st.site = &gd_emlrtRSI;
  for (minmn = 0; minmn < rankR; minmn++) {
    Y_data[(jpvt_data[minmn] + (Y_size[0] << 1)) - 1] = b_B_data[minmn +
      (B_size_idx_0 << 1)];
  }

  for (maxmn = rankR; maxmn >= 1; maxmn--) {
    Y_data_tmp = (jpvt_data[maxmn - 1] + (Y_size[0] << 1)) - 1;
    Y_data[Y_data_tmp] /= b_A_data[(maxmn + b_A_size[0] * (maxmn - 1)) - 1];
    b_st.site = &hd_emlrtRSI;
    for (minmn = 0; minmn <= maxmn - 2; minmn++) {
      b_Y_data_tmp = (jpvt_data[0] + (Y_size[0] << 1)) - 1;
      Y_data[b_Y_data_tmp] -= Y_data[Y_data_tmp] * b_A_data[b_A_size[0] * (maxmn
        - 1)];
    }
  }

  b_st.site = &gd_emlrtRSI;
  for (minmn = 0; minmn < rankR; minmn++) {
    Y_data[(jpvt_data[minmn] + Y_size[0] * 3) - 1] = b_B_data[minmn +
      B_size_idx_0 * 3];
  }

  for (maxmn = rankR; maxmn >= 1; maxmn--) {
    Y_data_tmp = (jpvt_data[maxmn - 1] + Y_size[0] * 3) - 1;
    Y_data[Y_data_tmp] /= b_A_data[(maxmn + b_A_size[0] * (maxmn - 1)) - 1];
    b_st.site = &hd_emlrtRSI;
    for (minmn = 0; minmn <= maxmn - 2; minmn++) {
      b_Y_data_tmp = (jpvt_data[0] + Y_size[0] * 3) - 1;
      Y_data[b_Y_data_tmp] -= Y_data[Y_data_tmp] * b_A_data[b_A_size[0] * (maxmn
        - 1)];
    }
  }
}

/* End of code generation (qrsolve.c) */
