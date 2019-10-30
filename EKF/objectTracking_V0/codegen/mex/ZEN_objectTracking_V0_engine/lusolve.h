/*
 * lusolve.h
 *
 * Code generation for function 'lusolve'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ZEN_objectTracking_V0_engine_types.h"

/* Function Declarations */
void lusolve(const emlrtStack *sp, const real_T A_data[], const int32_T A_size[2],
             real_T B_data[]);

/* End of code generation (lusolve.h) */
