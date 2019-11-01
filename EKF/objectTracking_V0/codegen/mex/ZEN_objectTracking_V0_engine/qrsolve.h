/*
 * qrsolve.h
 *
 * Code generation for function 'qrsolve'
 *
 */

#ifndef QRSOLVE_H
#define QRSOLVE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ZEN_objectTracking_V0_engine_types.h"

/* Function Declarations */
extern void qrsolve(const emlrtStack *sp, const real_T A_data[], const int32_T
                    A_size[2], const real_T B_data[], const int32_T B_size[2],
                    real_T Y_data[], int32_T Y_size[2]);

#endif

/* End of code generation (qrsolve.h) */
