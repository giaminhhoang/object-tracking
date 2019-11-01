/*
 * ZEN_objectTracking_V0_ekf.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_ekf'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_ekf.h"
#include "ZEN_objectTracking_V0_systemNoiseCov.h"
#include "mrdivide_helper.h"
#include "sqrt.h"
#include "ZEN_objectTracking_V0_measurementMatrix.h"
#include "ZEN_objectTracking_V0_transitionMatrix.h"
#include "diag.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 30,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 48,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 60,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 71,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 80,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 81,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 94,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 105, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 110, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 120, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 125, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 126, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 127,/* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 130,/* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 133,/* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 136,/* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 23, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  130,                                 /* lineNo */
  22,                                  /* colNo */
  "ZEN_objectTracking_V0_ekf",         /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 51,/* lineNo */
  15,                                  /* colNo */
  "bitset",                            /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\bitset.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 0,     /* iFirst */
  7,                                   /* iLast */
  61,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "bitset",                            /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\bitset.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 89,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 84,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

/* Function Definitions */
void ZEN_objectTracking_V0_ekf(const emlrtStack *sp, struct2_T *dataAlgo, const
  struct6_T *paramsAlgo)
{
  boolean_T updateSolution;
  real_T b_paramsAlgo[2];
  real_T Phi[16];
  real_T Qk[16];
  int32_T i9;
  real_T Xk[4];
  int32_T delta_z_size_idx_0;
  int32_T Xk_tmp;
  int32_T b_Xk_tmp;
  real_T Hk[8];
  real_T Pk[16];
  real_T b_Phi[16];
  real_T Rk[4];
  real_T delta_z[2];
  real_T b_Hk[8];
  real_T Ck[4];
  real_T alpha1;
  int32_T selectMatrix_size_idx_0;
  boolean_T p;
  int8_T i10;
  uint32_T qY;
  real_T selectMatrix_data[4];
  int32_T a_size_idx_0;
  real_T beta1;
  ptrdiff_t m_t;
  real_T b_data[4];
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  real_T Rk_data[4];
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  real_T a_data[4];
  int32_T b_a_size_idx_0;
  real_T Hk_data[8];
  real_T Kk_data[8];
  real_T tmp_data[4];
  real_T delta_z_data[2];
  int32_T Kk_size[2];
  int32_T b_Rk[2];
  real_T b_a_data[8];
  int32_T tmp_size[2];
  int32_T b_tmp_size[2];
  real_T b_tmp_data[8];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  ************************************************************************ */
  /*  */
  /*            Description : EKF update  */
  /*                    frame = Cartersian */
  /*                    state = 4 parameters */
  /*             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - data, params */
  /*                         */
  /*            Outputs :  */
  /*                        - data */
  /*  */
  /*  */
  /*  ************************************************************************* */
  /*  load parameters */
  /*  state covariance */
  /*  state vector */
  updateSolution = false;

  /*  flad indicate that solution is updated */
  /*  measurement noise covariance matrix */
  st.site = &n_emlrtRSI;
  st.site = &n_emlrtRSI;
  b_paramsAlgo[0] = paramsAlgo->sonarRange_std * paramsAlgo->sonarRange_std;
  b_paramsAlgo[1] = paramsAlgo->sonarAzimuth_std * paramsAlgo->sonarAzimuth_std;
  diag(b_paramsAlgo, dataAlgo->ekf.Rk);

  /*  ************************************************************************ */
  /*  compute sampling period since last call */
  /*  compute the update period */
  if (dataAlgo->ekf.tLastCalled != -1.0) {
    dataAlgo->ekf.Ts = dataAlgo->t - dataAlgo->ekf.tLastCalled;
  } else {
    dataAlgo->ekf.Ts = paramsAlgo->Ts;
  }

  dataAlgo->ekf.tLastCalled = dataAlgo->t;

  /*  ************************************************************************ */
  /*  state update (prediction) */
  /*  compute transition matrix */
  c_ZEN_objectTracking_V0_transit(dataAlgo->ekf.Ts, Phi);
  st.site = &o_emlrtRSI;
  c_ZEN_objectTracking_V0_systemN(paramsAlgo->acceleration_psd, dataAlgo->ekf.Ts,
    Qk);

  /*  prediction step */
  for (i9 = 0; i9 < 4; i9++) {
    Xk[i9] = 0.0;
    for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < 4; delta_z_size_idx_0++) {
      Xk_tmp = delta_z_size_idx_0 << 2;
      b_Xk_tmp = i9 + Xk_tmp;
      Xk[i9] += Phi[b_Xk_tmp] * dataAlgo->ekf.Xk[delta_z_size_idx_0];
      b_Phi[b_Xk_tmp] = ((Phi[i9] * dataAlgo->ekf.Pk[Xk_tmp] + Phi[i9 + 4] *
                          dataAlgo->ekf.Pk[1 + Xk_tmp]) + Phi[i9 + 8] *
                         dataAlgo->ekf.Pk[2 + Xk_tmp]) + Phi[i9 + 12] *
        dataAlgo->ekf.Pk[3 + Xk_tmp];
    }

    for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < 4; delta_z_size_idx_0++) {
      Xk_tmp = i9 + (delta_z_size_idx_0 << 2);
      Pk[Xk_tmp] = (((b_Phi[i9] * Phi[delta_z_size_idx_0] + b_Phi[i9 + 4] *
                      Phi[delta_z_size_idx_0 + 4]) + b_Phi[i9 + 8] *
                     Phi[delta_z_size_idx_0 + 8]) + b_Phi[i9 + 12] *
                    Phi[delta_z_size_idx_0 + 12]) + Qk[Xk_tmp];
    }
  }

  /*  ************************************************************************ */
  /*  */
  /*                            Standard update */
  /*  */
  /*  ************************************************************************* */
  /*  compute measurment matrix */
  st.site = &p_emlrtRSI;
  c_ZEN_objectTracking_V0_measure(&st, Xk, Hk);

  /*  measurement noise covariance */
  Rk[0] = dataAlgo->ekf.Rk[0];
  Rk[1] = dataAlgo->ekf.Rk[1];
  Rk[2] = dataAlgo->ekf.Rk[2];
  Rk[3] = dataAlgo->ekf.Rk[3];

  /*  innovation covariance matrix */
  for (i9 = 0; i9 < 2; i9++) {
    for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < 4; delta_z_size_idx_0++) {
      Xk_tmp = delta_z_size_idx_0 << 2;
      b_Hk[i9 + (delta_z_size_idx_0 << 1)] = ((Hk[i9] * Pk[Xk_tmp] + Hk[i9 + 2] *
        Pk[1 + Xk_tmp]) + Hk[i9 + 4] * Pk[2 + Xk_tmp]) + Hk[i9 + 6] * Pk[3 +
        Xk_tmp];
    }

    for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < 2; delta_z_size_idx_0++) {
      Xk_tmp = i9 + (delta_z_size_idx_0 << 1);
      Ck[Xk_tmp] = (((b_Hk[i9] * Hk[delta_z_size_idx_0] + b_Hk[i9 + 2] *
                      Hk[delta_z_size_idx_0 + 2]) + b_Hk[i9 + 4] *
                     Hk[delta_z_size_idx_0 + 4]) + b_Hk[i9 + 6] *
                    Hk[delta_z_size_idx_0 + 6]) + dataAlgo->ekf.Rk[Xk_tmp];
    }
  }

  /*  compute innovations */
  if (dataAlgo->sonar.newMeasurement != 0) {
    st.site = &q_emlrtRSI;
    st.site = &q_emlrtRSI;
    alpha1 = Xk[0] * Xk[0] + Xk[1] * Xk[1];
    st.site = &q_emlrtRSI;
    b_sqrt(&st, &alpha1);
    delta_z[0] = dataAlgo->sonar.range - alpha1;
    delta_z[1] = dataAlgo->sonar.azimuth - muDoubleScalarAtan2(Xk[1], Xk[0]);
  } else {
    delta_z[0] = 0.0;
    delta_z[1] = 0.0;
  }

  dataAlgo->ekf.innovationRange = delta_z[0];
  dataAlgo->ekf.innovationAzimuth = delta_z[1];

  /*  compute normamized innovations */
  dataAlgo->ekf.innovationRange_std = muDoubleScalarAbs(Ck[0]);
  st.site = &r_emlrtRSI;
  b_sqrt(&st, &dataAlgo->ekf.innovationRange_std);
  dataAlgo->ekf.innovationAzimuth_std = muDoubleScalarAbs(Ck[3]);
  st.site = &s_emlrtRSI;
  b_sqrt(&st, &dataAlgo->ekf.innovationAzimuth_std);
  dataAlgo->ekf.innovationRange_norm = delta_z[0] /
    dataAlgo->ekf.innovationRange_std;
  dataAlgo->ekf.innovationAzimuth_norm = delta_z[1] /
    dataAlgo->ekf.innovationAzimuth_std;

  /*  select matrix is usded to discard inconsistent measurements */
  selectMatrix_size_idx_0 = 0;

  /*  check integrity */
  if (muDoubleScalarAbs(dataAlgo->ekf.innovationRange_norm) <
      paramsAlgo->sonarInnovationRange_threshold) {
    /*  if valid , set the corresponding flag */
    st.site = &t_emlrtRSI;
    p = true;
    if ((paramsAlgo->bitSonarRangeUsed >= 1) && (paramsAlgo->bitSonarRangeUsed <=
         8)) {
    } else {
      p = false;
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i10 = paramsAlgo->bitSonarRangeUsed;
    if (i10 < 0) {
      i10 = 0;
    }

    Xk_tmp = i10;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution |= (int8_T)(1 << (uint8_T)qY);

    /*  add the range measurement */
    Ck[0] = 1.0;
    Ck[1] = 0.0;
    selectMatrix_size_idx_0 = 1;
    memcpy(&selectMatrix_data[0], &Ck[0], (uint32_T)(2 * (int32_T)sizeof(real_T)));

    /*  indicate that the solution must be updated */
    updateSolution = true;
  } else {
    /*  if no valid, clear the corresponding flag */
    st.site = &u_emlrtRSI;
    p = true;
    if ((paramsAlgo->bitSonarRangeUsed >= 1) && (paramsAlgo->bitSonarRangeUsed <=
         8)) {
    } else {
      p = false;
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i10 = paramsAlgo->bitSonarRangeUsed;
    if (i10 < 0) {
      i10 = 0;
    }

    Xk_tmp = i10;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution &= (int8_T)~(int8_T)(1 << (uint8_T)qY);
  }

  if (muDoubleScalarAbs(dataAlgo->ekf.innovationAzimuth_norm) <
      paramsAlgo->c_sonarInnovationAzimuth_thresh) {
    /*  if valid , set the corresponding flag */
    st.site = &v_emlrtRSI;
    p = true;
    if ((paramsAlgo->bitSonarAzimuthUsed >= 1) &&
        (paramsAlgo->bitSonarAzimuthUsed <= 8)) {
    } else {
      p = false;
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i10 = paramsAlgo->bitSonarAzimuthUsed;
    if (i10 < 0) {
      i10 = 0;
    }

    Xk_tmp = i10;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution |= (int8_T)(1 << (uint8_T)qY);

    /*  add the azimuth measurement */
    Xk_tmp = selectMatrix_size_idx_0 + 1;
    for (i9 = 0; i9 < selectMatrix_size_idx_0; i9++) {
      Ck[0] = selectMatrix_data[0];
    }

    for (i9 = 0; i9 < selectMatrix_size_idx_0; i9++) {
      Ck[Xk_tmp] = selectMatrix_data[selectMatrix_size_idx_0];
    }

    Ck[selectMatrix_size_idx_0] = 0.0;
    Ck[selectMatrix_size_idx_0 + Xk_tmp] = 1.0;
    selectMatrix_size_idx_0++;
    memcpy(&selectMatrix_data[0], &Ck[0], (uint32_T)((Xk_tmp << 1) * (int32_T)
            sizeof(real_T)));

    /*  indicate that the solution must be updated */
    updateSolution = true;
  } else {
    /*  if no valid, clear the corresponding flag */
    st.site = &w_emlrtRSI;
    p = true;
    if ((paramsAlgo->bitSonarAzimuthUsed >= 1) &&
        (paramsAlgo->bitSonarAzimuthUsed <= 8)) {
    } else {
      p = false;
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i10 = paramsAlgo->bitSonarAzimuthUsed;
    if (i10 < 0) {
      i10 = 0;
    }

    Xk_tmp = i10;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution &= (int8_T)~(int8_T)(1 << (uint8_T)qY);
  }

  /*  apply selection */
  if (updateSolution) {
    st.site = &x_emlrtRSI;
    if (selectMatrix_size_idx_0 == 0) {
      a_size_idx_0 = 0;
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)selectMatrix_size_idx_0;
      n_t = (ptrdiff_t)2;
      k_t = (ptrdiff_t)2;
      lda_t = (ptrdiff_t)selectMatrix_size_idx_0;
      ldb_t = (ptrdiff_t)2;
      ldc_t = (ptrdiff_t)selectMatrix_size_idx_0;
      a_size_idx_0 = selectMatrix_size_idx_0;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &selectMatrix_data[0],
            &lda_t, &Rk[0], &ldb_t, &beta1, &a_data[0], &ldc_t);
    }

    st.site = &x_emlrtRSI;
    for (i9 = 0; i9 < selectMatrix_size_idx_0; i9++) {
      Xk_tmp = i9 << 1;
      b_data[Xk_tmp] = selectMatrix_data[i9];
      b_data[1 + Xk_tmp] = selectMatrix_data[i9 + selectMatrix_size_idx_0];
    }

    if ((a_size_idx_0 == 0) || (selectMatrix_size_idx_0 == 0)) {
      Xk_tmp = a_size_idx_0 * selectMatrix_size_idx_0;
      if (0 <= Xk_tmp - 1) {
        memset(&Rk_data[0], 0, (uint32_T)(Xk_tmp * (int32_T)sizeof(real_T)));
      }
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a_size_idx_0;
      n_t = (ptrdiff_t)selectMatrix_size_idx_0;
      k_t = (ptrdiff_t)2;
      lda_t = (ptrdiff_t)a_size_idx_0;
      ldb_t = (ptrdiff_t)2;
      ldc_t = (ptrdiff_t)a_size_idx_0;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a_data[0], &lda_t,
            &b_data[0], &ldb_t, &beta1, &Rk_data[0], &ldc_t);
    }

    st.site = &y_emlrtRSI;
    if (selectMatrix_size_idx_0 == 0) {
      b_Xk_tmp = 0;
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)selectMatrix_size_idx_0;
      n_t = (ptrdiff_t)4;
      k_t = (ptrdiff_t)2;
      lda_t = (ptrdiff_t)selectMatrix_size_idx_0;
      ldb_t = (ptrdiff_t)2;
      ldc_t = (ptrdiff_t)selectMatrix_size_idx_0;
      b_Xk_tmp = selectMatrix_size_idx_0;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &selectMatrix_data[0],
            &lda_t, &Hk[0], &ldb_t, &beta1, &Hk_data[0], &ldc_t);
    }

    st.site = &ab_emlrtRSI;
    if (selectMatrix_size_idx_0 == 0) {
      delta_z_size_idx_0 = 0;
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)selectMatrix_size_idx_0;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)2;
      lda_t = (ptrdiff_t)selectMatrix_size_idx_0;
      ldb_t = (ptrdiff_t)2;
      ldc_t = (ptrdiff_t)selectMatrix_size_idx_0;
      delta_z_size_idx_0 = selectMatrix_size_idx_0;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &selectMatrix_data[0],
            &lda_t, &delta_z[0], &ldb_t, &beta1, &delta_z_data[0], &ldc_t);
    }

    /*  compute Kalman gain */
    st.site = &bb_emlrtRSI;
    if (b_Xk_tmp == 0) {
      b_a_size_idx_0 = 0;
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)b_Xk_tmp;
      n_t = (ptrdiff_t)4;
      k_t = (ptrdiff_t)4;
      lda_t = (ptrdiff_t)b_Xk_tmp;
      ldb_t = (ptrdiff_t)4;
      ldc_t = (ptrdiff_t)b_Xk_tmp;
      b_a_size_idx_0 = b_Xk_tmp;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Hk_data[0], &lda_t,
            &Pk[0], &ldb_t, &beta1, &b_a_data[0], &ldc_t);
    }

    st.site = &bb_emlrtRSI;
    for (i9 = 0; i9 < b_Xk_tmp; i9++) {
      Xk_tmp = i9 << 2;
      Kk_data[Xk_tmp] = Hk_data[i9];
      Kk_data[1 + Xk_tmp] = Hk_data[i9 + b_Xk_tmp];
      Kk_data[2 + Xk_tmp] = Hk_data[i9 + (b_Xk_tmp << 1)];
      Kk_data[3 + Xk_tmp] = Hk_data[i9 + b_Xk_tmp * 3];
    }

    if ((b_a_size_idx_0 == 0) || (b_Xk_tmp == 0)) {
      Xk_tmp = b_a_size_idx_0 * b_Xk_tmp;
      if (0 <= Xk_tmp - 1) {
        memset(&tmp_data[0], 0, (uint32_T)(Xk_tmp * (int32_T)sizeof(real_T)));
      }
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)b_a_size_idx_0;
      n_t = (ptrdiff_t)b_Xk_tmp;
      k_t = (ptrdiff_t)4;
      lda_t = (ptrdiff_t)b_a_size_idx_0;
      ldb_t = (ptrdiff_t)4;
      ldc_t = (ptrdiff_t)b_a_size_idx_0;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a_data[0], &lda_t,
            &Kk_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
    }

    Kk_size[0] = b_a_size_idx_0;
    b_Rk[0] = a_size_idx_0;
    Kk_size[1] = b_Xk_tmp;
    b_Rk[1] = selectMatrix_size_idx_0;
    if ((b_a_size_idx_0 != a_size_idx_0) || (b_Xk_tmp != selectMatrix_size_idx_0))
    {
      emlrtSizeEqCheckNDR2012b(&Kk_size[0], &b_Rk[0], &emlrtECI, sp);
    }

    st.site = &bb_emlrtRSI;
    for (i9 = 0; i9 < b_Xk_tmp; i9++) {
      Xk_tmp = i9 << 2;
      Kk_data[Xk_tmp] = Hk_data[i9];
      Kk_data[1 + Xk_tmp] = Hk_data[i9 + b_Xk_tmp];
      Kk_data[2 + Xk_tmp] = Hk_data[i9 + (b_Xk_tmp << 1)];
      Kk_data[3 + Xk_tmp] = Hk_data[i9 + b_Xk_tmp * 3];
    }

    if (b_Xk_tmp == 0) {
      tmp_size[0] = 4;
      tmp_size[1] = 0;
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)4;
      n_t = (ptrdiff_t)b_Xk_tmp;
      k_t = (ptrdiff_t)4;
      lda_t = (ptrdiff_t)4;
      ldb_t = (ptrdiff_t)4;
      ldc_t = (ptrdiff_t)4;
      tmp_size[0] = 4;
      tmp_size[1] = b_Xk_tmp;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Pk[0], &lda_t,
            &Kk_data[0], &ldb_t, &beta1, &b_tmp_data[0], &ldc_t);
    }

    b_tmp_size[0] = b_a_size_idx_0;
    b_tmp_size[1] = b_Xk_tmp;
    Xk_tmp = b_a_size_idx_0 * b_Xk_tmp;
    for (i9 = 0; i9 < Xk_tmp; i9++) {
      Ck[i9] = tmp_data[i9] + Rk_data[i9];
    }

    st.site = &bb_emlrtRSI;
    mrdivide_helper(&st, b_tmp_data, tmp_size, Ck, b_tmp_size, Kk_data, Kk_size);

    /*  update state */
    st.site = &cb_emlrtRSI;
    b_st.site = &od_emlrtRSI;
    if (Kk_size[1] != delta_z_size_idx_0) {
      if (delta_z_size_idx_0 == 1) {
        emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((Kk_size[1] == 1) || (delta_z_size_idx_0 == 1)) {
      Xk_tmp = Kk_size[1];
      alpha1 = 0.0;
      for (i9 = 0; i9 < Xk_tmp; i9++) {
        alpha1 += Kk_data[i9 << 2] * delta_z_data[i9];
      }

      Rk[0] = alpha1;
      alpha1 = 0.0;
      for (i9 = 0; i9 < Xk_tmp; i9++) {
        alpha1 += Kk_data[1 + (i9 << 2)] * delta_z_data[i9];
      }

      Rk[1] = alpha1;
      alpha1 = 0.0;
      for (i9 = 0; i9 < Xk_tmp; i9++) {
        alpha1 += Kk_data[2 + (i9 << 2)] * delta_z_data[i9];
      }

      Rk[2] = alpha1;
      alpha1 = 0.0;
      for (i9 = 0; i9 < Xk_tmp; i9++) {
        alpha1 += Kk_data[3 + (i9 << 2)] * delta_z_data[i9];
      }

      Rk[3] = alpha1;
    } else if ((Kk_size[1] == 0) || (delta_z_size_idx_0 == 0)) {
      Rk[0] = 0.0;
      Rk[1] = 0.0;
      Rk[2] = 0.0;
      Rk[3] = 0.0;
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)4;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)Kk_size[1];
      lda_t = (ptrdiff_t)4;
      ldb_t = (ptrdiff_t)Kk_size[1];
      ldc_t = (ptrdiff_t)4;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Kk_data[0], &lda_t,
            &delta_z_data[0], &ldb_t, &beta1, &Rk[0], &ldc_t);
    }

    Xk[0] += Rk[0];
    Xk[1] += Rk[1];
    Xk[2] += Rk[2];
    Xk[3] += Rk[3];

    /*  update covariance matrix */
    st.site = &db_emlrtRSI;
    if (b_Xk_tmp == 0) {
      b_a_size_idx_0 = 0;
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)b_Xk_tmp;
      n_t = (ptrdiff_t)4;
      k_t = (ptrdiff_t)4;
      lda_t = (ptrdiff_t)b_Xk_tmp;
      ldb_t = (ptrdiff_t)4;
      ldc_t = (ptrdiff_t)b_Xk_tmp;
      b_a_size_idx_0 = b_Xk_tmp;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Hk_data[0], &lda_t,
            &Pk[0], &ldb_t, &beta1, &b_a_data[0], &ldc_t);
    }

    st.site = &db_emlrtRSI;
    b_st.site = &od_emlrtRSI;
    if (Kk_size[1] != b_a_size_idx_0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }

    if ((Kk_size[1] == 1) || (b_a_size_idx_0 == 1)) {
      Xk_tmp = Kk_size[1];
      for (i9 = 0; i9 < 4; i9++) {
        Phi[i9] = 0.0;
        for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < Xk_tmp;
             delta_z_size_idx_0++) {
          Phi[i9] += Kk_data[i9 + (delta_z_size_idx_0 << 2)] *
            b_a_data[delta_z_size_idx_0];
        }

        Phi[i9 + 4] = 0.0;
        for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < Xk_tmp;
             delta_z_size_idx_0++) {
          Phi[i9 + 4] += Kk_data[i9 + (delta_z_size_idx_0 << 2)] *
            b_a_data[delta_z_size_idx_0 + b_a_size_idx_0];
        }

        Phi[i9 + 8] = 0.0;
        for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < Xk_tmp;
             delta_z_size_idx_0++) {
          Phi[i9 + 8] += Kk_data[i9 + (delta_z_size_idx_0 << 2)] *
            b_a_data[delta_z_size_idx_0 + (b_a_size_idx_0 << 1)];
        }

        Phi[i9 + 12] = 0.0;
        for (delta_z_size_idx_0 = 0; delta_z_size_idx_0 < Xk_tmp;
             delta_z_size_idx_0++) {
          Phi[i9 + 12] += Kk_data[i9 + (delta_z_size_idx_0 << 2)] *
            b_a_data[delta_z_size_idx_0 + b_a_size_idx_0 * 3];
        }
      }
    } else if ((Kk_size[1] == 0) || (b_a_size_idx_0 == 0)) {
      memset(&Phi[0], 0, sizeof(real_T) << 4);
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)4;
      n_t = (ptrdiff_t)4;
      k_t = (ptrdiff_t)Kk_size[1];
      lda_t = (ptrdiff_t)4;
      ldb_t = (ptrdiff_t)Kk_size[1];
      ldc_t = (ptrdiff_t)4;
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Kk_data[0], &lda_t,
            &b_a_data[0], &ldb_t, &beta1, &Phi[0], &ldc_t);
    }

    for (i9 = 0; i9 < 16; i9++) {
      Pk[i9] -= Phi[i9];
    }
  }

  /*  ************************************************************************ */
  /*  store states */
  memcpy(&dataAlgo->ekf.Pk[0], &Pk[0], sizeof(real_T) << 4);

  /*  store covariance */
  dataAlgo->ekf.Xk[0] = Xk[0];
  dataAlgo->ekf.Xk[1] = Xk[1];
  dataAlgo->ekf.Xk[2] = Xk[2];
  dataAlgo->ekf.Xk[3] = Xk[3];

  /*  store state */
}

/* End of code generation (ZEN_objectTracking_V0_ekf.c) */
