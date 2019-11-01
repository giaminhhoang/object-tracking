/*
 * eml_rand_mcg16807_stateful.c
 *
 * Code generation for function 'eml_rand_mcg16807_stateful'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "eml_rand_mcg16807_stateful.h"

/* Variable Definitions */
static uint32_T b_state;
static boolean_T b_state_not_empty;

/* Function Definitions */
void eml_rand_mcg16807_stateful_free(void)
{
  b_state_not_empty = false;
}

void eml_rand_mcg16807_stateful_init(void)
{
  b_state = 1144108930U;
  b_state_not_empty = true;
}

/* End of code generation (eml_rand_mcg16807_stateful.c) */
