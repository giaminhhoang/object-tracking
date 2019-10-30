/*
 * ZEN_objectTracking_V0_engine_types.h
 *
 * Code generation for function 'ZEN_objectTracking_V0_engine_types'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  real_T newMeasurement[500];
  real_T range_perfect[500];
  real_T azimuth_perfect[500];
  real_T range[500];
  real_T azimuth[500];
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T t[500];
  real_T position[1000];
  real_T velocity[1000];
  struct1_T sonar;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  int8_T newMeasurement;
  real_T range;
  real_T azimuth;
} struct3_T;

#endif                                 /*typedef_struct3_T*/

#ifndef typedef_struct4_T
#define typedef_struct4_T

typedef struct {
  real_T Ts;
  real_T tLastCalled;
  real_T tLastUpdated;
  real_T Xk[4];
  real_T Pk[16];
  real_T Rk[4];
  real_T innovationRange;
  real_T innovationAzimuth;
  real_T innovationRangeNorm;
  real_T innovationAzimuthNorm;
  real_T innovationRangeStd;
  real_T innovationAzimuthStd;
} struct4_T;

#endif                                 /*typedef_struct4_T*/

#ifndef typedef_struct5_T
#define typedef_struct5_T

typedef struct {
  real_T position[2];
  real_T velocity[2];
  real_T positionStd[2];
  real_T velocityStd[2];
} struct5_T;

#endif                                 /*typedef_struct5_T*/

#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  real_T t;
  real_T t0;
  int8_T status;
  int8_T usedInSolution;
  struct3_T sonar;
  struct4_T ekf;
  struct5_T outputs;
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct6_T
#define typedef_struct6_T

typedef struct {
  real_T algoVersion;
  real_T algoSubversion;
  int8_T platformNum;
  int8_T bitSonarRangeUsed;
  int8_T bitSonarAzimuthUsed;
  real_T Ts;
  real_T maximalUpdatePeriod;
  real_T minimalUpdatePeriod;
  real_T position0[2];
  real_T velocity0[2];
  real_T positionStd0;
  real_T velocityStd0;
  real_T accelerationPSD;
  real_T sonarRangeStd;
  real_T sonarAzimuthStd;
  real_T sonarInnovationRangeThreshold;
  real_T sonarInnovationAzimuthThreshold;
} struct6_T;

#endif                                 /*typedef_struct6_T*/

#ifndef typedef_struct7_T
#define typedef_struct7_T

typedef struct {
  real_T t[500];
  int8_T status[500];
  int8_T usedInSolution[500];
  real_T position[1000];
  real_T velocity[1000];
  real_T positionStd[1000];
  real_T velocityStd[1000];
  real_T innovationRange[1000];
  real_T innovationAzimuth[1000];
  real_T innovationRangeNorm[1000];
  real_T innovationAzimuthNorm[1000];
  real_T innovationRangeStd[1000];
  real_T innovationAzimuthStd[1000];
} struct7_T;

#endif                                 /*typedef_struct7_T*/

/* End of code generation (ZEN_objectTracking_V0_engine_types.h) */
