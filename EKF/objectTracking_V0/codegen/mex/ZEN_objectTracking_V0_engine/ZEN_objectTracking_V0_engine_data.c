/*
 * ZEN_objectTracking_V0_engine_data.c
 *
 * Code generation for function 'ZEN_objectTracking_V0_engine_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131482U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "ZEN_objectTracking_V0_engine",      /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo i_emlrtRSI = { 45,         /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo j_emlrtRSI = { 55,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 80,         /* lineNo */
  "callFilter",                        /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 84,         /* lineNo */
  "callFilter",                        /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_process.m"/* pathName */
};

emlrtRSInfo eb_emlrtRSI = { 27,        /* lineNo */
  "ZEN_objectTracking_V0_systemNoiseCov",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_systemNoiseCov.m"/* pathName */
};

emlrtRSInfo fb_emlrtRSI = { 28,        /* lineNo */
  "ZEN_objectTracking_V0_systemNoiseCov",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_systemNoiseCov.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 29,        /* lineNo */
  "ZEN_objectTracking_V0_systemNoiseCov",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_systemNoiseCov.m"/* pathName */
};

emlrtRSInfo hb_emlrtRSI = { 30,        /* lineNo */
  "ZEN_objectTracking_V0_systemNoiseCov",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_systemNoiseCov.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 31,        /* lineNo */
  "ZEN_objectTracking_V0_systemNoiseCov",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_systemNoiseCov.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 33,        /* lineNo */
  "ZEN_objectTracking_V0_systemNoiseCov",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\EKF\\objectTracking_V0\\ZEN_objectTracking_V0_systemNoiseCov.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 54,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo mb_emlrtRSI = { 114,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo nb_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 209,       /* lineNo */
  "ceval_xgemm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo pb_emlrtRSI = { 212,       /* lineNo */
  "ceval_xgemm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo qb_emlrtRSI = { 214,       /* lineNo */
  "ceval_xgemm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 210,       /* lineNo */
  "ceval_xgemm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 9,         /* lineNo */
  "int",                               /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\int.m"/* pathName */
};

emlrtRSInfo jc_emlrtRSI = { 27,        /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

emlrtRSInfo kc_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\majority.m"/* pathName */
};

emlrtRSInfo lc_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 76,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 77,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 132,       /* lineNo */
  "ceval_xtrsm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 133,       /* lineNo */
  "ceval_xtrsm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 134,       /* lineNo */
  "ceval_xtrsm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 135,       /* lineNo */
  "ceval_xtrsm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 37,        /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 38,        /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 64,        /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

emlrtRSInfo bd_emlrtRSI = { 67,        /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

emlrtRSInfo jd_emlrtRSI = { 59,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo kd_emlrtRSI = { 79,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo ld_emlrtRSI = { 80,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo md_emlrtRSI = { 93,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo pd_emlrtRSI = { 211,       /* lineNo */
  "ceval_xgemm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo qd_emlrtRSI = { 213,       /* lineNo */
  "ceval_xgemm",                       /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRTEInfo emlrtRTEI = { 12,         /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

emlrtRTEInfo c_emlrtRTEI = { 45,       /* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

emlrtRTEInfo d_emlrtRTEI = { 48,       /* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

/* End of code generation (ZEN_objectTracking_V0_engine_data.c) */
