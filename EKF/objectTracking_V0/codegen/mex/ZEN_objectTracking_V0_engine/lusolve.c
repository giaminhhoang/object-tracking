/*
 * lusolve.c
 *
 * Code generation for function 'lusolve'
 *
 */

/* Include files */
#include "lusolve.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo rb_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 109,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 107,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 119,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 121,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 90, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 82, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 78, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 58, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 57, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 50, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 90, /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 77, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 76, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 47,    /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRSInfo fd_emlrtRSI = { 47, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

/* Function Declarations */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void lusolve(const emlrtStack *sp, const real_T A_data[], const int32_T A_size[2],
             real_T B_data[])
{
  int32_T loop_ub;
  real_T b_A_data[4];
  int32_T info;
  int32_T i;
  const mxArray *y;
  real_T temp;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  char_T DIAGA1;
  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  int32_T ipiv_data[2];
  ptrdiff_t info_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T i1;
  ptrdiff_t ipiv_t_data[2];
  static const char_T fname[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &tb_emlrtRSI;
  loop_ub = A_size[0] * A_size[1];
  if (0 <= loop_ub - 1) {
    memcpy(&b_A_data[0], &A_data[0], loop_ub * sizeof(real_T));
  }

  c_st.site = &xb_emlrtRSI;
  d_st.site = &ec_emlrtRSI;
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
    info = 0;
  } else {
    d_st.site = &dc_emlrtRSI;
    d_st.site = &dc_emlrtRSI;
    i = muIntScalarMin_sint32(A_size[1], A_size[1]);
    loop_ub = muIntScalarMax_sint32(i, 1);
    if ((int8_T)loop_ub != loop_ub) {
      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(&d_st, 15, m, &u[0]);
      emlrtAssign(&y, m);
      e_st.site = &fd_emlrtRSI;
      error(&e_st, y, &emlrtMCI);
    }

    d_st.site = &cc_emlrtRSI;
    d_st.site = &bc_emlrtRSI;
    d_st.site = &ac_emlrtRSI;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)A_size[1], (ptrdiff_t)A_size[1],
      &b_A_data[0], (ptrdiff_t)A_size[1], &ipiv_t_data[0]);
    info = (int32_T)info_t;
    d_st.site = &yb_emlrtRSI;
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&d_st, &c_emlrtRTEI, "MATLAB:nomem",
          "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
          "Coder:toolbox:LAPACKCallErrorInfo",
          "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, fname, 12, info);
      }
    }

    i = (int8_T)loop_ub - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      ipiv_data[loop_ub] = (int32_T)ipiv_t_data[loop_ub];
    }
  }

  if (((A_size[0] != 1) || (A_size[1] != 1)) && (info > 0)) {
    b_st.site = &sb_emlrtRSI;
    c_st.site = &ic_emlrtRSI;
    warning(&c_st);
  }

  b_st.site = &ub_emlrtRSI;
  if (A_size[1] >= 1) {
    c_st.site = &kc_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)A_size[1];
    lda_t = (ptrdiff_t)A_size[1];
    ldb_t = (ptrdiff_t)4;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_A_data[0],
          &lda_t, &B_data[0], &ldb_t);
  }

  b_st.site = &vb_emlrtRSI;
  if (A_size[1] >= 1) {
    c_st.site = &kc_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)A_size[1];
    lda_t = (ptrdiff_t)A_size[1];
    ldb_t = (ptrdiff_t)4;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_A_data[0],
          &lda_t, &B_data[0], &ldb_t);
  }

  i = A_size[1] - 1;
  for (loop_ub = i; loop_ub >= 1; loop_ub--) {
    if (ipiv_data[0] != 1) {
      temp = B_data[0];
      info = 4 * (ipiv_data[0] - 1);
      B_data[0] = B_data[info];
      B_data[info] = temp;
      temp = B_data[1];
      i1 = info + 1;
      B_data[1] = B_data[i1];
      B_data[i1] = temp;
      temp = B_data[2];
      i1 = info + 2;
      B_data[2] = B_data[i1];
      B_data[i1] = temp;
      temp = B_data[3];
      info += 3;
      B_data[3] = B_data[info];
      B_data[info] = temp;
    }
  }
}

/* End of code generation (lusolve.c) */
