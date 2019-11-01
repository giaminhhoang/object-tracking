/*
 * ZEN_simulateSignals_types.h
 *
 * Code generation for function 'ZEN_simulateSignals'
 *
 */

#ifndef ZEN_SIMULATESIGNALS_TYPES_H
#define ZEN_SIMULATESIGNALS_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  emxArray_real_T *t;
  emxArray_real_T *position;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  char_T algoName[17];
  char_T algoConfigName[5];
  char_T displayName[14];
  real_T useMex;
  real_T displayText;
  real_T displayFig;
  real_T Ts;
  real_T Npts;
  real_T t0;
  real_T tEnd;
  real_T duration;
  boolean_T controlRandom;
  real_T useRandomTrajectory;
  struct1_T loadedTrajectory;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  real_T Ts;
  real_T range_std;
  real_T azimuth_std;
} struct3_T;

#endif                                 /*typedef_struct3_T*/

#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  struct3_T sonar;
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct5_T
#define typedef_struct5_T

typedef struct {
  emxArray_int8_T *newMeasurement;
  emxArray_real_T *range_perfect;
  emxArray_real_T *azimuth_perfect;
  emxArray_real_T *range;
  emxArray_real_T *azimuth;
} struct5_T;

#endif                                 /*typedef_struct5_T*/

#ifndef typedef_struct4_T
#define typedef_struct4_T

typedef struct {
  emxArray_real_T *t;
  emxArray_real_T *position;
  emxArray_real_T *velocity;
  struct5_T sonar;
} struct4_T;

#endif                                 /*typedef_struct4_T*/
#endif

/* End of code generation (ZEN_simulateSignals_types.h) */
