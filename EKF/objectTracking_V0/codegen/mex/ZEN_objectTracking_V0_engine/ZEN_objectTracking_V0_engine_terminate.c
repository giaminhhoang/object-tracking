/*
 * ZEN_objectTracking_V0_engine_terminate.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_engine_terminate'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_engine_terminate.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "_coder_ZEN_objectTracking_V0_engine_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void ZEN_objectTracking_V0_engine_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void ZEN_objectTracking_V0_engine_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (ZEN_objectTracking_V0_engine_terminate.c) */
