/*
 * eml_rand.c
 *
 * Code generation for function 'eml_rand'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "eml_rand.h"

/* Variable Definitions */
static uint32_T b_method;
static boolean_T b_method_not_empty;

/* Function Definitions */
void eml_rand_free(void)
{
  b_method_not_empty = false;
}

void eml_rand_init(void)
{
  b_method = 7U;
  b_method_not_empty = true;
}

/* End of code generation (eml_rand.c) */
