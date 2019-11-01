/*
 * _coder_ZEN_objectTracking_V0_engine_mex.c
 *
 * Code generation for function '_coder_ZEN_objectTracking_V0_engine_mex'
 *
 */

/* Include files */
#include "ZEN_objectTracking_V0_engine.h"
#include "_coder_ZEN_objectTracking_V0_engine_mex.h"
#include "ZEN_objectTracking_V0_engine_terminate.h"
#include "_coder_ZEN_objectTracking_V0_engine_api.h"
#include "ZEN_objectTracking_V0_engine_initialize.h"
#include "ZEN_objectTracking_V0_engine_data.h"

/* Function Declarations */
static void c_ZEN_objectTracking_V0_engine_(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void c_ZEN_objectTracking_V0_engine_(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[3])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        28, "ZEN_objectTracking_V0_engine");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 28,
                        "ZEN_objectTracking_V0_engine");
  }

  /* Call the function. */
  ZEN_objectTracking_V0_engine_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(ZEN_objectTracking_V0_engine_atexit);

  /* Module initialization. */
  ZEN_objectTracking_V0_engine_initialize();

  /* Dispatch the entry-point. */
  c_ZEN_objectTracking_V0_engine_(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  ZEN_objectTracking_V0_engine_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_ZEN_objectTracking_V0_engine_mex.c) */
