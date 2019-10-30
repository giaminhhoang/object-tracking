/*
 * ZEN_objectTracking_V0_ekf.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_ekf'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_ekf.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_measurementMatrix.h"
#include "ZEN_objectTracking_V0_systemNoiseCov.h"
#include "blas.h"
#include "lusolve.h"
#include "mtimes.h"
#include "mwmathutil.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo i_emlrtRSI = { 45,  /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

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

static emlrtRSInfo q_emlrtRSI = { 78,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 79,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 92,  /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 103, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 108, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 118, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 123, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 124, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 125, /* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 128,/* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 131,/* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 134,/* lineNo */
  "ZEN_objectTracking_V0_ekf",         /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 102,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 20, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 42, /* lineNo */
  "mrdiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 44, /* lineNo */
  "mrdiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 56, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 158,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 153,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 0,     /* iFirst */
  7,                                   /* iLast */
  61,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "bitset",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\bitset.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo g_emlrtRTEI = { 51,/* lineNo */
  15,                                  /* colNo */
  "bitset",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\bitset.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  128,                                 /* lineNo */
  22,                                  /* colNo */
  "ZEN_objectTracking_V0_ekf",         /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pName */
};

/* Function Definitions */
void ZEN_objectTracking_V0_ekf(const emlrtStack *sp, struct2_T *dataAlgo, const
  struct6_T *paramsAlgo)
{
  boolean_T updateSolution;
  real_T Phi[16];
  real_T Qk[16];
  int32_T i;
  real_T alpha1;
  int32_T i1;
  real_T Xk[4];
  int32_T Xk_tmp;
  real_T b_Phi[16];
  int32_T b_Xk_tmp;
  real_T beta1;
  real_T Hk[8];
  real_T d;
  real_T Rk[4];
  real_T Pk[16];
  real_T delta_z[2];
  real_T delta_z_data[2];
  real_T b_Hk[8];
  real_T Ck[4];
  int32_T selectMatrix_size[2];
  int8_T i2;
  uint32_T qY;
  real_T selectMatrix_data[4];
  int32_T b_selectMatrix_size[2];
  char_T TRANSB1;
  char_T TRANSA1;
  int32_T Rk_size[2];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T Hk_data[8];
  int32_T Hk_size[2];
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T delta_z_size[1];
  ptrdiff_t ldc_t;
  int32_T Kk_size[2];
  int32_T b_Kk_size[2];
  real_T Kk_data[8];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

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
  b_st.site = &i_emlrtRSI;
  st.site = &n_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  dataAlgo->ekf.Rk[0] = 0.0;
  dataAlgo->ekf.Rk[1] = 0.0;
  dataAlgo->ekf.Rk[2] = 0.0;
  dataAlgo->ekf.Rk[3] = 0.0;
  dataAlgo->ekf.Rk[0] = paramsAlgo->sonarRangeStd * paramsAlgo->sonarRangeStd;
  dataAlgo->ekf.Rk[3] = paramsAlgo->sonarAzimuthStd *
    paramsAlgo->sonarAzimuthStd;

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
  /*  **************************************************************** */
  /*  */
  /*            Description : return TransitionMatrix */
  /*                    frame = Cartesian */
  /*                    state = 4 parameters */
  /*             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - Ts : [1x1] sampling period */
  /*                         */
  /*            Outputs :  */
  /*                        - Phi : [4x4] transition matrix */
  /*               */
  /*  */
  /*  ************************************************************* */
  memset(&Phi[0], 0, 16U * sizeof(real_T));
  Phi[0] = 1.0;
  Phi[5] = 1.0;
  Phi[10] = 1.0;
  Phi[15] = 1.0;
  Phi[8] = dataAlgo->ekf.Ts;
  Phi[13] = dataAlgo->ekf.Ts;
  st.site = &o_emlrtRSI;
  c_ZEN_objectTracking_V0_systemN(paramsAlgo->accelerationPSD, dataAlgo->ekf.Ts,
    Qk);

  /*  prediction step */
  for (i = 0; i < 4; i++) {
    alpha1 = 0.0;
    for (i1 = 0; i1 < 4; i1++) {
      Xk_tmp = i1 << 2;
      b_Xk_tmp = i + Xk_tmp;
      alpha1 += Phi[b_Xk_tmp] * dataAlgo->ekf.Xk[i1];
      b_Phi[b_Xk_tmp] = ((Phi[i] * dataAlgo->ekf.Pk[Xk_tmp] + Phi[i + 4] *
                          dataAlgo->ekf.Pk[Xk_tmp + 1]) + Phi[i + 8] *
                         dataAlgo->ekf.Pk[Xk_tmp + 2]) + Phi[i + 12] *
        dataAlgo->ekf.Pk[Xk_tmp + 3];
    }

    Xk[i] = alpha1;
    alpha1 = b_Phi[i + 4];
    beta1 = b_Phi[i + 8];
    d = b_Phi[i + 12];
    for (i1 = 0; i1 < 4; i1++) {
      Xk_tmp = i + (i1 << 2);
      Pk[Xk_tmp] = (((b_Phi[i] * Phi[i1] + alpha1 * Phi[i1 + 4]) + beta1 *
                     Phi[i1 + 8]) + d * Phi[i1 + 12]) + Qk[Xk_tmp];
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
  for (i = 0; i < 2; i++) {
    alpha1 = Hk[i + 2];
    beta1 = Hk[i + 4];
    d = Hk[i + 6];
    for (i1 = 0; i1 < 4; i1++) {
      Xk_tmp = i1 << 2;
      b_Hk[i + (i1 << 1)] = ((Hk[i] * Pk[Xk_tmp] + alpha1 * Pk[Xk_tmp + 1]) +
        beta1 * Pk[Xk_tmp + 2]) + d * Pk[Xk_tmp + 3];
    }

    alpha1 = b_Hk[i + 2];
    beta1 = b_Hk[i + 4];
    d = b_Hk[i + 6];
    for (i1 = 0; i1 < 2; i1++) {
      Xk_tmp = i + (i1 << 1);
      Ck[Xk_tmp] = (((b_Hk[i] * Hk[i1] + alpha1 * Hk[i1 + 2]) + beta1 * Hk[i1 +
                     4]) + d * Hk[i1 + 6]) + dataAlgo->ekf.Rk[Xk_tmp];
    }
  }

  /*  compute innovations */
  if (dataAlgo->sonar.newMeasurement != 0) {
    for (i = 0; i < 2; i++) {
      delta_z_data[i] = ((Hk[i] * Xk[0] + Hk[i + 2] * Xk[1]) + Hk[i + 4] * Xk[2])
        + Hk[i + 6] * Xk[3];
    }

    delta_z[0] = dataAlgo->sonar.range - delta_z_data[0];
    delta_z[1] = dataAlgo->sonar.azimuth - delta_z_data[1];
  } else {
    delta_z[0] = 0.0;
    delta_z[1] = 0.0;
  }

  dataAlgo->ekf.innovationRange = delta_z[0];
  dataAlgo->ekf.innovationAzimuth = delta_z[1];

  /*  compute normamized innovations */
  st.site = &q_emlrtRSI;
  dataAlgo->ekf.innovationRangeStd = muDoubleScalarSqrt(muDoubleScalarAbs(Ck[0]));
  st.site = &r_emlrtRSI;
  dataAlgo->ekf.innovationAzimuthStd = muDoubleScalarSqrt(muDoubleScalarAbs(Ck[3]));
  dataAlgo->ekf.innovationRangeNorm = delta_z[1] /
    dataAlgo->ekf.innovationAzimuthStd;

  /*  select matrix is usded to discard inconsistent measurements */
  selectMatrix_size[0] = 0;
  selectMatrix_size[1] = 2;

  /*  check integrity */
  if (dataAlgo->ekf.innovationRangeNorm <
      paramsAlgo->sonarInnovationRangeThreshold) {
    /*  if valid , set the corresponding flag */
    st.site = &s_emlrtRSI;
    if ((paramsAlgo->bitSonarRangeUsed < 1) || (paramsAlgo->bitSonarRangeUsed >
         8)) {
      emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i2 = paramsAlgo->bitSonarRangeUsed;
    if (i2 < 0) {
      i2 = 0;
    }

    Xk_tmp = i2;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution |= (int8_T)(1 << (int32_T)qY);

    /*  add the range measurement */
    Ck[0] = 1.0;
    Ck[1] = 0.0;
    selectMatrix_size[0] = 1;
    selectMatrix_size[1] = 2;
    for (i = 0; i < 2; i++) {
      selectMatrix_data[i] = Ck[i];
    }

    /*  indicate that the solution must be updated */
    updateSolution = true;
  } else {
    /*  if no valid, clear the corresponding flag */
    st.site = &t_emlrtRSI;
    if ((paramsAlgo->bitSonarRangeUsed < 1) || (paramsAlgo->bitSonarRangeUsed >
         8)) {
      emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i2 = paramsAlgo->bitSonarRangeUsed;
    if (i2 < 0) {
      i2 = 0;
    }

    Xk_tmp = i2;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution &= (int8_T)~(int8_T)(1 << (int32_T)qY);
  }

  if (dataAlgo->ekf.innovationAzimuthNorm <
      paramsAlgo->sonarInnovationAzimuthThreshold) {
    /*  if valid , set the corresponding flag */
    st.site = &u_emlrtRSI;
    if ((paramsAlgo->bitSonarAzimuthUsed < 1) ||
        (paramsAlgo->bitSonarAzimuthUsed > 8)) {
      emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i2 = paramsAlgo->bitSonarAzimuthUsed;
    if (i2 < 0) {
      i2 = 0;
    }

    Xk_tmp = i2;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution |= (int8_T)(1 << (int32_T)qY);

    /*  add the azimuth measurement */
    b_selectMatrix_size[0] = selectMatrix_size[0] + 1;
    Xk_tmp = selectMatrix_size[0];
    if (0 <= Xk_tmp - 1) {
      Ck[0] = selectMatrix_data[0];
    }

    Ck[selectMatrix_size[0]] = 0.0;
    if (0 <= Xk_tmp - 1) {
      Ck[b_selectMatrix_size[0]] = selectMatrix_data[selectMatrix_size[0]];
    }

    Ck[selectMatrix_size[0] + b_selectMatrix_size[0]] = 1.0;
    selectMatrix_size[0] = b_selectMatrix_size[0];
    selectMatrix_size[1] = 2;
    Xk_tmp = b_selectMatrix_size[0] * 2;
    if (0 <= Xk_tmp - 1) {
      memcpy(&selectMatrix_data[0], &Ck[0], Xk_tmp * sizeof(real_T));
    }

    /*  indicate that the solution must be updated */
    updateSolution = true;
  } else {
    /*  if no valid, clear the corresponding flag */
    st.site = &v_emlrtRSI;
    if ((paramsAlgo->bitSonarAzimuthUsed < 1) ||
        (paramsAlgo->bitSonarAzimuthUsed > 8)) {
      emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
        "MATLAB:bitSetGet:BITOutOfRange", "MATLAB:bitSetGet:BITOutOfRange", 0);
    }

    i2 = paramsAlgo->bitSonarAzimuthUsed;
    if (i2 < 0) {
      i2 = 0;
    }

    Xk_tmp = i2;
    qY = Xk_tmp - 1U;
    if (qY > (uint32_T)Xk_tmp) {
      qY = 0U;
    }

    if ((int32_T)qY > 7) {
      emlrtDynamicBoundsCheckR2012b((int32_T)qY, 0, 7, &emlrtBCI, &st);
    }

    dataAlgo->usedInSolution &= (int8_T)~(int8_T)(1 << (int32_T)qY);
  }

  /*  apply selection */
  if (updateSolution) {
    st.site = &w_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    if (selectMatrix_size[0] == 0) {
      b_selectMatrix_size[0] = 0;
      b_selectMatrix_size[1] = 2;
    } else {
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)selectMatrix_size[0];
      n_t = (ptrdiff_t)2;
      k_t = (ptrdiff_t)2;
      lda_t = (ptrdiff_t)selectMatrix_size[0];
      ldb_t = (ptrdiff_t)2;
      ldc_t = (ptrdiff_t)selectMatrix_size[0];
      b_selectMatrix_size[0] = selectMatrix_size[0];
      b_selectMatrix_size[1] = 2;
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &selectMatrix_data[0],
            &lda_t, &Rk[0], &ldb_t, &beta1, &Ck[0], &ldc_t);
    }

    st.site = &w_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    mtimes(Ck, b_selectMatrix_size, selectMatrix_data, selectMatrix_size, Rk,
           Rk_size);
    st.site = &x_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    b_mtimes(selectMatrix_data, selectMatrix_size, Hk, Hk_data, Hk_size);
    st.site = &y_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    c_mtimes(selectMatrix_data, selectMatrix_size, delta_z, delta_z_data,
             delta_z_size);

    /*  compute Kalman gain */
    st.site = &ab_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    e_mtimes(Hk_data, Hk_size, Pk, b_Hk, b_selectMatrix_size);
    st.site = &ab_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    f_mtimes(b_Hk, b_selectMatrix_size, Hk_data, Hk_size, Ck, selectMatrix_size);
    emlrtSizeEqCheckNDR2012b(selectMatrix_size, Rk_size, &emlrtECI, sp);
    st.site = &ab_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    d_mtimes(Pk, Hk_data, Hk_size, Hk, Kk_size);
    st.site = &ab_emlrtRSI;
    Xk_tmp = selectMatrix_size[0] * selectMatrix_size[1];
    for (i = 0; i < Xk_tmp; i++) {
      Ck[i] += Rk[i];
    }

    if (selectMatrix_size[1] != Kk_size[1]) {
      emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    b_st.site = &nb_emlrtRSI;
    if ((Kk_size[1] == 0) || ((selectMatrix_size[0] == 0) || (selectMatrix_size
          [1] == 0))) {
      Kk_size[0] = 4;
      Kk_size[1] = selectMatrix_size[0];
      Xk_tmp = selectMatrix_size[0] << 2;
      if (0 <= Xk_tmp - 1) {
        memset(&Hk[0], 0, Xk_tmp * sizeof(real_T));
      }
    } else if (selectMatrix_size[0] == selectMatrix_size[1]) {
      c_st.site = &ob_emlrtRSI;
      lusolve(&c_st, Ck, selectMatrix_size, Hk);
    } else {
      Rk_size[0] = selectMatrix_size[1];
      Rk_size[1] = selectMatrix_size[0];
      Xk_tmp = selectMatrix_size[0];
      for (i = 0; i < Xk_tmp; i++) {
        b_Xk_tmp = selectMatrix_size[1];
        for (i1 = 0; i1 < b_Xk_tmp; i1++) {
          Rk[i1 + Rk_size[0] * i] = Ck[i + selectMatrix_size[0] * i1];
        }
      }

      b_Kk_size[0] = Kk_size[1];
      b_Kk_size[1] = 4;
      Xk_tmp = Kk_size[1];
      for (i = 0; i < Xk_tmp; i++) {
        Kk_data[i] = Hk[4 * i];
      }

      for (i = 0; i < Xk_tmp; i++) {
        Kk_data[i + b_Kk_size[0]] = Hk[4 * i + 1];
      }

      for (i = 0; i < Xk_tmp; i++) {
        Kk_data[i + b_Kk_size[0] * 2] = Hk[4 * i + 2];
      }

      for (i = 0; i < Xk_tmp; i++) {
        Kk_data[i + b_Kk_size[0] * 3] = Hk[4 * i + 3];
      }

      c_st.site = &pb_emlrtRSI;
      qrsolve(&c_st, Rk, Rk_size, Kk_data, b_Kk_size, b_Hk, b_selectMatrix_size);
      Kk_size[0] = 4;
      Kk_size[1] = b_selectMatrix_size[0];
      Xk_tmp = b_selectMatrix_size[0];
      for (i = 0; i < Xk_tmp; i++) {
        Hk[4 * i] = b_Hk[i];
        Hk[4 * i + 1] = b_Hk[i + b_selectMatrix_size[0]];
        Hk[4 * i + 2] = b_Hk[i + b_selectMatrix_size[0] * 2];
        Hk[4 * i + 3] = b_Hk[i + b_selectMatrix_size[0] * 3];
      }
    }

    /*  update state */
    st.site = &bb_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    if (Kk_size[1] != delta_z_size[0]) {
      if (delta_z_size[0] == 1) {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((Kk_size[1] == 1) || (delta_z_size[0] == 1)) {
      Xk_tmp = Kk_size[1];
      Ck[0] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        Ck[0] += Hk[4 * i] * delta_z_data[i];
      }

      Rk[0] = Ck[0];
      Ck[1] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        Ck[1] += Hk[4 * i + 1] * delta_z_data[i];
      }

      Rk[1] = Ck[1];
      Ck[2] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        Ck[2] += Hk[4 * i + 2] * delta_z_data[i];
      }

      Rk[2] = Ck[2];
      Ck[3] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        Ck[3] += Hk[4 * i + 3] * delta_z_data[i];
      }

      Rk[3] = Ck[3];
    } else {
      b_st.site = &kb_emlrtRSI;
      g_mtimes(Hk, Kk_size, delta_z_data, delta_z_size, Ck);
      Rk[0] = Ck[0];
      Rk[1] = Ck[1];
      Rk[2] = Ck[2];
      Rk[3] = Ck[3];
    }

    Xk[0] += Rk[0];
    Xk[1] += Rk[1];
    Xk[2] += Rk[2];
    Xk[3] += Rk[3];

    /*  update covariance matrix */
    st.site = &cb_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    e_mtimes(Hk_data, Hk_size, Pk, b_Hk, b_selectMatrix_size);
    st.site = &cb_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    if (Kk_size[1] != b_selectMatrix_size[0]) {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }

    if ((Kk_size[1] == 1) || (b_selectMatrix_size[0] == 1)) {
      Xk_tmp = Kk_size[1];
      for (i = 0; i < 4; i++) {
        Phi[i] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i] += Hk[i + 4 * i1] * b_Hk[i1];
        }

        Phi[i + 4] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i + 4] += Hk[i + 4 * i1] * b_Hk[i1 + b_selectMatrix_size[0]];
        }

        Phi[i + 8] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i + 8] += Hk[i + 4 * i1] * b_Hk[i1 + b_selectMatrix_size[0] * 2];
        }

        Phi[i + 12] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i + 12] += Hk[i + 4 * i1] * b_Hk[i1 + b_selectMatrix_size[0] * 3];
        }
      }
    } else {
      b_st.site = &kb_emlrtRSI;
      h_mtimes(Hk, Kk_size, b_Hk, b_selectMatrix_size, Phi);
    }

    for (i = 0; i < 16; i++) {
      Pk[i] -= Phi[i];
    }
  }

  /*  ************************************************************************ */
  /*  store states */
  memcpy(&dataAlgo->ekf.Pk[0], &Pk[0], 16U * sizeof(real_T));

  /*  store covariance */
  dataAlgo->ekf.Xk[0] = Xk[0];
  dataAlgo->ekf.Xk[1] = Xk[1];
  dataAlgo->ekf.Xk[2] = Xk[2];
  dataAlgo->ekf.Xk[3] = Xk[3];

  /*  store state */
}

/* End of code generation (ZEN_objectTracking_V0_ekf.c) */
