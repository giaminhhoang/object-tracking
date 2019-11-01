/*
 * ZEN_simulateSignals_initialize.c
 *
 * Code generation for function 'ZEN_simulateSignals_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "ZEN_simulateSignals_initialize.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "eml_rand_shr3cong_stateful.h"
#include "eml_rand_mcg16807_stateful.h"
#include "eml_rand.h"
#include "eml_randn.h"
#include "_coder_ZEN_simulateSignals_mex.h"
#include "ZEN_simulateSignals_data.h"

/* Function Declarations */
static void ZEN_simulateSignals_once(void);

/* Function Definitions */
static void ZEN_simulateSignals_once(void)
{
  c_eml_rand_mt19937ar_stateful_f();
  eml_rand_shr3cong_stateful_free();
  eml_rand_mcg16807_stateful_free();
  eml_rand_free();
  state_not_empty_init();
  method_not_empty_init();
  eml_randn_init();
  eml_rand_init();
  eml_rand_mcg16807_stateful_init();
  eml_rand_shr3cong_stateful_init();
  c_eml_rand_mt19937ar_stateful_i();
}

void ZEN_simulateSignals_initialize(void)
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
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    ZEN_simulateSignals_once();
  }
}

/* End of code generation (ZEN_simulateSignals_initialize.c) */
