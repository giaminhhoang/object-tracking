/*
 * ZEN_generateSonar.h
 *
 * Code generation for function 'ZEN_generateSonar'
 *
 */

#ifndef ZEN_GENERATESONAR_H
#define ZEN_GENERATESONAR_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "omp.h"
#include "ZEN_simulateSignals_types.h"

/* Function Declarations */
extern void ZEN_generateSonar(const emlrtStack *sp, struct4_T *signals, real_T
  profile_sonar_Ts, real_T profile_sonar_range_std, real_T
  profile_sonar_azimuth_std);

#endif

/* End of code generation (ZEN_generateSonar.h) */
