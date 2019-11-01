/*
 * ZEN_simulateSignals_emxutil.h
 *
 * Code generation for function 'ZEN_simulateSignals_emxutil'
 *
 */

#ifndef ZEN_SIMULATESIGNALS_EMXUTIL_H
#define ZEN_SIMULATESIGNALS_EMXUTIL_H

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
extern void emxEnsureCapacity_int32_T(const emlrtStack *sp, emxArray_int32_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_int8_T(const emlrtStack *sp, emxArray_int8_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxFreeStruct_struct0_T(struct0_T *pStruct);
extern void emxFreeStruct_struct4_T(struct4_T *pStruct);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_int8_T(emxArray_int8_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_struct4_T(const emlrtStack *sp, struct4_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int8_T(const emlrtStack *sp, emxArray_int8_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);

#endif

/* End of code generation (ZEN_simulateSignals_emxutil.h) */
