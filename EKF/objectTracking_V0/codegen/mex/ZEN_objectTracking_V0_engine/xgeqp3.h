/*
 * xgeqp3.h
 *
 * Code generation for function 'xgeqp3'
 *
 */

#ifndef XGEQP3_H
#define XGEQP3_H

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
extern void xgeqp3(const emlrtStack *sp, real_T A_data[], int32_T A_size[2],
                   real_T tau_data[], int32_T tau_size[1], int32_T jpvt_data[],
                   int32_T jpvt_size[2]);

#endif

/* End of code generation (xgeqp3.h) */
