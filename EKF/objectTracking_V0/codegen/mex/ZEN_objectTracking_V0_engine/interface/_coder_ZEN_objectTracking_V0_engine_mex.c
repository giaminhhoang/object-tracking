/*
 * _coder_ZEN_objectTracking_V0_engine_mex.c
 *
 * Code generation for function '_coder_ZEN_objectTracking_V0_engine_mex'
 *
 */

/* Include files */
#include "_coder_ZEN_objectTracking_V0_engine_mex.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "ZEN_objectTracking_V0_engine_initialize.h"
#include "ZEN_objectTracking_V0_engine_terminate.h"
#include "_coder_ZEN_objectTracking_V0_engine_api.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void c_ZEN_objectTracking_V0_engine_(int32_T nlhs, mxArray
  *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
void c_ZEN_objectTracking_V0_engine_(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[3])
{
  const mxArray *outputs[1];
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

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 28,
                        "ZEN_objectTracking_V0_engine");
  }

  /* Call the function. */
  ZEN_objectTracking_V0_engine_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
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
