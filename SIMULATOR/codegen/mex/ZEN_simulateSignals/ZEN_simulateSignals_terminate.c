/*
 * ZEN_simulateSignals_terminate.c
 *
 * Code generation for function 'ZEN_simulateSignals_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "ZEN_simulateSignals_terminate.h"
#include "eml_randn.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "eml_rand_shr3cong_stateful.h"
#include "eml_rand_mcg16807_stateful.h"
#include "eml_rand.h"
#include "_coder_ZEN_simulateSignals_mex.h"
#include "ZEN_simulateSignals_data.h"

/* Function Definitions */
void ZEN_simulateSignals_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  c_eml_rand_mt19937ar_stateful_f();
  eml_rand_shr3cong_stateful_free();
  eml_rand_mcg16807_stateful_free();
  eml_rand_free();
  eml_randn_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void ZEN_simulateSignals_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (ZEN_simulateSignals_terminate.c) */
