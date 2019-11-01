/*
 * ZEN_generateDeterministicTrajectory.h
 *
 * Code generation for function 'ZEN_generateDeterministicTrajectory'
 *
 */

#ifndef ZEN_GENERATEDETERMINISTICTRAJECTORY_H
#define ZEN_GENERATEDETERMINISTICTRAJECTORY_H

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
extern void c_ZEN_generateDeterministicTraj(const emlrtStack *sp, real_T
  paramsSim_Ts, const emxArray_real_T *paramsSim_loadedTrajectory_t, const
  emxArray_real_T *c_paramsSim_loadedTrajectory_po, emxArray_real_T *signals_t,
  emxArray_real_T *signals_position, emxArray_real_T *signals_velocity,
  emxArray_int8_T *signals_sonar_newMeasurement, emxArray_real_T
  *signals_sonar_range_perfect, emxArray_real_T *signals_sonar_azimuth_perfect,
  emxArray_real_T *signals_sonar_range, emxArray_real_T *signals_sonar_azimuth);

#endif

/* End of code generation (ZEN_generateDeterministicTrajectory.h) */
