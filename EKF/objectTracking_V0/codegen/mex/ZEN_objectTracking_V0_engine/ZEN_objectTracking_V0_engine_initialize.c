/*
 * ZEN_objectTracking_V0_engine_initialize.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_engine_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_initialize.h"
#include "_coder_ZEN_objectTracking_V0_engine_mex.h"
#include "ZEN_objectTracking_V0_engine_data.h"

/* Function Definitions */
void ZEN_objectTracking_V0_engine_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (ZEN_objectTracking_V0_engine_initialize.c) */
