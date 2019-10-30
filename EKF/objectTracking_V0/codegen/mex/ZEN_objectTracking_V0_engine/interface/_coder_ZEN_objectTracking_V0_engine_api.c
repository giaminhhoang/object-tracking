/*
 * _coder_ZEN_objectTracking_V0_engine_api.c
 *
 * Code generation for function '_coder_ZEN_objectTracking_V0_engine_api'
 *
 */

/* Include files */
#include "_coder_ZEN_objectTracking_V0_engine_api.h"
#include "ZEN_objectTracking_V0_engine.h"
#include "ZEN_objectTracking_V0_engine_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static const mxArray *b_emlrt_marshallOut(const int8_T u[500]);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *signals,
  const char_T *identifier, struct0_T *y);
static const mxArray *c_emlrt_marshallOut(const real_T u[1000]);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[500]);
static const mxArray *emlrt_marshallOut(const struct7_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[1000]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dataAlgo,
  const char_T *identifier, struct2_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct2_T *y);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static int8_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static struct3_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct4_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static struct5_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *paramsAlgo,
  const char_T *identifier, struct6_T *y);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct6_T *y);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[500]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[1000]);
static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static int8_T y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[1] = { 4 };

  real_T (*r)[4];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[4])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  ret[3] = (*r)[3];
  emlrtDestroyArray(&src);
}

static const mxArray *b_emlrt_marshallOut(const int8_T u[500])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 500 };

  int8_T *pData;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m = emlrtCreateNumericArray(2, iv, mxINT8_CLASS, mxREAL);
  pData = (int8_T *)emlrtMxGetData(m);
  i = 0;
  for (b_i = 0; b_i < 500; b_i++) {
    pData[i] = u[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16])
{
  static const int32_T dims[2] = { 4, 4 };

  real_T (*r)[16];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[16])emlrtMxGetData(src);
  memcpy(&ret[0], &(*r)[0], 16U * sizeof(real_T));
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *signals,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(signals), &thisId, y);
  emlrtDestroyArray(&signals);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[1000])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 2, 500 };

  real_T *pData;
  int32_T i;
  int32_T b_i;
  int32_T i1;
  y = NULL;
  m = emlrtCreateNumericArray(2, iv, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 500; b_i++) {
    i1 = b_i << 1;
    pData[i] = u[i1];
    i++;
    pData[i] = u[i1 + 1];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[2] = { 2, 2 };

  real_T (*r)[4];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[4])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  ret[3] = (*r)[3];
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "t", "position", "velocity", "sonar" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "t";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "t")),
                     &thisId, y->t);
  thisId.fIdentifier = "position";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "position")),
                     &thisId, y->position);
  thisId.fIdentifier = "velocity";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "velocity")),
                     &thisId, y->velocity);
  thisId.fIdentifier = "sonar";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "sonar")),
                     &thisId, &y->sonar);
  emlrtDestroyArray(&u);
}

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[1] = { 2 };

  real_T (*r)[2];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[2])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  emlrtDestroyArray(&src);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[500])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const struct7_T *u)
{
  const mxArray *y;
  static const char * sv[13] = { "t", "status", "usedInSolution", "position",
    "velocity", "positionStd", "velocityStd", "innovationRange",
    "innovationAzimuth", "innovationRangeNorm", "innovationAzimuthNorm",
    "innovationRangeStd", "innovationAzimuthStd" };

  const mxArray *b_y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 500 };

  real_T *pData;
  int32_T i;
  int32_T b_i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, sv));
  b_y = NULL;
  m = emlrtCreateNumericArray(2, iv, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 500; b_i++) {
    pData[i] = u->t[b_i];
    i++;
  }

  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "t", b_y, 0);
  emlrtSetFieldR2017b(y, 0, "status", b_emlrt_marshallOut(u->status), 1);
  emlrtSetFieldR2017b(y, 0, "usedInSolution", b_emlrt_marshallOut
                      (u->usedInSolution), 2);
  emlrtSetFieldR2017b(y, 0, "position", c_emlrt_marshallOut(u->position), 3);
  emlrtSetFieldR2017b(y, 0, "velocity", c_emlrt_marshallOut(u->velocity), 4);
  emlrtSetFieldR2017b(y, 0, "positionStd", c_emlrt_marshallOut(u->positionStd),
                      5);
  emlrtSetFieldR2017b(y, 0, "velocityStd", c_emlrt_marshallOut(u->velocityStd),
                      6);
  emlrtSetFieldR2017b(y, 0, "innovationRange", c_emlrt_marshallOut
                      (u->innovationRange), 7);
  emlrtSetFieldR2017b(y, 0, "innovationAzimuth", c_emlrt_marshallOut
                      (u->innovationAzimuth), 8);
  emlrtSetFieldR2017b(y, 0, "innovationRangeNorm", c_emlrt_marshallOut
                      (u->innovationRangeNorm), 9);
  emlrtSetFieldR2017b(y, 0, "innovationAzimuthNorm", c_emlrt_marshallOut
                      (u->innovationAzimuthNorm), 10);
  emlrtSetFieldR2017b(y, 0, "innovationRangeStd", c_emlrt_marshallOut
                      (u->innovationRangeStd), 11);
  emlrtSetFieldR2017b(y, 0, "innovationAzimuthStd", c_emlrt_marshallOut
                      (u->innovationAzimuthStd), 12);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[1000])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[5] = { "newMeasurement", "range_perfect",
    "azimuth_perfect", "range", "azimuth" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 5, fieldNames, 0U, &dims);
  thisId.fIdentifier = "newMeasurement";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0,
    "newMeasurement")), &thisId, y->newMeasurement);
  thisId.fIdentifier = "range_perfect";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "range_perfect")), &thisId, y->range_perfect);
  thisId.fIdentifier = "azimuth_perfect";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "azimuth_perfect")), &thisId, y->azimuth_perfect);
  thisId.fIdentifier = "range";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "range")),
                     &thisId, y->range);
  thisId.fIdentifier = "azimuth";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "azimuth")),
                     &thisId, y->azimuth);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dataAlgo,
  const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  i_emlrt_marshallIn(sp, emlrtAlias(dataAlgo), &thisId, y);
  emlrtDestroyArray(&dataAlgo);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[7] = { "t", "t0", "status", "usedInSolution",
    "sonar", "ekf", "outputs" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 7, fieldNames, 0U, &dims);
  thisId.fIdentifier = "t";
  y->t = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "t")),
    &thisId);
  thisId.fIdentifier = "t0";
  y->t0 = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "t0")), &thisId);
  thisId.fIdentifier = "status";
  y->status = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "status")), &thisId);
  thisId.fIdentifier = "usedInSolution";
  y->usedInSolution = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 3, "usedInSolution")), &thisId);
  thisId.fIdentifier = "sonar";
  y->sonar = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "sonar")), &thisId);
  thisId.fIdentifier = "ekf";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "ekf")),
                     &thisId, &y->ekf);
  thisId.fIdentifier = "outputs";
  y->outputs = q_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "outputs")), &thisId);
  emlrtDestroyArray(&u);
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = x_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int8_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int8_T y;
  y = y_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct3_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  struct3_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[3] = { "newMeasurement", "range", "azimuth" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 3, fieldNames, 0U, &dims);
  thisId.fIdentifier = "newMeasurement";
  y.newMeasurement = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "newMeasurement")), &thisId);
  thisId.fIdentifier = "range";
  y.range = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "range")), &thisId);
  thisId.fIdentifier = "azimuth";
  y.azimuth = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "azimuth")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct4_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[12] = { "Ts", "tLastCalled", "tLastUpdated",
    "Xk", "Pk", "Rk", "innovationRange", "innovationAzimuth",
    "innovationRangeNorm", "innovationAzimuthNorm", "innovationRangeStd",
    "innovationAzimuthStd" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 12, fieldNames, 0U, &dims);
  thisId.fIdentifier = "Ts";
  y->Ts = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0,
    "Ts")), &thisId);
  thisId.fIdentifier = "tLastCalled";
  y->tLastCalled = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 1, "tLastCalled")), &thisId);
  thisId.fIdentifier = "tLastUpdated";
  y->tLastUpdated = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 2, "tLastUpdated")), &thisId);
  thisId.fIdentifier = "Xk";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "Xk")),
                     &thisId, y->Xk);
  thisId.fIdentifier = "Pk";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "Pk")),
                     &thisId, y->Pk);
  thisId.fIdentifier = "Rk";
  p_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "Rk")),
                     &thisId, y->Rk);
  thisId.fIdentifier = "innovationRange";
  y->innovationRange = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 6, "innovationRange")), &thisId);
  thisId.fIdentifier = "innovationAzimuth";
  y->innovationAzimuth = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 7, "innovationAzimuth")), &thisId);
  thisId.fIdentifier = "innovationRangeNorm";
  y->innovationRangeNorm = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 8, "innovationRangeNorm")), &thisId);
  thisId.fIdentifier = "innovationAzimuthNorm";
  y->innovationAzimuthNorm = j_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 9, "innovationAzimuthNorm")), &thisId);
  thisId.fIdentifier = "innovationRangeStd";
  y->innovationRangeStd = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 10, "innovationRangeStd")), &thisId);
  thisId.fIdentifier = "innovationAzimuthStd";
  y->innovationAzimuthStd = j_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 11, "innovationAzimuthStd")), &thisId);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct5_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  struct5_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "position", "velocity", "positionStd",
    "velocityStd" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "position";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "position")),
                     &thisId, y.position);
  thisId.fIdentifier = "velocity";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "velocity")),
                     &thisId, y.velocity);
  thisId.fIdentifier = "positionStd";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "positionStd")), &thisId, y.positionStd);
  thisId.fIdentifier = "velocityStd";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "velocityStd")), &thisId, y.velocityStd);
  emlrtDestroyArray(&u);
  return y;
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *paramsAlgo,
  const char_T *identifier, struct6_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  t_emlrt_marshallIn(sp, emlrtAlias(paramsAlgo), &thisId, y);
  emlrtDestroyArray(&paramsAlgo);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct6_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[17] = { "algoVersion", "algoSubversion",
    "platformNum", "bitSonarRangeUsed", "bitSonarAzimuthUsed", "Ts",
    "maximalUpdatePeriod", "minimalUpdatePeriod", "position0", "velocity0",
    "positionStd0", "velocityStd0", "accelerationPSD", "sonarRangeStd",
    "sonarAzimuthStd", "sonarInnovationRangeThreshold",
    "sonarInnovationAzimuthThreshold" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 17, fieldNames, 0U, &dims);
  thisId.fIdentifier = "algoVersion";
  y->algoVersion = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "algoVersion")), &thisId);
  thisId.fIdentifier = "algoSubversion";
  y->algoSubversion = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 1, "algoSubversion")), &thisId);
  thisId.fIdentifier = "platformNum";
  y->platformNum = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 2, "platformNum")), &thisId);
  thisId.fIdentifier = "bitSonarRangeUsed";
  y->bitSonarRangeUsed = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 3, "bitSonarRangeUsed")), &thisId);
  thisId.fIdentifier = "bitSonarAzimuthUsed";
  y->bitSonarAzimuthUsed = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 4, "bitSonarAzimuthUsed")), &thisId);
  thisId.fIdentifier = "Ts";
  y->Ts = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "Ts")), &thisId);
  thisId.fIdentifier = "maximalUpdatePeriod";
  y->maximalUpdatePeriod = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 6, "maximalUpdatePeriod")), &thisId);
  thisId.fIdentifier = "minimalUpdatePeriod";
  y->minimalUpdatePeriod = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 7, "minimalUpdatePeriod")), &thisId);
  thisId.fIdentifier = "position0";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8, "position0")),
                     &thisId, y->position0);
  thisId.fIdentifier = "velocity0";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9, "velocity0")),
                     &thisId, y->velocity0);
  thisId.fIdentifier = "positionStd0";
  y->positionStd0 = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 10, "positionStd0")), &thisId);
  thisId.fIdentifier = "velocityStd0";
  y->velocityStd0 = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 11, "velocityStd0")), &thisId);
  thisId.fIdentifier = "accelerationPSD";
  y->accelerationPSD = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 12, "accelerationPSD")), &thisId);
  thisId.fIdentifier = "sonarRangeStd";
  y->sonarRangeStd = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 13, "sonarRangeStd")), &thisId);
  thisId.fIdentifier = "sonarAzimuthStd";
  y->sonarAzimuthStd = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 14, "sonarAzimuthStd")), &thisId);
  thisId.fIdentifier = "sonarInnovationRangeThreshold";
  y->sonarInnovationRangeThreshold = j_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 15, "sonarInnovationRangeThreshold")),
    &thisId);
  thisId.fIdentifier = "sonarInnovationAzimuthThreshold";
  y->sonarInnovationAzimuthThreshold = j_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 16, "sonarInnovationAzimuthThreshold")),
    &thisId);
  emlrtDestroyArray(&u);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[500])
{
  static const int32_T dims[2] = { 1, 500 };

  real_T (*r)[500];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[500])emlrtMxGetData(src);
  memcpy(&ret[0], &(*r)[0], 500U * sizeof(real_T));
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[1000])
{
  static const int32_T dims[2] = { 2, 500 };

  real_T (*r)[1000];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[1000])emlrtMxGetData(src);
  memcpy(&ret[0], &(*r)[0], 1000U * sizeof(real_T));
  emlrtDestroyArray(&src);
}

static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int8_T y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  int8_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int8", false, 0U, &dims);
  ret = *(int8_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void ZEN_objectTracking_V0_engine_api(const mxArray * const prhs[3], int32_T
  nlhs, const mxArray *plhs[1])
{
  struct0_T signals;
  struct2_T dataAlgo;
  struct6_T paramsAlgo;
  struct7_T resultsAlgo;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "signals", &signals);
  h_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "dataAlgo", &dataAlgo);
  s_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "paramsAlgo", &paramsAlgo);

  /* Invoke the target function */
  ZEN_objectTracking_V0_engine(&st, &signals, &dataAlgo, &paramsAlgo,
    &resultsAlgo);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&resultsAlgo);
}

/* End of code generation (_coder_ZEN_objectTracking_V0_engine_api.c) */
