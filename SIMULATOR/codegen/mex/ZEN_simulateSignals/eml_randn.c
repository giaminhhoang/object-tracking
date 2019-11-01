/*
 * eml_randn.c
 *
 * Code generation for function 'eml_randn'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "eml_randn.h"

/* Variable Definitions */
static uint32_T method;
static boolean_T method_not_empty;
static uint32_T state[2];
static boolean_T state_not_empty;

/* Function Definitions */
void eml_randn_free(void)
{
  method_not_empty = false;
  state_not_empty = false;
}

void eml_randn_init(void)
{
  method = 0U;
  method_not_empty = true;
  state[0] = 362436069U;
  state[1] = 0U;
  state[1] = 521288629U;
  state_not_empty = true;
}

void method_not_empty_init(void)
{
  method_not_empty = false;
}

void state_not_empty_init(void)
{
  state_not_empty = false;
}

/* End of code generation (eml_randn.c) */
