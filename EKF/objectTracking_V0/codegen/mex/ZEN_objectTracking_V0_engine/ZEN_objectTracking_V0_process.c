/*
 * ZEN_objectTracking_V0_process.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_process'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_process.h"
#include "ZEN_objectTracking_V0_ekf.h"

/* Variable Definitions */
static emlrtRSInfo b_emlrtRSI = { 29,  /* lineNo */
  "ZEN_objectTracking_V0_process",     /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 30,  /* lineNo */
  "ZEN_objectTracking_V0_process",     /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 31,  /* lineNo */
  "ZEN_objectTracking_V0_process",     /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 32,  /* lineNo */
  "ZEN_objectTracking_V0_process",     /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 44,  /* lineNo */
  "ZEN_objectTracking_V0_process",     /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 46,  /* lineNo */
  "ZEN_objectTracking_V0_process",     /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 50,  /* lineNo */
  "ZEN_objectTracking_V0_process",     /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 71,  /* lineNo */
  "callFilter",                        /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

/* Function Definitions */
void ZEN_objectTracking_V0_process(const emlrtStack *sp, struct2_T *dataAlgo,
  const struct6_T *paramsAlgo)
{
  real_T v_idx_0_tmp;
  real_T v_idx_2_tmp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  ************************************************************************* */
  /*  */
  /*            Description : Object tracking algorithm processing function */
  /*                    frame = Cartersin */
  /*                    state = 4 parameters */
  /*  */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs : */
  /*                        - data, params */
  /*  */
  /*            Outputs : */
  /*                        - data */
  /*  */
  /*  */
  /*  ************************************************************************* */
  /*  normal operation */
  switch (dataAlgo->status) {
   case 0:
    /*  not initialized, first call */
    /*  initalize covariance matrix */
    st.site = &b_emlrtRSI;
    st.site = &c_emlrtRSI;
    st.site = &d_emlrtRSI;
    st.site = &e_emlrtRSI;
    v_idx_0_tmp = paramsAlgo->position_std0 * paramsAlgo->position_std0;
    v_idx_2_tmp = paramsAlgo->velocity_std0 * paramsAlgo->velocity_std0;
    memset(&dataAlgo->ekf.Pk[0], 0, sizeof(real_T) << 4);
    dataAlgo->ekf.Pk[0] = v_idx_0_tmp;
    dataAlgo->ekf.Pk[5] = v_idx_0_tmp;
    dataAlgo->ekf.Pk[10] = v_idx_2_tmp;
    dataAlgo->ekf.Pk[15] = v_idx_2_tmp;

    /*  initialize state */
    /*  change status */
    dataAlgo->status = 1;
    dataAlgo->t0 = dataAlgo->t;

    /*  record initial time */
    /*  output results */
    dataAlgo->ekf.Xk[0] = paramsAlgo->position0[0];
    dataAlgo->ekf.Xk[2] = paramsAlgo->velocity0[0];
    dataAlgo->outputs.position[0] = dataAlgo->ekf.Xk[0];
    v_idx_0_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[0]);
    dataAlgo->ekf.Xk[1] = paramsAlgo->position0[1];
    dataAlgo->ekf.Xk[3] = paramsAlgo->velocity0[1];
    dataAlgo->outputs.position[1] = dataAlgo->ekf.Xk[1];
    v_idx_2_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[5]);
    st.site = &f_emlrtRSI;
    dataAlgo->outputs.position_std[0] = v_idx_0_tmp;
    dataAlgo->outputs.position_std[0] = muDoubleScalarSqrt
      (dataAlgo->outputs.position_std[0]);
    dataAlgo->outputs.position_std[1] = v_idx_2_tmp;
    dataAlgo->outputs.position_std[1] = muDoubleScalarSqrt
      (dataAlgo->outputs.position_std[1]);
    dataAlgo->outputs.velocity[0] = dataAlgo->ekf.Xk[2];
    v_idx_0_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[10]);
    dataAlgo->outputs.velocity[1] = dataAlgo->ekf.Xk[3];
    v_idx_2_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[15]);
    st.site = &g_emlrtRSI;
    dataAlgo->outputs.velocity_std[0] = v_idx_0_tmp;
    dataAlgo->outputs.velocity_std[0] = muDoubleScalarSqrt
      (dataAlgo->outputs.velocity_std[0]);
    dataAlgo->outputs.velocity_std[1] = v_idx_2_tmp;
    dataAlgo->outputs.velocity_std[1] = muDoubleScalarSqrt
      (dataAlgo->outputs.velocity_std[1]);
    break;

   case 1:
    /*  normal operation mode */
    st.site = &h_emlrtRSI;

    /*  ************************************************************************ */
    /*  EKF call */
    v_idx_0_tmp = dataAlgo->t - dataAlgo->ekf.tLastCalled;
    if (v_idx_0_tmp < paramsAlgo->minimalUpdatePeriod) {
      dataAlgo->sonar.newMeasurement = 0;
    } else {
      if ((dataAlgo->sonar.newMeasurement != 0) || (v_idx_0_tmp >=
           paramsAlgo->maximalUpdatePeriod)) {
        /*  call EKF update */
        b_st.site = &k_emlrtRSI;
        ZEN_objectTracking_V0_ekf(&b_st, dataAlgo, paramsAlgo);

        /*  clear sonar new measurement flag */
        dataAlgo->sonar.newMeasurement = 0;
      }
    }

    /*  position */
    dataAlgo->outputs.position[0] = dataAlgo->ekf.Xk[0];
    v_idx_0_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[0]);
    dataAlgo->outputs.position[1] = dataAlgo->ekf.Xk[1];
    v_idx_2_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[5]);
    dataAlgo->outputs.position_std[0] = v_idx_0_tmp;
    dataAlgo->outputs.position_std[0] = muDoubleScalarSqrt
      (dataAlgo->outputs.position_std[0]);
    dataAlgo->outputs.position_std[1] = v_idx_2_tmp;
    dataAlgo->outputs.position_std[1] = muDoubleScalarSqrt
      (dataAlgo->outputs.position_std[1]);

    /*  velocity */
    dataAlgo->outputs.velocity[0] = dataAlgo->ekf.Xk[2];
    v_idx_0_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[10]);
    dataAlgo->outputs.velocity[1] = dataAlgo->ekf.Xk[3];
    v_idx_2_tmp = muDoubleScalarAbs(dataAlgo->ekf.Pk[15]);
    dataAlgo->outputs.velocity_std[0] = v_idx_0_tmp;
    dataAlgo->outputs.velocity_std[0] = muDoubleScalarSqrt
      (dataAlgo->outputs.velocity_std[0]);
    dataAlgo->outputs.velocity_std[1] = v_idx_2_tmp;
    dataAlgo->outputs.velocity_std[1] = muDoubleScalarSqrt
      (dataAlgo->outputs.velocity_std[1]);
    dataAlgo->status = 1;
    break;
  }
}

/* End of code generation (ZEN_objectTracking_V0_process.c) */
