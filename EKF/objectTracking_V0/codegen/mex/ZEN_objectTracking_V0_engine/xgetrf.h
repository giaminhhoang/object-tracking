/*
 * xgetrf.h
 *
 * Code generation for function 'xgetrf'
 *
 */

#ifndef XGETRF_H
#define XGETRF_H

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
extern void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, real_T A_data[],
                   int32_T A_size[2], int32_T lda, int32_T ipiv_data[], int32_T
                   ipiv_size[2], int32_T *info);

#endif

/* End of code generation (xgetrf.h) */
