/*
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "blas.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B[8],
              real_T C_data[], int32_T C_size[2])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if (A_size[0] == 0) {
    C_size[0] = 0;
    C_size[1] = 4;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A_size[0];
    n_t = (ptrdiff_t)4;
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)A_size[0];
    ldb_t = (ptrdiff_t)2;
    ldc_t = (ptrdiff_t)A_size[0];
    C_size[0] = A_size[0];
    C_size[1] = 4;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t, &B
          [0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void c_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B[2],
              real_T C_data[], int32_T C_size[1])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if (A_size[0] == 0) {
    C_size[0] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A_size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)A_size[0];
    ldb_t = (ptrdiff_t)2;
    ldc_t = (ptrdiff_t)A_size[0];
    C_size[0] = A_size[0];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t, &B
          [0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void d_mtimes(const real_T A[16], const real_T B_data[], const int32_T B_size[2],
              real_T C_data[], int32_T C_size[2])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if (B_size[0] == 0) {
    C_size[0] = 4;
    C_size[1] = 0;
  } else {
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)B_size[0];
    k_t = (ptrdiff_t)4;
    lda_t = (ptrdiff_t)4;
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)4;
    C_size[0] = 4;
    C_size[1] = B_size[0];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B_data
          [0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void e_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B[16],
              real_T C_data[], int32_T C_size[2])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if (A_size[0] == 0) {
    C_size[0] = 0;
    C_size[1] = 4;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A_size[0];
    n_t = (ptrdiff_t)4;
    k_t = (ptrdiff_t)4;
    lda_t = (ptrdiff_t)A_size[0];
    ldb_t = (ptrdiff_t)4;
    ldc_t = (ptrdiff_t)A_size[0];
    C_size[0] = A_size[0];
    C_size[1] = 4;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t, &B
          [0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void f_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T
              B_data[], const int32_T B_size[2], real_T C_data[], int32_T
              C_size[2])
{
  int32_T loop_ub;
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A_size[0] == 0) || (B_size[0] == 0)) {
    C_size[0] = A_size[0];
    C_size[1] = B_size[0];
    loop_ub = A_size[0] * B_size[0];
    if (0 <= loop_ub - 1) {
      memset(&C_data[0], 0, loop_ub * sizeof(real_T));
    }
  } else {
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A_size[0];
    n_t = (ptrdiff_t)B_size[0];
    k_t = (ptrdiff_t)4;
    lda_t = (ptrdiff_t)A_size[0];
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)A_size[0];
    C_size[0] = A_size[0];
    C_size[1] = B_size[0];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void g_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T
              B_data[], const int32_T B_size[1], real_T C[4])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A_size[1] == 0) || (B_size[0] == 0)) {
    C[0] = 0.0;
    C[1] = 0.0;
    C[2] = 0.0;
    C[3] = 0.0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A_size[1];
    lda_t = (ptrdiff_t)4;
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)4;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

void h_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T
              B_data[], const int32_T B_size[2], real_T C[16])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A_size[1] == 0) || (B_size[0] == 0)) {
    memset(&C[0], 0, 16U * sizeof(real_T));
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)4;
    k_t = (ptrdiff_t)A_size[1];
    lda_t = (ptrdiff_t)4;
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)4;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

void mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B_data[],
            const int32_T B_size[2], real_T C_data[], int32_T C_size[2])
{
  int32_T loop_ub;
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A_size[0] == 0) || (B_size[0] == 0)) {
    C_size[0] = A_size[0];
    C_size[1] = B_size[0];
    loop_ub = A_size[0] * B_size[0];
    if (0 <= loop_ub - 1) {
      memset(&C_data[0], 0, loop_ub * sizeof(real_T));
    }
  } else {
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A_size[0];
    n_t = (ptrdiff_t)B_size[0];
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)A_size[0];
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)A_size[0];
    C_size[0] = A_size[0];
    C_size[1] = B_size[0];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

/* End of code generation (mtimes.c) */
