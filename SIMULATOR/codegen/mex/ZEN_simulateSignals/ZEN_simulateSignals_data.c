/*
 * ZEN_simulateSignals_data.c
 *
 * Code generation for function 'ZEN_simulateSignals_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "ZEN_simulateSignals_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
omp_lock_t emlrtLockGlobal;
omp_nest_lock_t emlrtNestLockGlobal;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131482U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "ZEN_simulateSignals",               /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo l_emlrtRSI = { 98,         /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 282,        /* lineNo */
  "eml_float_colon",                   /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 21,         /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo v_emlrtRSI = { 21,         /* lineNo */
  "fliplr",                            /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\fliplr.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 65,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRTEInfo g_emlrtRTEI = { 98,       /* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

emlrtRTEInfo jb_emlrtRTEI = { 388,     /* lineNo */
  15,                                  /* colNo */
  "assert_pmaxsize",                   /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

/* End of code generation (ZEN_simulateSignals_data.c) */
