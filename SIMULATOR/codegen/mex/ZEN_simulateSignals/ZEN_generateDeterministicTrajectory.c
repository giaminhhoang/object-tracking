/*
 * ZEN_generateDeterministicTrajectory.c
 *
 * Code generation for function 'ZEN_generateDeterministicTrajectory'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "ZEN_generateDeterministicTrajectory.h"
#include "ZEN_simulateSignals_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "interp1.h"
#include "ZEN_simulateSignals_data.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 23,  /* lineNo */
  "ZEN_generateDeterministicTrajectory",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 27,  /* lineNo */
  "ZEN_generateDeterministicTrajectory",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 31,  /* lineNo */
  "ZEN_generateDeterministicTrajectory",/* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 20,  /* lineNo */
  "ZEN_initializeSignals",             /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\BENCHMARK\\ZEN_initializeSignals.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 39,  /* lineNo */
  "interp1",                           /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 162, /* lineNo */
  "interp1_work",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 171, /* lineNo */
  "interp1_work",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 177, /* lineNo */
  "interp1_work",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 182, /* lineNo */
  "interp1_work",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 222, /* lineNo */
  "interp1_work",                      /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 106, /* lineNo */
  "diff",                              /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 80,  /* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "ZEN_initializeSignals",             /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\BENCHMARK\\ZEN_initializeSignals.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 86,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 84,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 91,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 18,/* lineNo */
  11,                                  /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 27,/* lineNo */
  37,                                  /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 27,/* lineNo */
  67,                                  /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 31,/* lineNo */
  29,                                  /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 27,/* lineNo */
  29,                                  /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 18,/* lineNo */
  22,                                  /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 78,/* lineNo */
  1,                                   /* colNo */
  "diff",                              /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  20,                                  /* colNo */
  "signals.velocity",                  /* aName */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  44,                                  /* colNo */
  "signals.velocity",                  /* aName */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  31,                                  /* lineNo */
  1,                                   /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  22,                                  /* colNo */
  "signals.velocity",                  /* aName */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  20,                                  /* colNo */
  "signals.velocity",                  /* aName */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  85,                                  /* colNo */
  "paramsSim.loadedTrajectory.t",      /* aName */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  45,                                  /* colNo */
  "paramsSim.loadedTrajectory.t",      /* aName */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  22,                                  /* colNo */
  "paramsSim.loadedTrajectory.t",      /* aName */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo kb_emlrtRTEI = { 123,/* lineNo */
  23,                                  /* colNo */
  "interp1_work",                      /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 153,/* lineNo */
  15,                                  /* colNo */
  "interp1_work",                      /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  27,                                  /* lineNo */
  5,                                   /* colNo */
  "ZEN_generateDeterministicTrajectory",/* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateDeterministicTrajectory.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 164,/* lineNo */
  13,                                  /* colNo */
  "interp1_work",                      /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 184,/* lineNo */
  13,                                  /* colNo */
  "interp1_work",                      /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pName */
};

/* Function Definitions */
void c_ZEN_generateDeterministicTraj(const emlrtStack *sp, real_T paramsSim_Ts,
  const emxArray_real_T *paramsSim_loadedTrajectory_t, const emxArray_real_T
  *c_paramsSim_loadedTrajectory_po, emxArray_real_T *signals_t, emxArray_real_T *
  signals_position, emxArray_real_T *signals_velocity, emxArray_int8_T
  *signals_sonar_newMeasurement, emxArray_real_T *signals_sonar_range_perfect,
  emxArray_real_T *signals_sonar_azimuth_perfect, emxArray_real_T
  *signals_sonar_range, emxArray_real_T *signals_sonar_azimuth)
{
  int32_T i0;
  real_T paramsSim_t0;
  int32_T i1;
  real_T tmp2;
  real_T ndbl;
  real_T apnd;
  int32_T iyLead;
  real_T cdiff;
  int32_T j2;
  int32_T nm1d2;
  emxArray_real_T *r0;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  int32_T nx;
  uint32_T outsize_idx_1;
  boolean_T overflow;
  int32_T iv6[2];
  int32_T exitg1;
  int32_T i2;
  emxArray_real_T *b_y1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  **************************************************************** */
  /*  */
  /*            Description : generate a simulated trajectory */
  /*                             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - simParams : struct containing simulation parameters  */
  /*                        - profile : struct containing profile parameters */
  /*            Outputs :  */
  /*                        - signals : struct containing all signals generated by simulation */
  /*  */
  /*  ************************************************************* */
  /*  intialize simulation signals */
  i0 = paramsSim_loadedTrajectory_t->size[1];
  if (1 > i0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &f_emlrtBCI, sp);
  }

  paramsSim_t0 = paramsSim_loadedTrajectory_t->data[0];
  i0 = paramsSim_loadedTrajectory_t->size[1];
  if (1 > i0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &e_emlrtBCI, sp);
  }

  i0 = paramsSim_loadedTrajectory_t->size[1];
  i1 = paramsSim_loadedTrajectory_t->size[1];
  if ((i1 < 1) || (i1 > i0)) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &g_emlrtBCI, sp);
  }

  tmp2 = paramsSim_loadedTrajectory_t->data[i1 - 1] -
    paramsSim_loadedTrajectory_t->data[0];
  st.site = &h_emlrtRSI;

  /*  ************************************************************************ */
  /*  */
  /*            Description : initialize Signals used for simulation */
  /*                             */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - simParams : struct containing simulation parameters */
  /*                         */
  /*            Outputs :  */
  /*                        - signals : Struct containing all simulation signals */
  /*  */
  /*  ************************************************************************* */
  b_st.site = &k_emlrtRSI;
  if (muDoubleScalarIsNaN(paramsSim_Ts) || muDoubleScalarIsNaN(tmp2)) {
    i0 = signals_t->size[0] * signals_t->size[1];
    signals_t->size[0] = 1;
    signals_t->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, signals_t, i0, &emlrtRTEI);
    signals_t->data[0] = rtNaN;
  } else if ((paramsSim_Ts == 0.0) || ((0.0 < tmp2) && (paramsSim_Ts < 0.0)) ||
             ((tmp2 < 0.0) && (paramsSim_Ts > 0.0))) {
    signals_t->size[0] = 1;
    signals_t->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmp2) && (muDoubleScalarIsInf(paramsSim_Ts) ||
              (0.0 == tmp2))) {
    i0 = signals_t->size[0] * signals_t->size[1];
    signals_t->size[0] = 1;
    signals_t->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, signals_t, i0, &d_emlrtRTEI);
    signals_t->data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(paramsSim_Ts)) {
    i0 = signals_t->size[0] * signals_t->size[1];
    signals_t->size[0] = 1;
    signals_t->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, signals_t, i0, &c_emlrtRTEI);
    signals_t->data[0] = 0.0;
  } else if (muDoubleScalarFloor(paramsSim_Ts) == paramsSim_Ts) {
    i0 = signals_t->size[0] * signals_t->size[1];
    signals_t->size[0] = 1;
    iyLead = (int32_T)muDoubleScalarFloor(tmp2 / paramsSim_Ts);
    signals_t->size[1] = iyLead + 1;
    emxEnsureCapacity_real_T(&b_st, signals_t, i0, &e_emlrtRTEI);
    for (i0 = 0; i0 <= iyLead; i0++) {
      signals_t->data[i0] = paramsSim_Ts * (real_T)i0;
    }
  } else {
    c_st.site = &l_emlrtRSI;
    ndbl = muDoubleScalarFloor(tmp2 / paramsSim_Ts + 0.5);
    apnd = ndbl * paramsSim_Ts;
    if (paramsSim_Ts > 0.0) {
      cdiff = apnd - tmp2;
    } else {
      cdiff = tmp2 - apnd;
    }

    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarAbs
        (tmp2)) {
      ndbl++;
      apnd = tmp2;
    } else if (cdiff > 0.0) {
      apnd = (ndbl - 1.0) * paramsSim_Ts;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      j2 = (int32_T)ndbl;
    } else {
      j2 = 0;
    }

    d_st.site = &m_emlrtRSI;
    if (ndbl > 2.147483647E+9) {
      emlrtErrorWithMessageIdR2018a(&d_st, &jb_emlrtRTEI,
        "Coder:MATLAB:pmaxsize", "Coder:MATLAB:pmaxsize", 0);
    }

    i0 = signals_t->size[0] * signals_t->size[1];
    signals_t->size[0] = 1;
    signals_t->size[1] = j2;
    emxEnsureCapacity_real_T(&c_st, signals_t, i0, &g_emlrtRTEI);
    if (j2 > 0) {
      signals_t->data[0] = 0.0;
      if (j2 > 1) {
        signals_t->data[j2 - 1] = apnd;
        nm1d2 = (j2 - 1) / 2;
        for (iyLead = 0; iyLead <= nm1d2 - 2; iyLead++) {
          ndbl = (1.0 + (real_T)iyLead) * paramsSim_Ts;
          signals_t->data[1 + iyLead] = ndbl;
          signals_t->data[(j2 - iyLead) - 2] = apnd - ndbl;
        }

        if (nm1d2 << 1 == j2 - 1) {
          signals_t->data[nm1d2] = apnd / 2.0;
        } else {
          ndbl = (real_T)nm1d2 * paramsSim_Ts;
          signals_t->data[nm1d2] = ndbl;
          signals_t->data[nm1d2 + 1] = apnd - ndbl;
        }
      }
    }
  }

  i0 = signals_t->size[0] * signals_t->size[1];
  i1 = signals_t->size[0] * signals_t->size[1];
  signals_t->size[0] = 1;
  emxEnsureCapacity_real_T(&st, signals_t, i1, &b_emlrtRTEI);
  iyLead = i0 - 1;
  for (i0 = 0; i0 <= iyLead; i0++) {
    signals_t->data[i0] += paramsSim_t0;
  }

  /*  numMonteCarlo = paramsSim.numMonteCarloSim; */
  /*  ************************************************************************ */
  /*  */
  /*                            Dynamic signals */
  /*  */
  /*  ************************************************************************* */
  i0 = signals_position->size[0] * signals_position->size[1];
  signals_position->size[0] = 2;
  signals_position->size[1] = signals_t->size[1];
  emxEnsureCapacity_real_T(&st, signals_position, i0, &f_emlrtRTEI);
  iyLead = signals_t->size[1] << 1;
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_position->data[i0] = 0.0;
  }

  i0 = signals_velocity->size[0] * signals_velocity->size[1];
  signals_velocity->size[0] = 2;
  signals_velocity->size[1] = signals_t->size[1];
  emxEnsureCapacity_real_T(&st, signals_velocity, i0, &f_emlrtRTEI);
  iyLead = signals_t->size[1] << 1;
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_velocity->data[i0] = 0.0;
  }

  /*  ************************************************************************ */
  /*  */
  /*                            Sonar signals */
  /*  */
  /*  ************************************************************************* */
  i0 = signals_sonar_newMeasurement->size[0] *
    signals_sonar_newMeasurement->size[1];
  signals_sonar_newMeasurement->size[0] = 1;
  signals_sonar_newMeasurement->size[1] = signals_t->size[1];
  emxEnsureCapacity_int8_T(&st, signals_sonar_newMeasurement, i0, &f_emlrtRTEI);
  iyLead = signals_t->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_sonar_newMeasurement->data[i0] = 0;
  }

  i0 = signals_sonar_range_perfect->size[0] * signals_sonar_range_perfect->size
    [1];
  signals_sonar_range_perfect->size[0] = 1;
  signals_sonar_range_perfect->size[1] = signals_t->size[1];
  emxEnsureCapacity_real_T(&st, signals_sonar_range_perfect, i0, &f_emlrtRTEI);
  iyLead = signals_t->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_sonar_range_perfect->data[i0] = 0.0;
  }

  i0 = signals_sonar_azimuth_perfect->size[0] *
    signals_sonar_azimuth_perfect->size[1];
  signals_sonar_azimuth_perfect->size[0] = 1;
  signals_sonar_azimuth_perfect->size[1] = signals_t->size[1];
  emxEnsureCapacity_real_T(&st, signals_sonar_azimuth_perfect, i0, &f_emlrtRTEI);
  iyLead = signals_t->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_sonar_azimuth_perfect->data[i0] = 0.0;
  }

  i0 = signals_sonar_range->size[0] * signals_sonar_range->size[1];
  signals_sonar_range->size[0] = 1;
  signals_sonar_range->size[1] = signals_t->size[1];
  emxEnsureCapacity_real_T(&st, signals_sonar_range, i0, &f_emlrtRTEI);
  iyLead = signals_t->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_sonar_range->data[i0] = 0.0;
  }

  i0 = signals_sonar_azimuth->size[0] * signals_sonar_azimuth->size[1];
  signals_sonar_azimuth->size[0] = 1;
  signals_sonar_azimuth->size[1] = signals_t->size[1];
  emxEnsureCapacity_real_T(&st, signals_sonar_azimuth, i0, &f_emlrtRTEI);
  iyLead = signals_t->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_sonar_azimuth->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &r0, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_2, 2, &i_emlrtRTEI, true);
  st.site = &i_emlrtRSI;
  i0 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = paramsSim_loadedTrajectory_t->size[1];
  emxEnsureCapacity_real_T(&st, varargin_1, i0, &h_emlrtRTEI);
  iyLead = paramsSim_loadedTrajectory_t->size[0] *
    paramsSim_loadedTrajectory_t->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    varargin_1->data[i0] = paramsSim_loadedTrajectory_t->data[i0];
  }

  iyLead = c_paramsSim_loadedTrajectory_po->size[1];
  i0 = varargin_2->size[0] * varargin_2->size[1];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = iyLead;
  emxEnsureCapacity_real_T(&st, varargin_2, i0, &i_emlrtRTEI);
  for (i0 = 0; i0 < iyLead; i0++) {
    varargin_2->data[i0] = c_paramsSim_loadedTrajectory_po->data[i0 << 1];
  }

  b_st.site = &p_emlrtRSI;
  nx = paramsSim_loadedTrajectory_t->size[1];
  i0 = c_paramsSim_loadedTrajectory_po->size[1];
  if (paramsSim_loadedTrajectory_t->size[1] != i0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI,
      "Coder:MATLAB:interp1_YInvalidLength",
      "Coder:MATLAB:interp1_YInvalidLength", 0);
  }

  outsize_idx_1 = (uint32_T)signals_t->size[1];
  if (paramsSim_loadedTrajectory_t->size[1] <= 1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &lb_emlrtRTEI,
      "MATLAB:interp1:NotEnoughPts", "MATLAB:interp1:NotEnoughPts", 0);
  }

  i0 = r0->size[0] * r0->size[1];
  r0->size[0] = 1;
  r0->size[1] = (int32_T)outsize_idx_1;
  emxEnsureCapacity_real_T(&b_st, r0, i0, &k_emlrtRTEI);
  iyLead = (int32_T)outsize_idx_1;
  for (i0 = 0; i0 < iyLead; i0++) {
    r0->data[i0] = rtNaN;
  }

  if (signals_t->size[1] != 0) {
    c_st.site = &q_emlrtRSI;
    overflow = (paramsSim_loadedTrajectory_t->size[1] > 2147483646);
    if (overflow) {
      d_st.site = &o_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    iyLead = 0;
    do {
      exitg1 = 0;
      if (iyLead <= nx - 1) {
        if (muDoubleScalarIsNaN(paramsSim_loadedTrajectory_t->data[iyLead])) {
          emlrtErrorWithMessageIdR2018a(&b_st, &mb_emlrtRTEI,
            "MATLAB:interp1:NaNinX", "MATLAB:interp1:NaNinX", 0);
        } else {
          iyLead++;
        }
      } else {
        if (paramsSim_loadedTrajectory_t->data[1] <
            paramsSim_loadedTrajectory_t->data[0]) {
          nm1d2 = nx >> 1;
          c_st.site = &r_emlrtRSI;
          for (iyLead = 0; iyLead < nm1d2; iyLead++) {
            ndbl = varargin_1->data[iyLead];
            i0 = (nx - iyLead) - 1;
            varargin_1->data[iyLead] = varargin_1->data[i0];
            varargin_1->data[i0] = ndbl;
          }

          c_st.site = &s_emlrtRSI;
          i0 = c_paramsSim_loadedTrajectory_po->size[1];
          nm1d2 = i0 >> 1;
          for (iyLead = 0; iyLead < nm1d2; iyLead++) {
            i0 = c_paramsSim_loadedTrajectory_po->size[1] - 1;
            j2 = i0 - iyLead;
            ndbl = varargin_2->data[iyLead];
            varargin_2->data[iyLead] = varargin_2->data[j2];
            varargin_2->data[j2] = ndbl;
          }
        }

        c_st.site = &t_emlrtRSI;
        if (nx > 2147483646) {
          d_st.site = &o_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (iyLead = 2; iyLead <= nx; iyLead++) {
          if (varargin_1->data[iyLead - 1] <= varargin_1->data[iyLead - 2]) {
            emlrtErrorWithMessageIdR2018a(&b_st, &nb_emlrtRTEI,
              "Coder:toolbox:interp1_nonMonotonicX",
              "Coder:toolbox:interp1_nonMonotonicX", 0);
          }
        }

        c_st.site = &u_emlrtRSI;
        interp1Linear(&c_st, varargin_2, signals_t, r0, varargin_1);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  i0 = signals_position->size[1];
  iv6[0] = 1;
  iv6[1] = i0;
  emlrtSubAssignSizeCheckR2012b(&iv6[0], 2, &(*(int32_T (*)[2])r0->size)[0], 2,
    &b_emlrtECI, sp);
  iyLead = r0->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_position->data[i0 << 1] = r0->data[i0];
  }

  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(sp);
  }

  st.site = &i_emlrtRSI;
  i0 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = paramsSim_loadedTrajectory_t->size[1];
  emxEnsureCapacity_real_T(&st, varargin_1, i0, &h_emlrtRTEI);
  iyLead = paramsSim_loadedTrajectory_t->size[0] *
    paramsSim_loadedTrajectory_t->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    varargin_1->data[i0] = paramsSim_loadedTrajectory_t->data[i0];
  }

  iyLead = c_paramsSim_loadedTrajectory_po->size[1];
  i0 = varargin_2->size[0] * varargin_2->size[1];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = iyLead;
  emxEnsureCapacity_real_T(&st, varargin_2, i0, &i_emlrtRTEI);
  for (i0 = 0; i0 < iyLead; i0++) {
    varargin_2->data[i0] = c_paramsSim_loadedTrajectory_po->data[1 + (i0 << 1)];
  }

  b_st.site = &p_emlrtRSI;
  nx = paramsSim_loadedTrajectory_t->size[1];
  i0 = c_paramsSim_loadedTrajectory_po->size[1];
  if (paramsSim_loadedTrajectory_t->size[1] != i0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI,
      "Coder:MATLAB:interp1_YInvalidLength",
      "Coder:MATLAB:interp1_YInvalidLength", 0);
  }

  outsize_idx_1 = (uint32_T)signals_t->size[1];
  if (paramsSim_loadedTrajectory_t->size[1] <= 1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &lb_emlrtRTEI,
      "MATLAB:interp1:NotEnoughPts", "MATLAB:interp1:NotEnoughPts", 0);
  }

  i0 = r0->size[0] * r0->size[1];
  r0->size[0] = 1;
  r0->size[1] = (int32_T)outsize_idx_1;
  emxEnsureCapacity_real_T(&b_st, r0, i0, &k_emlrtRTEI);
  iyLead = (int32_T)outsize_idx_1;
  for (i0 = 0; i0 < iyLead; i0++) {
    r0->data[i0] = rtNaN;
  }

  if (signals_t->size[1] != 0) {
    c_st.site = &q_emlrtRSI;
    overflow = (paramsSim_loadedTrajectory_t->size[1] > 2147483646);
    if (overflow) {
      d_st.site = &o_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    iyLead = 0;
    do {
      exitg1 = 0;
      if (iyLead <= nx - 1) {
        if (muDoubleScalarIsNaN(paramsSim_loadedTrajectory_t->data[iyLead])) {
          emlrtErrorWithMessageIdR2018a(&b_st, &mb_emlrtRTEI,
            "MATLAB:interp1:NaNinX", "MATLAB:interp1:NaNinX", 0);
        } else {
          iyLead++;
        }
      } else {
        if (paramsSim_loadedTrajectory_t->data[1] <
            paramsSim_loadedTrajectory_t->data[0]) {
          nm1d2 = nx >> 1;
          c_st.site = &r_emlrtRSI;
          for (iyLead = 0; iyLead < nm1d2; iyLead++) {
            ndbl = varargin_1->data[iyLead];
            varargin_1->data[iyLead] = varargin_1->data[(nx - iyLead) - 1];
            varargin_1->data[(nx - iyLead) - 1] = ndbl;
          }

          c_st.site = &s_emlrtRSI;
          i0 = c_paramsSim_loadedTrajectory_po->size[1];
          i1 = i0 >> 1;
          for (iyLead = 0; iyLead < i1; iyLead++) {
            i0 = c_paramsSim_loadedTrajectory_po->size[1] - 1;
            j2 = i0 - iyLead;
            ndbl = varargin_2->data[iyLead];
            varargin_2->data[iyLead] = varargin_2->data[j2];
            varargin_2->data[j2] = ndbl;
          }
        }

        c_st.site = &t_emlrtRSI;
        if (nx > 2147483646) {
          d_st.site = &o_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (iyLead = 2; iyLead <= nx; iyLead++) {
          if (varargin_1->data[iyLead - 1] <= varargin_1->data[iyLead - 2]) {
            emlrtErrorWithMessageIdR2018a(&b_st, &nb_emlrtRTEI,
              "Coder:toolbox:interp1_nonMonotonicX",
              "Coder:toolbox:interp1_nonMonotonicX", 0);
          }
        }

        c_st.site = &u_emlrtRSI;
        interp1Linear(&c_st, varargin_2, signals_t, r0, varargin_1);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  i0 = signals_position->size[1];
  iv6[0] = 1;
  iv6[1] = i0;
  emlrtSubAssignSizeCheckR2012b(&iv6[0], 2, &(*(int32_T (*)[2])r0->size)[0], 2,
    &b_emlrtECI, sp);
  iyLead = r0->size[1];
  for (i0 = 0; i0 < iyLead; i0++) {
    signals_position->data[1 + (i0 << 1)] = r0->data[i0];
  }

  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(sp);
  }

  emxFree_real_T(&varargin_2);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&r0);

  /*  compute velocity from the reference */
  if (2 > signals_t->size[1]) {
    i0 = 0;
    i2 = 0;
  } else {
    i0 = signals_t->size[1];
    if (2 > i0) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i0, &d_emlrtBCI, sp);
    }

    i0 = 1;
    i1 = signals_t->size[1];
    i2 = signals_t->size[1];
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &c_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &b_y1, 2, &m_emlrtRTEI, true);
  st.site = &j_emlrtRSI;
  nx = signals_position->size[1];
  if (signals_position->size[1] <= 1) {
    b_y1->size[0] = 2;
    b_y1->size[1] = 0;
  } else {
    nm1d2 = signals_position->size[1] - 1;
    i1 = b_y1->size[0] * b_y1->size[1];
    b_y1->size[0] = 2;
    b_y1->size[1] = nm1d2;
    emxEnsureCapacity_real_T(&st, b_y1, i1, &j_emlrtRTEI);
    nm1d2 = 2;
    iyLead = 0;
    ndbl = signals_position->data[0];
    b_st.site = &x_emlrtRSI;
    if (nx > 2147483646) {
      c_st.site = &o_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (j2 = 2; j2 <= nx; j2++) {
      tmp2 = ndbl;
      ndbl = signals_position->data[nm1d2];
      b_y1->data[iyLead] = signals_position->data[nm1d2] - tmp2;
      nm1d2 += 2;
      iyLead += 2;
    }

    nm1d2 = 3;
    iyLead = 1;
    ndbl = signals_position->data[1];
    b_st.site = &x_emlrtRSI;
    for (j2 = 2; j2 <= nx; j2++) {
      tmp2 = ndbl;
      ndbl = signals_position->data[nm1d2];
      b_y1->data[iyLead] = signals_position->data[nm1d2] - tmp2;
      nm1d2 += 2;
      iyLead += 2;
    }
  }

  i1 = b_y1->size[0] * b_y1->size[1];
  nm1d2 = b_y1->size[0] * b_y1->size[1];
  b_y1->size[0] = 2;
  emxEnsureCapacity_real_T(sp, b_y1, nm1d2, &j_emlrtRTEI);
  iyLead = i1 - 1;
  for (i1 = 0; i1 <= iyLead; i1++) {
    b_y1->data[i1] /= paramsSim_Ts;
  }

  iv6[0] = 2;
  iv6[1] = i2 - i0;
  emlrtSubAssignSizeCheckR2012b(&iv6[0], 2, &(*(int32_T (*)[2])b_y1->size)[0], 2,
    &emlrtECI, sp);
  iyLead = b_y1->size[1];
  for (i1 = 0; i1 < iyLead; i1++) {
    i2 = i1 << 1;
    nm1d2 = (i0 + i1) << 1;
    signals_velocity->data[nm1d2] = b_y1->data[i2];
    signals_velocity->data[1 + nm1d2] = b_y1->data[1 + i2];
  }

  emxFree_real_T(&b_y1);
  i0 = signals_velocity->size[1];
  if (1 > i0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &emlrtBCI, sp);
  }

  i0 = signals_velocity->size[1];
  if (2 > i0) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i0, &b_emlrtBCI, sp);
  }

  ndbl = signals_velocity->data[2];
  tmp2 = signals_velocity->data[3];
  signals_velocity->data[0] = ndbl;
  signals_velocity->data[1] = tmp2;

  /*  first value */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ZEN_generateDeterministicTrajectory.c) */
