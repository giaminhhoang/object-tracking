/*
 * ZEN_generateSonar.c
 *
 * Code generation for function 'ZEN_generateSonar'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "ZEN_generateSonar.h"
#include "ZEN_simulateSignals_emxutil.h"
#include "randn.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "power.h"
#include "ZEN_simulateSignals_data.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 290, /* lineNo */
  "eml_float_colon",                   /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 23,  /* lineNo */
  "ZEN_generateSonar",                 /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 24, /* lineNo */
  "ZEN_generateSonar",                 /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 29, /* lineNo */
  "ZEN_generateSonar",                 /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 33, /* lineNo */
  "ZEN_generateSonar",                 /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 34, /* lineNo */
  "ZEN_generateSonar",                 /* fcnName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 15, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 31, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 12, /* lineNo */
  "atan2",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 201,/* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 10, /* lineNo */
  "round",                             /* fcnName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\round.m"/* pathName */
};

static emlrtRTEInfo n_emlrtRTEI = { 17,/* lineNo */
  20,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 23,/* lineNo */
  36,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 23,/* lineNo */
  63,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 24,/* lineNo */
  39,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 24,/* lineNo */
  62,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 45,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "atan2",                             /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 65,/* lineNo */
  27,                                  /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 24,/* lineNo */
  1,                                   /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 29,/* lineNo */
  14,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 30,/* lineNo */
  30,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 33,/* lineNo */
  53,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 34,/* lineNo */
  57,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 29,/* lineNo */
  1,                                   /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  33,                                  /* colNo */
  "signals.t",                         /* aName */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  23,                                  /* lineNo */
  36,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  33,                                  /* lineNo */
  23,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  34,                                  /* lineNo */
  25,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 12,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 18,/* lineNo */
  23,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\Polyspace\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  7,                                   /* colNo */
  "signals.t",                         /* aName */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 30,    /* lineNo */
  30,                                  /* colNo */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  30,                                  /* colNo */
  "signals.sonar.newMeasurement",      /* aName */
  "ZEN_generateSonar",                 /* fName */
  "C:\\Users\\minh\\Documents\\my work\\object-tracking\\SIMULATOR\\ZEN_generateSonar.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void ZEN_generateSonar(const emlrtStack *sp, struct4_T *signals, real_T
  profile_sonar_Ts, real_T profile_sonar_range_std, real_T
  profile_sonar_azimuth_std)
{
  emxArray_real_T *b_signals;
  int32_T i10;
  int32_T nx;
  real_T Ts;
  int32_T loop_ub;
  emxArray_real_T *Inew;
  emxArray_real_T *y;
  int32_T b_Inew[2];
  int32_T b_y[2];
  boolean_T overflow;
  int32_T k;
  emxArray_real_T *x;
  emxArray_real_T *c_signals;
  emxArray_real_T *z1;
  real_T d;
  real_T apnd;
  real_T cdiff;
  uint32_T absb;
  emxArray_int32_T *r1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_signals, 2, &r_emlrtRTEI, true);

  /*  **************************************************************** */
  /*  */
  /*            Description : generate sonar signals */
  /*  */
  /*            Author : G.M. Hoang */
  /*  */
  /*            Rev. 0 : baseline */
  /*  */
  /*            Inputs :  */
  /*                        - signals : struct containing simulation signals */
  /*                        - profile : struct containging sensors parameters */
  /*            Outputs :  */
  /*                        - signals : updated struct with sensors signals */
  /*  */
  /*  ************************************************************* */
  i10 = signals->t->size[1];
  if (1 > i10) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i10, &h_emlrtBCI, sp);
  }

  i10 = signals->t->size[1];
  nx = signals->t->size[1];
  if ((nx < 1) || (nx > i10)) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i10, &i_emlrtBCI, sp);
  }

  Ts = (signals->t->data[nx - 1] - signals->t->data[0]) / ((real_T)signals->
    t->size[1] - 1.0);

  /*  build the reference (perfect signal) */
  loop_ub = signals->position->size[1];
  i10 = b_signals->size[0] * b_signals->size[1];
  b_signals->size[0] = 1;
  b_signals->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_signals, i10, &r_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_signals->data[i10] = signals->position->data[i10 << 1];
  }

  emxInit_real_T(sp, &Inew, 2, &hb_emlrtRTEI, true);
  st.site = &y_emlrtRSI;
  power(&st, b_signals, Inew);
  loop_ub = signals->position->size[1];
  i10 = b_signals->size[0] * b_signals->size[1];
  b_signals->size[0] = 1;
  b_signals->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_signals, i10, &s_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_signals->data[i10] = signals->position->data[1 + (i10 << 1)];
  }

  emxInit_real_T(sp, &y, 2, &u_emlrtRTEI, true);
  st.site = &y_emlrtRSI;
  power(&st, b_signals, y);
  b_Inew[0] = Inew->size[0];
  b_Inew[1] = Inew->size[1];
  b_y[0] = y->size[0];
  b_y[1] = y->size[1];
  if ((b_Inew[0] != b_y[0]) || (b_Inew[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Inew[0], &b_y[0], &c_emlrtECI, sp);
  }

  st.site = &y_emlrtRSI;
  i10 = signals->sonar.range_perfect->size[0] * signals->
    sonar.range_perfect->size[1];
  signals->sonar.range_perfect->size[0] = 1;
  signals->sonar.range_perfect->size[1] = Inew->size[1];
  emxEnsureCapacity_real_T(&st, signals->sonar.range_perfect, i10, &t_emlrtRTEI);
  loop_ub = Inew->size[0] * Inew->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    signals->sonar.range_perfect->data[i10] = Inew->data[i10] + y->data[i10];
  }

  overflow = false;
  i10 = signals->sonar.range_perfect->size[1];
  for (k = 0; k < i10; k++) {
    if (overflow || (signals->sonar.range_perfect->data[k] < 0.0)) {
      overflow = true;
    } else {
      overflow = false;
    }
  }

  if (overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &pb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  b_st.site = &ib_emlrtRSI;
  nx = signals->sonar.range_perfect->size[1];
  c_st.site = &jb_emlrtRSI;
  overflow = ((1 <= signals->sonar.range_perfect->size[1]) &&
              (signals->sonar.range_perfect->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &o_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < nx; k++) {
    signals->sonar.range_perfect->data[k] = muDoubleScalarSqrt
      (signals->sonar.range_perfect->data[k]);
  }

  st.site = &ab_emlrtRSI;
  loop_ub = signals->position->size[1];
  i10 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, y, i10, &u_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    y->data[i10] = signals->position->data[1 + (i10 << 1)];
  }

  emxInit_real_T(&st, &x, 2, &v_emlrtRTEI, true);
  loop_ub = signals->position->size[1];
  i10 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, x, i10, &v_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    x->data[i10] = signals->position->data[i10 << 1];
  }

  b_st.site = &kb_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  i10 = signals->position->size[1];
  nx = Inew->size[0] * Inew->size[1];
  Inew->size[0] = 1;
  Inew->size[1] = i10;
  emxEnsureCapacity_real_T(&c_st, Inew, nx, &w_emlrtRTEI);
  loop_ub = signals->position->size[1];
  nx = b_signals->size[0] * b_signals->size[1];
  b_signals->size[0] = 1;
  b_signals->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&c_st, b_signals, nx, &u_emlrtRTEI);
  for (nx = 0; nx < loop_ub; nx++) {
    b_signals->data[nx] = signals->position->data[1 + (nx << 1)];
  }

  emxInit_real_T(&c_st, &c_signals, 2, &v_emlrtRTEI, true);
  loop_ub = signals->position->size[1];
  nx = c_signals->size[0] * c_signals->size[1];
  c_signals->size[0] = 1;
  c_signals->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&c_st, c_signals, nx, &v_emlrtRTEI);
  for (nx = 0; nx < loop_ub; nx++) {
    c_signals->data[nx] = signals->position->data[nx << 1];
  }

  if (!dimagree(Inew, b_signals, c_signals)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &qb_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxFree_real_T(&c_signals);
  emxFree_real_T(&b_signals);
  emxInit_real_T(&c_st, &z1, 2, &y_emlrtRTEI, true);
  nx = signals->sonar.azimuth_perfect->size[0] * signals->
    sonar.azimuth_perfect->size[1];
  signals->sonar.azimuth_perfect->size[0] = 1;
  signals->sonar.azimuth_perfect->size[1] = i10;
  emxEnsureCapacity_real_T(&b_st, signals->sonar.azimuth_perfect, nx,
    &x_emlrtRTEI);
  c_st.site = &gb_emlrtRSI;
  nx = z1->size[0] * z1->size[1];
  z1->size[0] = 1;
  z1->size[1] = signals->sonar.azimuth_perfect->size[1];
  emxEnsureCapacity_real_T(&c_st, z1, nx, &y_emlrtRTEI);
  loop_ub = signals->sonar.azimuth_perfect->size[0] *
    signals->sonar.azimuth_perfect->size[1];
  for (nx = 0; nx < loop_ub; nx++) {
    z1->data[nx] = signals->sonar.azimuth_perfect->data[nx];
  }

  d_st.site = &mb_emlrtRSI;
  overflow = ((1 <= signals->sonar.azimuth_perfect->size[1]) &&
              (signals->sonar.azimuth_perfect->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &o_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k < i10; k++) {
    z1->data[k] = muDoubleScalarAtan2(y->data[k], x->data[k]);
  }

  emxFree_real_T(&x);
  i10 = signals->sonar.azimuth_perfect->size[0] * signals->
    sonar.azimuth_perfect->size[1];
  signals->sonar.azimuth_perfect->size[0] = 1;
  signals->sonar.azimuth_perfect->size[1] = z1->size[1];
  emxEnsureCapacity_real_T(&b_st, signals->sonar.azimuth_perfect, i10,
    &ab_emlrtRTEI);
  loop_ub = z1->size[0] * z1->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    signals->sonar.azimuth_perfect->data[i10] = z1->data[i10];
  }

  /*  ************************************************************************ */
  /*  new measurement flag */
  /*  compute update measurement flags */
  st.site = &bb_emlrtRSI;
  d = profile_sonar_Ts / Ts;
  if (muDoubleScalarIsNaN(d)) {
    i10 = Inew->size[0] * Inew->size[1];
    Inew->size[0] = 1;
    Inew->size[1] = 1;
    emxEnsureCapacity_real_T(&st, Inew, i10, &bb_emlrtRTEI);
    Inew->data[0] = rtNaN;
  } else if ((d == 0.0) || ((1 < signals->t->size[1]) && (d < 0.0))) {
    Inew->size[0] = 1;
    Inew->size[1] = 0;
  } else if (muDoubleScalarIsInf(d)) {
    i10 = Inew->size[0] * Inew->size[1];
    Inew->size[0] = 1;
    Inew->size[1] = 1;
    emxEnsureCapacity_real_T(&st, Inew, i10, &bb_emlrtRTEI);
    Inew->data[0] = 1.0;
  } else if (muDoubleScalarFloor(d) == d) {
    i10 = signals->t->size[1];
    nx = Inew->size[0] * Inew->size[1];
    Inew->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(((real_T)i10 - 1.0) / d);
    Inew->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, Inew, nx, &bb_emlrtRTEI);
    for (i10 = 0; i10 <= loop_ub; i10++) {
      Inew->data[i10] = 1.0 + d * (real_T)i10;
    }
  } else {
    b_st.site = &l_emlrtRSI;
    Ts = muDoubleScalarFloor(((real_T)signals->t->size[1] - 1.0) / d + 0.5);
    apnd = 1.0 + Ts * d;
    if (d > 0.0) {
      cdiff = apnd - (real_T)signals->t->size[1];
    } else {
      cdiff = (real_T)signals->t->size[1] - apnd;
    }

    absb = (uint32_T)muDoubleScalarAbs(signals->t->size[1]);
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)
        muIntScalarMax_uint32(1U, absb)) {
      Ts++;
      apnd = signals->t->size[1];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (Ts - 1.0) * d;
    } else {
      Ts++;
    }

    if (Ts >= 0.0) {
      loop_ub = (int32_T)Ts;
    } else {
      loop_ub = 0;
    }

    c_st.site = &m_emlrtRSI;
    if (Ts > 2.147483647E+9) {
      emlrtErrorWithMessageIdR2018a(&c_st, &jb_emlrtRTEI,
        "Coder:MATLAB:pmaxsize", "Coder:MATLAB:pmaxsize", 0);
    }

    i10 = Inew->size[0] * Inew->size[1];
    Inew->size[0] = 1;
    Inew->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&b_st, Inew, i10, &g_emlrtRTEI);
    if (loop_ub > 0) {
      Inew->data[0] = 1.0;
      if (loop_ub > 1) {
        Inew->data[loop_ub - 1] = apnd;
        nx = (loop_ub - 1) / 2;
        c_st.site = &n_emlrtRSI;
        for (k = 0; k <= nx - 2; k++) {
          Ts = (1.0 + (real_T)k) * d;
          Inew->data[1 + k] = 1.0 + Ts;
          Inew->data[(loop_ub - k) - 2] = apnd - Ts;
        }

        if (nx << 1 == loop_ub - 1) {
          Inew->data[nx] = (1.0 + apnd) / 2.0;
        } else {
          Ts = (real_T)nx * d;
          Inew->data[nx] = 1.0 + Ts;
          Inew->data[nx + 1] = apnd - Ts;
        }
      }
    }
  }

  st.site = &bb_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  nx = Inew->size[1];
  c_st.site = &jb_emlrtRSI;
  overflow = ((1 <= Inew->size[1]) && (Inew->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &o_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < nx; k++) {
    Inew->data[k] = muDoubleScalarRound(Inew->data[k]);
  }

  emxInit_int32_T(&b_st, &r1, 2, &n_emlrtRTEI, true);
  i10 = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = Inew->size[1];
  emxEnsureCapacity_int32_T(sp, r1, i10, &cb_emlrtRTEI);
  k = signals->sonar.newMeasurement->size[1];
  loop_ub = Inew->size[0] * Inew->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ts = Inew->data[i10];
    if (Ts != (int32_T)muDoubleScalarFloor(Ts)) {
      emlrtIntegerCheckR2012b(Ts, &emlrtDCI, sp);
    }

    nx = (int32_T)Ts;
    if ((nx < 1) || (nx > k)) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, k, &j_emlrtBCI, sp);
    }

    r1->data[i10] = nx;
  }

  emxFree_real_T(&Inew);
  loop_ub = r1->size[0] * r1->size[1] - 1;
  for (i10 = 0; i10 <= loop_ub; i10++) {
    signals->sonar.newMeasurement->data[r1->data[i10] - 1] = 1;
  }

  emxFree_int32_T(&r1);

  /*  generate random measuements */
  st.site = &cb_emlrtRSI;
  randn(&st, signals->t->size[1], y);
  i10 = y->size[0] * y->size[1];
  nx = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, y, nx, &db_emlrtRTEI);
  loop_ub = i10 - 1;
  for (i10 = 0; i10 <= loop_ub; i10++) {
    y->data[i10] *= profile_sonar_range_std;
  }

  b_Inew[0] = signals->sonar.range_perfect->size[0];
  b_Inew[1] = signals->sonar.range_perfect->size[1];
  b_y[0] = y->size[0];
  b_y[1] = y->size[1];
  if ((b_Inew[0] != b_y[0]) || (b_Inew[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Inew[0], &b_y[0], &d_emlrtECI, sp);
  }

  i10 = signals->sonar.range->size[0] * signals->sonar.range->size[1];
  signals->sonar.range->size[0] = 1;
  signals->sonar.range->size[1] = signals->sonar.range_perfect->size[1];
  emxEnsureCapacity_real_T(sp, signals->sonar.range, i10, &eb_emlrtRTEI);
  loop_ub = signals->sonar.range_perfect->size[0] * signals->
    sonar.range_perfect->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    signals->sonar.range->data[i10] = signals->sonar.range_perfect->data[i10] +
      y->data[i10];
  }

  st.site = &db_emlrtRSI;
  randn(&st, signals->t->size[1], y);
  i10 = y->size[0] * y->size[1];
  nx = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, y, nx, &fb_emlrtRTEI);
  loop_ub = i10 - 1;
  for (i10 = 0; i10 <= loop_ub; i10++) {
    y->data[i10] *= profile_sonar_azimuth_std;
  }

  b_Inew[0] = z1->size[0];
  b_Inew[1] = z1->size[1];
  b_y[0] = y->size[0];
  b_y[1] = y->size[1];
  if ((b_Inew[0] != b_y[0]) || (b_Inew[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Inew[0], &b_y[0], &e_emlrtECI, sp);
  }

  i10 = signals->sonar.azimuth->size[0] * signals->sonar.azimuth->size[1];
  signals->sonar.azimuth->size[0] = 1;
  signals->sonar.azimuth->size[1] = z1->size[1];
  emxEnsureCapacity_real_T(sp, signals->sonar.azimuth, i10, &gb_emlrtRTEI);
  loop_ub = z1->size[0] * z1->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    signals->sonar.azimuth->data[i10] = z1->data[i10] + y->data[i10];
  }

  emxFree_real_T(&z1);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ZEN_generateSonar.c) */
