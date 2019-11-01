/*
 * eml_rand_shr3cong_stateful.c
 *
 * Code generation for function 'eml_rand_shr3cong_stateful'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "eml_rand_shr3cong_stateful.h"

/* Variable Definitions */
static uint32_T c_state[2];
static boolean_T c_state_not_empty;

/* Function Definitions */
void eml_rand_shr3cong_stateful_free(void)
{
  c_state_not_empty = false;
}

void eml_rand_shr3cong_stateful_init(void)
{
  c_state[0] = 362436069U;
  c_state[1] = 521288629U;
  c_state_not_empty = true;
}

/* End of code generation (eml_rand_shr3cong_stateful.c) */
