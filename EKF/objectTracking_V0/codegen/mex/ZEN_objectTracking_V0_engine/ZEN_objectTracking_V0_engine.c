/*
 * ZEN_objectTracking_V0_engine.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_engine'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_ekf.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 61,    /* lineNo */
  "ZEN_objectTracking_V0_engine",      /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_engine.m"/* pathName */
};

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
void ZEN_objectTracking_V0_engine(const emlrtStack *sp, const struct0_T *signals,
  struct2_T *dataAlgo, struct6_T *paramsAlgo, struct7_T *resultsAlgo)
{
  int32_T i;
  real_T v_idx_0_tmp;
  int32_T b_i;
  real_T v_idx_2_tmp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  **************************************************************** */
  /*  */
  /*            Description : batch run of  */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - Signals : struct containing simulated signals */
  /*                         */
  /*            Outputs :  */
  /*                        - Results_FUSION : results of the  */
  /*                     */
  /*  */
  /*  ************************************************************* */
  /*  initialize results structure */
  /*  **************************************************************** */
  /*  */
  /*            Description : initialize results struct */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - signals struct */
  /*                         */
  /*            Outputs :  */
  /*                        - results struct */
  /*  */
  /*  ************************************************************* */
  /*  initialize structure */
  /*  algorithm status */
  /*  solution used in the algorithm */
  memset(&resultsAlgo->t[0], 0, 500U * sizeof(real_T));
  memset(&resultsAlgo->status[0], 0, 500U * sizeof(int8_T));
  memset(&resultsAlgo->usedInSolution[0], 0, 500U * sizeof(int8_T));

  /*  main outputs */
  /*  innovations */
  memset(&resultsAlgo->position[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->velocity[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->positionStd[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->velocityStd[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->innovationRange[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->innovationAzimuth[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->innovationRangeNorm[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->innovationAzimuthNorm[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->innovationRangeStd[0], 0, 1000U * sizeof(real_T));
  memset(&resultsAlgo->innovationAzimuthStd[0], 0, 1000U * sizeof(real_T));

  /*  ************************************************************************ */
  /*  Main loop */
  for (i = 0; i < 500; i++) {
    /*  copy measurements in algorithm's data structure */
    dataAlgo->t = signals->t[i];
    dataAlgo->sonar.range = signals->sonar.range[i];
    dataAlgo->sonar.azimuth = signals->sonar.azimuth[i];

    /*  if i > 1 */
    /*     dataAlgo.Ts = resultsAlgo.t(i) - resultsAlgo.t(i-1); */
    /*  else */
    /*     dataAlgo.Ts = 0; */
    /*  end */
    /*     %% ******************************************************************** */
    /*  */
    /*                     Initial position and velocity */
    /*  */
    /*  ********************************************************************* */
    if (i + 1 == 1) {
      /*  load initial position from reference  */
      /*  assume zero initial velocity */
      paramsAlgo->position0[0] = signals->position[0];
      paramsAlgo->velocity0[0] = signals->velocity[0];
      paramsAlgo->position0[1] = signals->position[1];
      paramsAlgo->velocity0[1] = signals->velocity[1];
    }

    /*  ********************************************************************* */
    /*  */
    /*                        Filter processing */
    /*  */
    /*  ********************************************************************* */
    st.site = &emlrtRSI;

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
      b_st.site = &b_emlrtRSI;
      b_st.site = &c_emlrtRSI;
      b_st.site = &d_emlrtRSI;
      b_st.site = &e_emlrtRSI;
      v_idx_0_tmp = paramsAlgo->positionStd0 * paramsAlgo->positionStd0;
      v_idx_2_tmp = paramsAlgo->velocityStd0 * paramsAlgo->velocityStd0;
      memset(&dataAlgo->ekf.Pk[0], 0, 16U * sizeof(real_T));
      dataAlgo->ekf.Pk[0] = v_idx_0_tmp;
      dataAlgo->ekf.Pk[5] = v_idx_0_tmp;
      dataAlgo->ekf.Pk[10] = v_idx_2_tmp;
      dataAlgo->ekf.Pk[15] = v_idx_2_tmp;

      /*  initialize state */
      /*  change status */
      dataAlgo->status = 1;
      dataAlgo->t0 = signals->t[i];

      /*  record initial time */
      /*  output results */
      dataAlgo->ekf.Xk[0] = paramsAlgo->position0[0];
      dataAlgo->ekf.Xk[2] = paramsAlgo->velocity0[0];
      dataAlgo->outputs.position[0] = paramsAlgo->position0[0];
      dataAlgo->ekf.Xk[1] = paramsAlgo->position0[1];
      dataAlgo->ekf.Xk[3] = paramsAlgo->velocity0[1];
      dataAlgo->outputs.position[1] = paramsAlgo->position0[1];
      b_st.site = &f_emlrtRSI;
      dataAlgo->outputs.positionStd[0] = muDoubleScalarSqrt(muDoubleScalarAbs
        (v_idx_0_tmp));
      dataAlgo->outputs.positionStd[1] = muDoubleScalarSqrt(muDoubleScalarAbs
        (v_idx_0_tmp));
      dataAlgo->outputs.velocity[0] = paramsAlgo->velocity0[0];
      dataAlgo->outputs.velocity[1] = paramsAlgo->velocity0[1];
      b_st.site = &g_emlrtRSI;
      dataAlgo->outputs.velocityStd[0] = muDoubleScalarSqrt(muDoubleScalarAbs
        (v_idx_2_tmp));
      dataAlgo->outputs.velocityStd[1] = muDoubleScalarSqrt(muDoubleScalarAbs
        (v_idx_2_tmp));
      break;

     case 1:
      /*  normal operation mode */
      b_st.site = &h_emlrtRSI;

      /*  ************************************************************************ */
      /*  EKF call */
      v_idx_0_tmp = signals->t[i] - dataAlgo->ekf.tLastCalled;
      if (v_idx_0_tmp < paramsAlgo->minimalUpdatePeriod) {
        dataAlgo->sonar.newMeasurement = 0;
      } else {
        if ((dataAlgo->sonar.newMeasurement != 0) || (v_idx_0_tmp >=
             paramsAlgo->maximalUpdatePeriod)) {
          /*  call EKF update */
          c_st.site = &k_emlrtRSI;
          ZEN_objectTracking_V0_ekf(&c_st, dataAlgo, paramsAlgo);

          /*  clear sonar new measurement flag */
          dataAlgo->sonar.newMeasurement = 0;
        }
      }

      /*  position */
      dataAlgo->outputs.position[0] = dataAlgo->ekf.Xk[0];
      dataAlgo->outputs.position[1] = dataAlgo->ekf.Xk[1];
      dataAlgo->outputs.positionStd[0] = muDoubleScalarSqrt(muDoubleScalarAbs
        (dataAlgo->ekf.Pk[0]));
      dataAlgo->outputs.positionStd[1] = muDoubleScalarSqrt(muDoubleScalarAbs
        (dataAlgo->ekf.Pk[5]));

      /*  velocity */
      dataAlgo->outputs.velocity[0] = dataAlgo->ekf.Xk[2];
      dataAlgo->outputs.velocity[1] = dataAlgo->ekf.Xk[3];
      dataAlgo->outputs.velocityStd[0] = muDoubleScalarSqrt(muDoubleScalarAbs
        (dataAlgo->ekf.Pk[10]));
      dataAlgo->outputs.velocityStd[1] = muDoubleScalarSqrt(muDoubleScalarAbs
        (dataAlgo->ekf.Pk[15]));
      dataAlgo->status = 1;
      break;
    }

    /*  ********************************************************************* */
    /*  */
    /*                        Save results */
    /*  */
    /*  ********************************************************************* */
    /*  save filter status */
    resultsAlgo->status[i] = dataAlgo->status;

    /*  save used in solution */
    resultsAlgo->usedInSolution[i] = dataAlgo->usedInSolution;

    /*  main outputs */
    /*  innovations */
    b_i = i << 1;
    resultsAlgo->position[b_i] = dataAlgo->outputs.position[0];
    resultsAlgo->velocity[b_i] = dataAlgo->outputs.velocity[0];
    resultsAlgo->positionStd[b_i] = dataAlgo->outputs.positionStd[0];
    resultsAlgo->velocityStd[b_i] = dataAlgo->outputs.velocityStd[0];
    resultsAlgo->innovationRange[b_i] = dataAlgo->ekf.innovationRange;
    resultsAlgo->innovationAzimuth[b_i] = dataAlgo->ekf.innovationAzimuth;
    resultsAlgo->innovationRangeNorm[b_i] = dataAlgo->ekf.innovationRangeNorm;
    resultsAlgo->innovationAzimuthNorm[b_i] =
      dataAlgo->ekf.innovationAzimuthNorm;
    resultsAlgo->innovationRangeStd[b_i] = dataAlgo->ekf.innovationRangeStd;
    resultsAlgo->innovationAzimuthStd[b_i] = dataAlgo->ekf.innovationAzimuthStd;
    b_i++;
    resultsAlgo->position[b_i] = dataAlgo->outputs.position[1];
    resultsAlgo->velocity[b_i] = dataAlgo->outputs.velocity[1];
    resultsAlgo->positionStd[b_i] = dataAlgo->outputs.positionStd[1];
    resultsAlgo->velocityStd[b_i] = dataAlgo->outputs.velocityStd[1];
    resultsAlgo->innovationRange[b_i] = dataAlgo->ekf.innovationRange;
    resultsAlgo->innovationAzimuth[b_i] = dataAlgo->ekf.innovationAzimuth;
    resultsAlgo->innovationRangeNorm[b_i] = dataAlgo->ekf.innovationRangeNorm;
    resultsAlgo->innovationAzimuthNorm[b_i] =
      dataAlgo->ekf.innovationAzimuthNorm;
    resultsAlgo->innovationRangeStd[b_i] = dataAlgo->ekf.innovationRangeStd;
    resultsAlgo->innovationAzimuthStd[b_i] = dataAlgo->ekf.innovationAzimuthStd;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (ZEN_objectTracking_V0_engine.c) */
