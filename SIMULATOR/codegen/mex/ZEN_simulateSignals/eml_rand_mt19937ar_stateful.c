/*
 * eml_rand_mt19937ar_stateful.c
 *
 * Code generation for function 'eml_rand_mt19937ar_stateful'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "eml_rand_mt19937ar_stateful.h"

/* Variable Definitions */
static uint32_T d_state[625];
static boolean_T d_state_not_empty;

/* Function Definitions */
void c_eml_rand_mt19937ar_stateful_f(void)
{
  d_state_not_empty = false;
}

void c_eml_rand_mt19937ar_stateful_i(void)
{
  uint32_T r;
  int32_T mti;
  memset(&d_state[0], 0, 625U * sizeof(uint32_T));
  r = 5489U;
  d_state[0] = 5489U;
  for (mti = 0; mti < 623; mti++) {
    r = ((r ^ r >> 30U) * 1812433253U + mti) + 1U;
    d_state[mti + 1] = r;
  }

  d_state[624] = 624U;
  d_state_not_empty = true;
}

/* End of code generation (eml_rand_mt19937ar_stateful.c) */
