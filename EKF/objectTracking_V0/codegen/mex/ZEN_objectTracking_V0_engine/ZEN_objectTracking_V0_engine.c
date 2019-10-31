/*
 * ZEN_objectTracking_V0_engine.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_engine'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "ZEN_objectTracking_V0_process.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 63,    /* lineNo */
  "ZEN_objectTracking_V0_engine",      /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_engine.m"/* pathName */
};

/* Function Definitions */
void ZEN_objectTracking_V0_engine(const emlrtStack *sp, const struct0_T *signals,
  struct2_T *dataAlgo, struct6_T *paramsAlgo, struct7_T *resultsAlgo)
{
  int32_T i;
  int32_T b_i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

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
  memcpy(&resultsAlgo->t[0], &signals->t[0], 500U * sizeof(real_T));

  /*  ************************************************************************ */
  /*  Main loop */
  for (i = 0; i < 500; i++) {
    /*  copy measurements in algorithm's data structure */
    dataAlgo->t = signals->t[i];
    dataAlgo->sonar.newMeasurement = signals->sonar.newMeasurement[i];
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
    ZEN_objectTracking_V0_process(&st, dataAlgo, paramsAlgo);

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
    b_i = i << 1;
    resultsAlgo->position[b_i] = dataAlgo->outputs.position[0];
    resultsAlgo->velocity[b_i] = dataAlgo->outputs.velocity[0];
    resultsAlgo->position_std[b_i] = dataAlgo->outputs.position_std[0];
    resultsAlgo->velocity_std[b_i] = dataAlgo->outputs.velocity_std[0];
    b_i++;
    resultsAlgo->position[b_i] = dataAlgo->outputs.position[1];
    resultsAlgo->velocity[b_i] = dataAlgo->outputs.velocity[1];
    resultsAlgo->position_std[b_i] = dataAlgo->outputs.position_std[1];
    resultsAlgo->velocity_std[b_i] = dataAlgo->outputs.velocity_std[1];

    /*  innovations */
    resultsAlgo->innovationRange[i] = dataAlgo->ekf.innovationRange;
    resultsAlgo->innovationAzimuth[i] = dataAlgo->ekf.innovationAzimuth;
    resultsAlgo->innovationRange_norm[i] = dataAlgo->ekf.innovationRange_norm;
    resultsAlgo->innovationAzimuth_norm[i] =
      dataAlgo->ekf.innovationAzimuth_norm;
    resultsAlgo->innovationRange_std[i] = dataAlgo->ekf.innovationRange_std;
    resultsAlgo->innovationAzimuth_std[i] = dataAlgo->ekf.innovationAzimuth_std;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (ZEN_objectTracking_V0_engine.c) */
