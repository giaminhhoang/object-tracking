/*
 * _coder_ZEN_simulateSignals_api.c
 *
 * Code generation for function '_coder_ZEN_simulateSignals_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ZEN_simulateSignals.h"
#include "_coder_ZEN_simulateSignals_api.h"
#include "ZEN_simulateSignals_emxutil.h"
#include "ZEN_simulateSignals_data.h"

/* Variable Definitions */
static emlrtRTEInfo q_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_ZEN_simulateSignals_api",    /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[17]);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[5]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *paramsSim,
  const char_T *identifier, struct0_T *y);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct4_T u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static struct2_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *profile,
  const char_T *identifier);
static struct2_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static struct3_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[17]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[5]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[14] = { "algoName", "algoConfigName",
    "displayName", "useMex", "displayText", "displayFig", "Ts", "Npts", "t0",
    "tEnd", "duration", "controlRandom", "useRandomTrajectory",
    "loadedTrajectory" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 14, fieldNames, 0U, &dims);
  thisId.fIdentifier = "algoName";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "algoName")),
                     &thisId, y->algoName);
  thisId.fIdentifier = "algoConfigName";
  d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "algoConfigName")), &thisId, y->algoConfigName);
  thisId.fIdentifier = "displayName";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "displayName")), &thisId, y->displayName);
  thisId.fIdentifier = "useMex";
  y->useMex = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "useMex")), &thisId);
  thisId.fIdentifier = "displayText";
  y->displayText = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 4, "displayText")), &thisId);
  thisId.fIdentifier = "displayFig";
  y->displayFig = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    5, "displayFig")), &thisId);
  thisId.fIdentifier = "Ts";
  y->Ts = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "Ts")), &thisId);
  thisId.fIdentifier = "Npts";
  y->Npts = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7,
    "Npts")), &thisId);
  thisId.fIdentifier = "t0";
  y->t0 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8,
    "t0")), &thisId);
  thisId.fIdentifier = "tEnd";
  y->tEnd = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9,
    "tEnd")), &thisId);
  thisId.fIdentifier = "duration";
  y->duration = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    10, "duration")), &thisId);
  thisId.fIdentifier = "controlRandom";
  y->controlRandom = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 11, "controlRandom")), &thisId);
  thisId.fIdentifier = "useRandomTrajectory";
  y->useRandomTrajectory = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 12, "useRandomTrajectory")), &thisId);
  thisId.fIdentifier = "loadedTrajectory";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 13,
    "loadedTrajectory")), &thisId, &y->loadedTrajectory);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m7;
  real_T *pData;
  int32_T i5;
  int32_T i;
  y = NULL;
  m7 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m7);
  i5 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i5] = u->data[i];
    i5++;
  }

  emlrtAssign(&y, m7);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[17])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m8;
  real_T *pData;
  int32_T i6;
  int32_T i;
  int32_T i7;
  y = NULL;
  m8 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m8);
  i6 = 0;
  for (i = 0; i < u->size[1]; i++) {
    i7 = i << 1;
    pData[i6] = u->data[i7];
    i6++;
    pData[i6] = u->data[1 + i7];
    i6++;
  }

  emlrtAssign(&y, m8);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[5])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *paramsSim,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(paramsSim), &thisId, y);
  emlrtDestroyArray(&paramsSim);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct4_T u)
{
  const mxArray *y;
  emxArray_int8_T *b_u;
  static const char * sv0[4] = { "t", "position", "velocity", "sonar" };

  const mxArray *b_y;
  static const char * sv1[5] = { "newMeasurement", "range_perfect",
    "azimuth_perfect", "range", "azimuth" };

  int32_T i4;
  int32_T loop_ub;
  const mxArray *c_y;
  const mxArray *m6;
  int8_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int8_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, sv0));
  emlrtSetFieldR2017b(y, 0, "t", b_emlrt_marshallOut(u.t), 0);
  emlrtSetFieldR2017b(y, 0, "position", c_emlrt_marshallOut(u.position), 1);
  emlrtSetFieldR2017b(y, 0, "velocity", c_emlrt_marshallOut(u.velocity), 2);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 5, sv1));
  i4 = b_u->size[0] * b_u->size[1];
  b_u->size[0] = 1;
  b_u->size[1] = u.sonar.newMeasurement->size[1];
  emxEnsureCapacity_int8_T(sp, b_u, i4, (emlrtRTEInfo *)NULL);
  loop_ub = u.sonar.newMeasurement->size[0] * u.sonar.newMeasurement->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_u->data[i4] = u.sonar.newMeasurement->data[i4];
  }

  c_y = NULL;
  m6 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxINT8_CLASS,
    mxREAL);
  pData = (int8_T *)emlrtMxGetData(m6);
  i4 = 0;
  loop_ub = 0;
  emxFree_int8_T(&b_u);
  while (loop_ub < u.sonar.newMeasurement->size[1]) {
    pData[i4] = u.sonar.newMeasurement->data[loop_ub];
    i4++;
    loop_ub++;
  }

  emlrtAssign(&c_y, m6);
  emlrtSetFieldR2017b(b_y, 0, "newMeasurement", c_y, 0);
  emlrtSetFieldR2017b(b_y, 0, "range_perfect", b_emlrt_marshallOut
                      (u.sonar.range_perfect), 1);
  emlrtSetFieldR2017b(b_y, 0, "azimuth_perfect", b_emlrt_marshallOut
                      (u.sonar.azimuth_perfect), 2);
  emlrtSetFieldR2017b(b_y, 0, "range", b_emlrt_marshallOut(u.sonar.range), 3);
  emlrtSetFieldR2017b(b_y, 0, "azimuth", b_emlrt_marshallOut(u.sonar.azimuth), 4);
  emlrtSetFieldR2017b(y, 0, "sonar", b_y, 3);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "t", "position" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "t";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "t")),
                     &thisId, y->t);
  thisId.fIdentifier = "position";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "position")),
                     &thisId, y->position);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct2_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *profile,
  const char_T *identifier)
{
  struct2_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(profile), &thisId);
  emlrtDestroyArray(&profile);
  return y;
}

static struct2_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  struct2_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "motion", "sonar" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "motion";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "motion")),
                     &thisId);
  thisId.fIdentifier = "sonar";
  y.sonar = n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "sonar")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static struct3_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  struct3_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[3] = { "Ts", "range_std", "azimuth_std" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 3, fieldNames, 0U, &dims);
  thisId.fIdentifier = "Ts";
  y.Ts = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "Ts")),
    &thisId);
  thisId.fIdentifier = "range_std";
  y.range_std = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    1, "range_std")), &thisId);
  thisId.fIdentifier = "azimuth_std";
  y.azimuth_std = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    2, "azimuth_std")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[17])
{
  static const int32_T dims[2] = { 1, 17 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 17);
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[5])
{
  static const int32_T dims[2] = { 1, 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 5);
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv0[2] = { false, true };

  int32_T iv7[2];
  int32_T i8;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv7);
  i8 = ret->size[0] * ret->size[1];
  ret->size[0] = iv7[0];
  ret->size[1] = iv7[1];
  emxEnsureCapacity_real_T(sp, ret, i8, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 2, -1 };

  const boolean_T bv1[2] = { false, true };

  int32_T iv8[2];
  int32_T i9;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv8);
  i9 = ret->size[0] * ret->size[1];
  ret->size[0] = iv8[0];
  ret->size[1] = iv8[1];
  emxEnsureCapacity_real_T(sp, ret, i9, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = { 0, 0 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void ZEN_simulateSignals_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1])
{
  struct0_T paramsSim;
  struct4_T signals;
  struct2_T profile;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &paramsSim, &q_emlrtRTEI, true);
  emxInitStruct_struct4_T(&st, &signals, &q_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "paramsSim", &paramsSim);
  profile = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "profile");

  /* Invoke the target function */
  ZEN_simulateSignals(&st, &paramsSim, &profile, &signals);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, signals);
  emxFreeStruct_struct4_T(&signals);
  emxFreeStruct_struct0_T(&paramsSim);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_ZEN_simulateSignals_api.c) */
