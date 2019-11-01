/*
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "mrdivide_helper.h"
#include "warning.h"
#include "xgetrf.h"
#include "qrsolve.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo sb_emlrtRSI = { 20, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 42, /* lineNo */
  "mrdiv",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 44, /* lineNo */
  "mrdiv",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 109,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 107,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 119,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 121,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 90, /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

/* Function Declarations */
static void mrdiv(const emlrtStack *sp, const real_T A_data[], const int32_T
                  A_size[2], const real_T B_data[], const int32_T B_size[2],
                  real_T Y_data[], int32_T Y_size[2]);

/* Function Definitions */
static void mrdiv(const emlrtStack *sp, const real_T A_data[], const int32_T
                  A_size[2], const real_T B_data[], const int32_T B_size[2],
                  real_T Y_data[], int32_T Y_size[2])
{
  int32_T b_B_size[2];
  int32_T loop_ub;
  int32_T i1;
  int32_T b_A_size[2];
  int32_T b_loop_ub;
  int32_T Y_data_tmp;
  real_T b_B_data[4];
  int32_T tmp_size[2];
  real_T b_A_data[8];
  real_T tmp_data[8];
  real_T temp;
  char_T DIAGA1;
  int32_T b_Y_data_tmp;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
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
  if ((A_size[1] == 0) || ((B_size[0] == 0) || (B_size[1] == 0))) {
    Y_size[0] = 4;
    Y_size[1] = (int8_T)B_size[0];
    loop_ub = (int8_T)B_size[0] << 2;
    if (0 <= loop_ub - 1) {
      memset(&Y_data[0], 0, (uint32_T)(loop_ub * (int32_T)sizeof(real_T)));
    }
  } else if (B_size[0] == B_size[1]) {
    st.site = &tb_emlrtRSI;
    b_st.site = &vb_emlrtRSI;
    b_B_size[0] = B_size[0];
    b_B_size[1] = B_size[1];
    loop_ub = B_size[0] * B_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&b_B_data[0], &B_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
              (real_T)));
    }

    c_st.site = &xb_emlrtRSI;
    xgetrf(&c_st, B_size[1], B_size[1], b_B_data, b_B_size, B_size[1], b_A_size,
           tmp_size, &b_loop_ub);
    if (((B_size[0] != 1) || (B_size[1] != 1)) && (b_loop_ub > 0)) {
      c_st.site = &wb_emlrtRSI;
      d_st.site = &mc_emlrtRSI;
      warning(&d_st);
    }

    c_st.site = &yb_emlrtRSI;
    Y_size[0] = 4;
    Y_size[1] = A_size[1];
    loop_ub = A_size[0] * A_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&Y_data[0], &A_data[0], (uint32_T)(loop_ub * (int32_T)sizeof(real_T)));
    }

    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    m_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)B_size[1];
    lda_t = (ptrdiff_t)B_size[1];
    ldb_t = (ptrdiff_t)4;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_B_data[0],
          &lda_t, &Y_data[0], &ldb_t);
    c_st.site = &ac_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    m_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)B_size[1];
    lda_t = (ptrdiff_t)B_size[1];
    ldb_t = (ptrdiff_t)4;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_B_data[0],
          &lda_t, &Y_data[0], &ldb_t);
    i1 = B_size[1] - 1;
    for (b_loop_ub = i1; b_loop_ub >= 1; b_loop_ub--) {
      if (b_A_size[0] != 1) {
        temp = Y_data[0];
        b_Y_data_tmp = (b_A_size[0] - 1) << 2;
        Y_data[0] = Y_data[b_Y_data_tmp];
        Y_data[b_Y_data_tmp] = temp;
        temp = Y_data[1];
        Y_data_tmp = 1 + b_Y_data_tmp;
        Y_data[1] = Y_data[Y_data_tmp];
        Y_data[Y_data_tmp] = temp;
        temp = Y_data[2];
        Y_data_tmp = 2 + b_Y_data_tmp;
        Y_data[2] = Y_data[Y_data_tmp];
        Y_data[Y_data_tmp] = temp;
        temp = Y_data[3];
        b_Y_data_tmp += 3;
        Y_data[3] = Y_data[b_Y_data_tmp];
        Y_data[b_Y_data_tmp] = temp;
      }
    }
  } else {
    b_B_size[0] = B_size[1];
    b_B_size[1] = B_size[0];
    loop_ub = B_size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = B_size[1];
      for (Y_data_tmp = 0; Y_data_tmp < b_loop_ub; Y_data_tmp++) {
        b_B_data[Y_data_tmp + b_B_size[0] * i1] = B_data[i1 + B_size[0] *
          Y_data_tmp];
      }
    }

    b_A_size[0] = A_size[1];
    b_A_size[1] = 4;
    loop_ub = A_size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_A_data[i1] = A_data[i1 << 2];
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      b_A_data[i1 + b_A_size[0]] = A_data[1 + (i1 << 2)];
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      b_A_data[i1 + (b_A_size[0] << 1)] = A_data[2 + (i1 << 2)];
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      b_A_data[i1 + b_A_size[0] * 3] = A_data[3 + (i1 << 2)];
    }

    st.site = &ub_emlrtRSI;
    qrsolve(&st, b_B_data, b_B_size, b_A_data, b_A_size, tmp_data, tmp_size);
    Y_size[0] = 4;
    Y_size[1] = tmp_size[0];
    loop_ub = tmp_size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data_tmp = i1 << 2;
      Y_data[b_Y_data_tmp] = tmp_data[i1];
      Y_data[1 + b_Y_data_tmp] = tmp_data[i1 + tmp_size[0]];
      Y_data[2 + b_Y_data_tmp] = tmp_data[i1 + (tmp_size[0] << 1)];
      Y_data[3 + b_Y_data_tmp] = tmp_data[i1 + tmp_size[0] * 3];
    }
  }
}

void mrdivide_helper(const emlrtStack *sp, const real_T A_data[], const int32_T
                     A_size[2], const real_T B_data[], const int32_T B_size[2],
                     real_T Y_data[], int32_T Y_size[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (B_size[1] != A_size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  st.site = &sb_emlrtRSI;
  mrdiv(&st, A_data, A_size, B_data, B_size, Y_data, Y_size);
}

/* End of code generation (mrdivide_helper.c) */
