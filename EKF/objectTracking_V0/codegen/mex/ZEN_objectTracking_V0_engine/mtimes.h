/*
 * mtimes.h
 *
 * Code generation for function 'mtimes'
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
void b_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B[8],
              real_T C_data[], int32_T C_size[2]);
void c_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B[2],
              real_T C_data[], int32_T C_size[1]);
void d_mtimes(const real_T A[16], const real_T B_data[], const int32_T B_size[2],
              real_T C_data[], int32_T C_size[2]);
void e_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B[16],
              real_T C_data[], int32_T C_size[2]);
void f_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T
              B_data[], const int32_T B_size[2], real_T C_data[], int32_T
              C_size[2]);
void g_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T
              B_data[], const int32_T B_size[1], real_T C[4]);
void h_mtimes(const real_T A_data[], const int32_T A_size[2], const real_T
              B_data[], const int32_T B_size[2], real_T C[16]);
void mtimes(const real_T A_data[], const int32_T A_size[2], const real_T B_data[],
            const int32_T B_size[2], real_T C_data[], int32_T C_size[2]);

/* End of code generation (mtimes.h) */
