/*
 * ZEN_simulateSignals.c
 *
 * Code generation for function 'ZEN_simulateSignals'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "ZEN_generateSonar.h"
#include "ZEN_generateDeterministicTrajectory.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 30,    /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 35,  /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 37,  /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 39,  /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 45,  /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 57,  /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 59,  /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 31,    /* lineNo */
  5,                                   /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 34,  /* lineNo */
  1,                                   /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 44,  /* lineNo */
  9,                                   /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 46,  /* lineNo */
  62,                                  /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 46,  /* lineNo */
  10,                                  /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 46,  /* lineNo */
  5,                                   /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 47,  /* lineNo */
  5,                                   /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 56,  /* lineNo */
  1,                                   /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 58,  /* lineNo */
  11,                                  /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 60,  /* lineNo */
  65,                                  /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 60,  /* lineNo */
  10,                                  /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 60,  /* lineNo */
  5,                                   /* colNo */
  "ZEN_simulateSignals",               /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 12,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtRSInfo ob_emlrtRSI = { 60, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 47, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 46, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 31, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 56, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 34, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 58, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 44, /* lineNo */
  "ZEN_simulateSignals",               /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_simulateSignals.m"/* pathName */
};

/* Function Declarations */
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *num2str(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void tic(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *toc(const emlrtStack *sp, emlrtMCInfo *location);

/* Function Definitions */
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 3, pArrays, "horzcat", true,
    location);
}

static const mxArray *num2str(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m10;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m10, 1, &pArray, "num2str", true,
    location);
}

static void tic(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "tic", true, location);
}

static const mxArray *toc(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m9;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 0, NULL, "toc", true, location);
}

void ZEN_simulateSignals(const emlrtStack *sp, const struct0_T *paramsSim, const
  struct2_T *profile, struct4_T *signals)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 24 };

  static const char_T u[24] = { 'T', 'r', 'a', 'j', 'e', 'c', 't', 'o', 'r', 'y',
    ' ', 'g', 'e', 'n', 'e', 'r', 'a', 't', 'i', 'o', 'n', '.', '.', '.' };

  const mxArray *deltaT1 = NULL;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 47 };

  static const char_T b_u[47] = { 'E', 'n', 'd', ' ', 'o', 'f', ' ', 't', 'r',
    'a', 'j', 'e', 'c', 't', 'o', 'r', 'y', ' ', 'g', 'e', 'n', 'e', 'r', 'a',
    't', 'i', 'o', 'n', ' ', '(', 'P', 'r', 'o', 'c', 'e', 's', 's', 'i', 'n',
    'g', ' ', 't', 'i', 'm', 'e', ' ', '=' };

  const mxArray *b_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 3 };

  static const char_T c_u[3] = { ' ', 's', ')' };

  const mxArray *deltaT2 = NULL;
  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 27 };

  static const char_T d_u[27] = { 'S', 'o', 'n', 'a', 'r', ' ', 's', 'i', 'g',
    'n', 'a', 'l', 's', ' ', 'g', 'e', 'n', 'e', 'r', 'a', 't', 'i', 'o', 'n',
    '.', '.', '.' };

  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 50 };

  static const char_T e_u[50] = { 'E', 'n', 'd', ' ', 'o', 'f', ' ', 's', 'o',
    'n', 'a', 'r', ' ', 's', 'i', 'g', 'n', 'a', 'l', 's', ' ', 'g', 'e', 'n',
    'e', 'r', 'a', 't', 'i', 'o', 'n', ' ', '(', 'P', 'r', 'o', 'c', 'e', 's',
    's', 'i', 'n', 'g', ' ', 't', 'i', 'm', 'e', ' ', '=' };

  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 3 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  ************************************************************************ */
  /*  */
  /*            Description : simulate complete dynamics and sonar signals */
  /*                             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - Params : struct containing simulation parameters  */
  /*                        - Profile : struct containing profile parameters */
  /*            Outputs :  */
  /*                        - Signals : struct containing all signals generated by simulation */
  /*  */
  /*  ************************************************************************* */
  /*  ************************************************************************ */
  /*  */
  /*                        Dynamics signals generation */
  /*  */
  /*  ************************************************************************* */
  st.site = &emlrtRSI;
  if (muDoubleScalarIsNaN(paramsSim->displayText)) {
    emlrtErrorWithMessageIdR2018a(&st, &ib_emlrtRTEI, "MATLAB:nologicalnan",
      "MATLAB:nologicalnan", 0);
  }

  if (paramsSim->displayText != 0.0) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 24, m0, &u[0]);
    emlrtAssign(&y, m0);
    st.site = &rb_emlrtRSI;
    disp(&st, y, &emlrtMCI);
  }

  st.site = &tb_emlrtRSI;
  tic(&st, &b_emlrtMCI);
  st.site = &b_emlrtRSI;
  if (muDoubleScalarIsNaN(paramsSim->useRandomTrajectory)) {
    emlrtErrorWithMessageIdR2018a(&st, &ib_emlrtRTEI, "MATLAB:nologicalnan",
      "MATLAB:nologicalnan", 0);
  }

  if (paramsSim->useRandomTrajectory != 0.0) {
    /*  for future use  */
    st.site = &c_emlrtRSI;
    c_ZEN_generateDeterministicTraj(&st, paramsSim->Ts,
      paramsSim->loadedTrajectory.t, paramsSim->loadedTrajectory.position,
      signals->t, signals->position, signals->velocity,
      signals->sonar.newMeasurement, signals->sonar.range_perfect,
      signals->sonar.azimuth_perfect, signals->sonar.range,
      signals->sonar.azimuth);

    /*  TBD */
  } else {
    st.site = &d_emlrtRSI;
    c_ZEN_generateDeterministicTraj(&st, paramsSim->Ts,
      paramsSim->loadedTrajectory.t, paramsSim->loadedTrajectory.position,
      signals->t, signals->position, signals->velocity,
      signals->sonar.newMeasurement, signals->sonar.range_perfect,
      signals->sonar.azimuth_perfect, signals->sonar.range,
      signals->sonar.azimuth);
  }

  st.site = &vb_emlrtRSI;
  emlrtAssign(&deltaT1, toc(&st, &c_emlrtMCI));
  st.site = &e_emlrtRSI;
  if (muDoubleScalarIsNaN(paramsSim->displayText)) {
    emlrtErrorWithMessageIdR2018a(&st, &ib_emlrtRTEI, "MATLAB:nologicalnan",
      "MATLAB:nologicalnan", 0);
  }

  if (paramsSim->displayText != 0.0) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 47, m1, &b_u[0]);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 3, m2, &c_u[0]);
    emlrtAssign(&b_y, m2);
    st.site = &qb_emlrtRSI;
    disp(&st, horzcat(&st, y, num2str(&st, emlrtAlias(deltaT1), &d_emlrtMCI),
                      b_y, &e_emlrtMCI), &f_emlrtMCI);
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(sp, 27, m3, &d_u[0]);
    emlrtAssign(&y, m3);
    st.site = &pb_emlrtRSI;
    disp(&st, y, &g_emlrtMCI);
  }

  /*  ************************************************************************ */
  /*  */
  /*                        Sonar signals generation */
  /*  */
  /*  ************************************************************************* */
  st.site = &sb_emlrtRSI;
  tic(&st, &h_emlrtMCI);
  st.site = &f_emlrtRSI;
  ZEN_generateSonar(&st, signals, profile->sonar.Ts, profile->sonar.range_std,
                    profile->sonar.azimuth_std);
  st.site = &ub_emlrtRSI;
  emlrtAssign(&deltaT2, toc(&st, &i_emlrtMCI));
  st.site = &g_emlrtRSI;
  if (muDoubleScalarIsNaN(paramsSim->displayText)) {
    emlrtErrorWithMessageIdR2018a(&st, &ib_emlrtRTEI, "MATLAB:nologicalnan",
      "MATLAB:nologicalnan", 0);
  }

  if (paramsSim->displayText != 0.0) {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(sp, 50, m4, &e_u[0]);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(sp, 3, m5, &c_u[0]);
    emlrtAssign(&b_y, m5);
    st.site = &ob_emlrtRSI;
    disp(&st, horzcat(&st, y, num2str(&st, emlrtAlias(deltaT2), &j_emlrtMCI),
                      b_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  emlrtDestroyArray(&deltaT1);
  emlrtDestroyArray(&deltaT2);
}

/* End of code generation (ZEN_simulateSignals.c) */
