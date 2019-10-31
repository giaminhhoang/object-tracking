/*
 * ZEN_objectTracking_V0_ekf.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_ekf'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_ekf.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "ZEN_objectTracking_V0_measurementMatrix.h"
#include "ZEN_objectTracking_V0_systemNoiseCov.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

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

static emlrtRSInfo ob_emlrtRSI = { 20, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 56, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  130,                                 /* lineNo */
  22,                                  /* colNo */
  "ZEN_objectTracking_V0_ekf",         /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_ekf.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 51,/* lineNo */
  15,                                  /* colNo */
  "bitset",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\bitset.m"/* pName */
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

static emlrtRTEInfo e_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 158,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 153,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

/* Function Definitions */
void ZEN_objectTracking_V0_ekf(const emlrtStack *sp, struct2_T *dataAlgo, const
  struct6_T *paramsAlgo)
{
  boolean_T updateSolution;
  real_T Phi[16];
  real_T Qk[16];
  int32_T i;
  real_T x;
  int32_T i1;
  real_T Xk[4];
  int32_T Xk_tmp;
  real_T b_Phi[16];
  int32_T b_Xk_tmp;
  real_T d;
  real_T Hk[8];
  real_T d1;
  real_T Pk[16];
  real_T delta_z[2];
  real_T b_Hk[8];
  real_T Ck[4];
  int32_T selectMatrix_size[2];
  int8_T i2;
  uint32_T qY;
  real_T selectMatrix_data[4];
  real_T b_selectMatrix_data[4];
  int32_T b_selectMatrix_size[2];
  int32_T Rk_size[2];
  real_T Hk_data[8];
  int32_T Hk_size[2];
  real_T delta_z_data[2];
  int32_T delta_z_size[1];
  int32_T B_size[2];
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
  dataAlgo->ekf.Rk[0] = 0.0;
  dataAlgo->ekf.Rk[1] = 0.0;
  dataAlgo->ekf.Rk[2] = 0.0;
  dataAlgo->ekf.Rk[3] = 0.0;
  dataAlgo->ekf.Rk[0] = paramsAlgo->sonarRange_std * paramsAlgo->sonarRange_std;
  dataAlgo->ekf.Rk[3] = paramsAlgo->sonarAzimuth_std *
    paramsAlgo->sonarAzimuth_std;

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
  c_ZEN_objectTracking_V0_systemN(paramsAlgo->acceleration_psd, dataAlgo->ekf.Ts,
    Qk);

  /*  prediction step */
  for (i = 0; i < 4; i++) {
    x = 0.0;
    for (i1 = 0; i1 < 4; i1++) {
      Xk_tmp = i1 << 2;
      b_Xk_tmp = i + Xk_tmp;
      x += Phi[b_Xk_tmp] * dataAlgo->ekf.Xk[i1];
      b_Phi[b_Xk_tmp] = ((Phi[i] * dataAlgo->ekf.Pk[Xk_tmp] + Phi[i + 4] *
                          dataAlgo->ekf.Pk[Xk_tmp + 1]) + Phi[i + 8] *
                         dataAlgo->ekf.Pk[Xk_tmp + 2]) + Phi[i + 12] *
        dataAlgo->ekf.Pk[Xk_tmp + 3];
    }

    Xk[i] = x;
    x = b_Phi[i + 4];
    d = b_Phi[i + 8];
    d1 = b_Phi[i + 12];
    for (i1 = 0; i1 < 4; i1++) {
      Xk_tmp = i + (i1 << 2);
      Pk[Xk_tmp] = (((b_Phi[i] * Phi[i1] + x * Phi[i1 + 4]) + d * Phi[i1 + 8]) +
                    d1 * Phi[i1 + 12]) + Qk[Xk_tmp];
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
  /*  innovation covariance matrix */
  for (i = 0; i < 2; i++) {
    x = Hk[i + 2];
    d = Hk[i + 4];
    d1 = Hk[i + 6];
    for (i1 = 0; i1 < 4; i1++) {
      Xk_tmp = i1 << 2;
      b_Hk[i + (i1 << 1)] = ((Hk[i] * Pk[Xk_tmp] + x * Pk[Xk_tmp + 1]) + d *
        Pk[Xk_tmp + 2]) + d1 * Pk[Xk_tmp + 3];
    }

    x = b_Hk[i + 2];
    d = b_Hk[i + 4];
    d1 = b_Hk[i + 6];
    for (i1 = 0; i1 < 2; i1++) {
      Xk_tmp = i + (i1 << 1);
      Ck[Xk_tmp] = (((b_Hk[i] * Hk[i1] + x * Hk[i1 + 2]) + d * Hk[i1 + 4]) + d1 *
                    Hk[i1 + 6]) + dataAlgo->ekf.Rk[Xk_tmp];
    }
  }

  /*  compute innovations */
  if (dataAlgo->sonar.newMeasurement != 0) {
    st.site = &q_emlrtRSI;
    st.site = &q_emlrtRSI;
    st.site = &q_emlrtRSI;
    x = Xk[0] * Xk[0] + Xk[1] * Xk[1];
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    x = muDoubleScalarSqrt(x);
    delta_z[0] = dataAlgo->sonar.range - x;
    delta_z[1] = dataAlgo->sonar.azimuth - muDoubleScalarAtan2(Xk[1], Xk[0]);
  } else {
    delta_z[0] = 0.0;
    delta_z[1] = 0.0;
  }

  dataAlgo->ekf.innovationRange = delta_z[0];
  dataAlgo->ekf.innovationAzimuth = delta_z[1];

  /*  compute normamized innovations */
  st.site = &r_emlrtRSI;
  dataAlgo->ekf.innovationRange_std = muDoubleScalarSqrt(muDoubleScalarAbs(Ck[0]));
  st.site = &s_emlrtRSI;
  dataAlgo->ekf.innovationAzimuth_std = muDoubleScalarSqrt(muDoubleScalarAbs(Ck
    [3]));
  dataAlgo->ekf.innovationRange_norm = delta_z[0] /
    dataAlgo->ekf.innovationRange_std;
  dataAlgo->ekf.innovationAzimuth_norm = delta_z[1] /
    dataAlgo->ekf.innovationAzimuth_std;

  /*  select matrix is usded to discard inconsistent measurements */
  selectMatrix_size[0] = 0;
  selectMatrix_size[1] = 2;

  /*  check integrity */
  if (muDoubleScalarAbs(dataAlgo->ekf.innovationRange_norm) <
      paramsAlgo->sonarInnovationRange_threshold) {
    /*  if valid , set the corresponding flag */
    st.site = &t_emlrtRSI;
    if ((paramsAlgo->bitSonarRangeUsed < 1) || (paramsAlgo->bitSonarRangeUsed >
         8)) {
      emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
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
    selectMatrix_data[0] = 1.0;
    selectMatrix_data[1] = 0.0;
    selectMatrix_size[0] = 1;
    selectMatrix_size[1] = 2;
    for (i = 0; i < 2; i++) {
      b_selectMatrix_data[i] = selectMatrix_data[i];
    }

    /*  indicate that the solution must be updated */
    updateSolution = true;
  } else {
    /*  if no valid, clear the corresponding flag */
    st.site = &u_emlrtRSI;
    if ((paramsAlgo->bitSonarRangeUsed < 1) || (paramsAlgo->bitSonarRangeUsed >
         8)) {
      emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
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

  if (muDoubleScalarAbs(dataAlgo->ekf.innovationAzimuth_norm) <
      paramsAlgo->c_sonarInnovationAzimuth_thresh) {
    /*  if valid , set the corresponding flag */
    st.site = &v_emlrtRSI;
    if ((paramsAlgo->bitSonarAzimuthUsed < 1) ||
        (paramsAlgo->bitSonarAzimuthUsed > 8)) {
      emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
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
      selectMatrix_data[0] = b_selectMatrix_data[0];
    }

    selectMatrix_data[selectMatrix_size[0]] = 0.0;
    if (0 <= Xk_tmp - 1) {
      selectMatrix_data[b_selectMatrix_size[0]] =
        b_selectMatrix_data[selectMatrix_size[0]];
    }

    selectMatrix_data[selectMatrix_size[0] + b_selectMatrix_size[0]] = 1.0;
    selectMatrix_size[0] = b_selectMatrix_size[0];
    selectMatrix_size[1] = 2;
    Xk_tmp = b_selectMatrix_size[0] * 2;
    if (0 <= Xk_tmp - 1) {
      memcpy(&b_selectMatrix_data[0], &selectMatrix_data[0], Xk_tmp * sizeof
             (real_T));
    }

    /*  indicate that the solution must be updated */
    updateSolution = true;
  } else {
    /*  if no valid, clear the corresponding flag */
    st.site = &w_emlrtRSI;
    if ((paramsAlgo->bitSonarAzimuthUsed < 1) ||
        (paramsAlgo->bitSonarAzimuthUsed > 8)) {
      emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
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
    st.site = &x_emlrtRSI;
    mtimes(b_selectMatrix_data, selectMatrix_size, dataAlgo->ekf.Rk,
           selectMatrix_data, b_selectMatrix_size);
    st.site = &x_emlrtRSI;
    b_mtimes(selectMatrix_data, b_selectMatrix_size, b_selectMatrix_data,
             selectMatrix_size, Ck, Rk_size);
    st.site = &y_emlrtRSI;
    c_mtimes(b_selectMatrix_data, selectMatrix_size, Hk, Hk_data, Hk_size);
    st.site = &ab_emlrtRSI;
    d_mtimes(b_selectMatrix_data, selectMatrix_size, delta_z, delta_z_data,
             delta_z_size);

    /*  compute Kalman gain */
    st.site = &bb_emlrtRSI;
    f_mtimes(Hk_data, Hk_size, Pk, b_Hk, selectMatrix_size);
    st.site = &bb_emlrtRSI;
    g_mtimes(b_Hk, selectMatrix_size, Hk_data, Hk_size, selectMatrix_data,
             B_size);
    emlrtSizeEqCheckNDR2012b(B_size, Rk_size, &emlrtECI, sp);
    st.site = &bb_emlrtRSI;
    e_mtimes(Pk, Hk_data, Hk_size, b_Hk, selectMatrix_size);
    st.site = &bb_emlrtRSI;
    Xk_tmp = B_size[0] * B_size[1];
    for (i = 0; i < Xk_tmp; i++) {
      selectMatrix_data[i] += Ck[i];
    }

    if (B_size[1] != selectMatrix_size[1]) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    b_st.site = &ob_emlrtRSI;
    mrdiv(&b_st, b_Hk, selectMatrix_size, selectMatrix_data, B_size, Hk,
          b_selectMatrix_size);

    /*  update state */
    st.site = &cb_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    if (b_selectMatrix_size[1] != delta_z_size[0]) {
      if (delta_z_size[0] == 1) {
        emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((b_selectMatrix_size[1] == 1) || (delta_z_size[0] == 1)) {
      Xk_tmp = b_selectMatrix_size[1];
      selectMatrix_data[0] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        selectMatrix_data[0] += Hk[4 * i] * delta_z_data[i];
      }

      Ck[0] = selectMatrix_data[0];
      selectMatrix_data[1] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        selectMatrix_data[1] += Hk[4 * i + 1] * delta_z_data[i];
      }

      Ck[1] = selectMatrix_data[1];
      selectMatrix_data[2] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        selectMatrix_data[2] += Hk[4 * i + 2] * delta_z_data[i];
      }

      Ck[2] = selectMatrix_data[2];
      selectMatrix_data[3] = 0.0;
      for (i = 0; i < Xk_tmp; i++) {
        selectMatrix_data[3] += Hk[4 * i + 3] * delta_z_data[i];
      }

      Ck[3] = selectMatrix_data[3];
    } else {
      h_mtimes(Hk, b_selectMatrix_size, delta_z_data, delta_z_size,
               selectMatrix_data);
      Ck[0] = selectMatrix_data[0];
      Ck[1] = selectMatrix_data[1];
      Ck[2] = selectMatrix_data[2];
      Ck[3] = selectMatrix_data[3];
    }

    Xk[0] += Ck[0];
    Xk[1] += Ck[1];
    Xk[2] += Ck[2];
    Xk[3] += Ck[3];

    /*  update covariance matrix */
    st.site = &db_emlrtRSI;
    f_mtimes(Hk_data, Hk_size, Pk, b_Hk, selectMatrix_size);
    st.site = &db_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    if (b_selectMatrix_size[1] != selectMatrix_size[0]) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }

    if ((b_selectMatrix_size[1] == 1) || (selectMatrix_size[0] == 1)) {
      Xk_tmp = b_selectMatrix_size[1];
      for (i = 0; i < 4; i++) {
        Phi[i] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i] += Hk[i + 4 * i1] * b_Hk[i1];
        }

        Phi[i + 4] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i + 4] += Hk[i + 4 * i1] * b_Hk[i1 + selectMatrix_size[0]];
        }

        Phi[i + 8] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i + 8] += Hk[i + 4 * i1] * b_Hk[i1 + selectMatrix_size[0] * 2];
        }

        Phi[i + 12] = 0.0;
        for (i1 = 0; i1 < Xk_tmp; i1++) {
          Phi[i + 12] += Hk[i + 4 * i1] * b_Hk[i1 + selectMatrix_size[0] * 3];
        }
      }
    } else {
      i_mtimes(Hk, b_selectMatrix_size, b_Hk, selectMatrix_size, Phi);
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
