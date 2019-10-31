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
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static const mxArray *b_emlrt_marshallOut(const real_T u[500]);
static int8_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *signals,
  const char_T *identifier, struct0_T *y);
static const mxArray *c_emlrt_marshallOut(const int8_T u[500]);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static const mxArray *d_emlrt_marshallOut(const real_T u[1000]);
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[500]);
static const mxArray *e_emlrt_marshallOut(const struct2_T *u);
static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static const mxArray *emlrt_marshallOut(const struct7_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[1000]);
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, int8_T y[500]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dataAlgo,
  const char_T *identifier, struct2_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct2_T *y);
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static int8_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static struct3_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct4_T *y);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static struct5_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *paramsAlgo,
  const char_T *identifier, struct6_T *y);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct6_T *y);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[500]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[1000]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, int8_T ret[500]);

/* Function Definitions */
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[500])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 500 };

  real_T *pData;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m = emlrtCreateNumericArray(2, iv, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 500; b_i++) {
    pData[i] = u[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static int8_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int8_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int8", false, 0U, &dims);
  ret = *(int8_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
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

static const mxArray *c_emlrt_marshallOut(const int8_T u[500])
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

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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

static const mxArray *d_emlrt_marshallOut(const real_T u[1000])
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

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[16])
{
  static const int32_T dims[2] = { 4, 4 };

  real_T (*r)[16];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[16])emlrtMxGetData(src);
  memcpy(&ret[0], &(*r)[0], 16U * sizeof(real_T));
  emlrtDestroyArray(&src);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[500])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *e_emlrt_marshallOut(const struct2_T *u)
{
  const mxArray *y;
  static const char * sv[7] = { "t", "t0", "status", "usedInSolution", "sonar",
    "ekf", "outputs" };

  const mxArray *b_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  static const char * sv1[3] = { "newMeasurement", "range", "azimuth" };

  const mxArray *c_y;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  static const char * sv2[12] = { "Ts", "tLastCalled", "tLastUpdated", "Xk",
    "Pk", "Rk", "innovationRange", "innovationAzimuth", "innovationRange_norm",
    "innovationAzimuth_norm", "innovationRange_std", "innovationAzimuth_std" };

  const mxArray *m7;
  const mxArray *m8;
  const mxArray *m9;
  const mxArray *m10;
  static const int32_T iv[1] = { 4 };

  real_T *pData;
  const mxArray *m11;
  static const int32_T iv1[2] = { 4, 4 };

  real_T *b_pData;
  int32_T i;
  int32_T b_i;
  int32_T i1;
  const mxArray *m12;
  static const int32_T iv2[2] = { 2, 2 };

  real_T *c_pData;
  const mxArray *m13;
  const mxArray *m14;
  const mxArray *m15;
  const mxArray *m16;
  const mxArray *m17;
  const mxArray *m18;
  static const char * sv3[4] = { "position", "velocity", "position_std",
    "velocity_std" };

  const mxArray *m19;
  static const int32_T iv3[1] = { 2 };

  real_T *d_pData;
  const mxArray *m20;
  static const int32_T iv4[1] = { 2 };

  real_T *e_pData;
  const mxArray *m21;
  static const int32_T iv5[1] = { 2 };

  real_T *f_pData;
  const mxArray *m22;
  static const int32_T iv6[1] = { 2 };

  real_T *g_pData;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, sv));
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u->t);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "t", b_y, 0);
  b_y = NULL;
  m1 = emlrtCreateDoubleScalar(u->t0);
  emlrtAssign(&b_y, m1);
  emlrtSetFieldR2017b(y, 0, "t0", b_y, 1);
  b_y = NULL;
  m2 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  *(int8_T *)emlrtMxGetData(m2) = u->status;
  emlrtAssign(&b_y, m2);
  emlrtSetFieldR2017b(y, 0, "status", b_y, 2);
  b_y = NULL;
  m3 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  *(int8_T *)emlrtMxGetData(m3) = u->usedInSolution;
  emlrtAssign(&b_y, m3);
  emlrtSetFieldR2017b(y, 0, "usedInSolution", b_y, 3);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 3, sv1));
  c_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  *(int8_T *)emlrtMxGetData(m4) = u->sonar.newMeasurement;
  emlrtAssign(&c_y, m4);
  emlrtSetFieldR2017b(b_y, 0, "newMeasurement", c_y, 0);
  c_y = NULL;
  m5 = emlrtCreateDoubleScalar(u->sonar.range);
  emlrtAssign(&c_y, m5);
  emlrtSetFieldR2017b(b_y, 0, "range", c_y, 1);
  c_y = NULL;
  m6 = emlrtCreateDoubleScalar(u->sonar.azimuth);
  emlrtAssign(&c_y, m6);
  emlrtSetFieldR2017b(b_y, 0, "azimuth", c_y, 2);
  emlrtSetFieldR2017b(y, 0, "sonar", b_y, 4);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 12, sv2));
  c_y = NULL;
  m7 = emlrtCreateDoubleScalar(u->ekf.Ts);
  emlrtAssign(&c_y, m7);
  emlrtSetFieldR2017b(b_y, 0, "Ts", c_y, 0);
  c_y = NULL;
  m8 = emlrtCreateDoubleScalar(u->ekf.tLastCalled);
  emlrtAssign(&c_y, m8);
  emlrtSetFieldR2017b(b_y, 0, "tLastCalled", c_y, 1);
  c_y = NULL;
  m9 = emlrtCreateDoubleScalar(u->ekf.tLastUpdated);
  emlrtAssign(&c_y, m9);
  emlrtSetFieldR2017b(b_y, 0, "tLastUpdated", c_y, 2);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m10);
  pData[0] = u->ekf.Xk[0];
  pData[1] = u->ekf.Xk[1];
  pData[2] = u->ekf.Xk[2];
  pData[3] = u->ekf.Xk[3];
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Xk", c_y, 3);
  c_y = NULL;
  m11 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  b_pData = emlrtMxGetPr(m11);
  i = 0;
  for (b_i = 0; b_i < 4; b_i++) {
    i1 = b_i << 2;
    b_pData[i] = u->ekf.Pk[i1];
    i++;
    b_pData[i] = u->ekf.Pk[i1 + 1];
    i++;
    b_pData[i] = u->ekf.Pk[i1 + 2];
    i++;
    b_pData[i] = u->ekf.Pk[i1 + 3];
    i++;
  }

  emlrtAssign(&c_y, m11);
  emlrtSetFieldR2017b(b_y, 0, "Pk", c_y, 4);
  c_y = NULL;
  m12 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  c_pData = emlrtMxGetPr(m12);
  c_pData[0] = u->ekf.Rk[0];
  c_pData[1] = u->ekf.Rk[1];
  c_pData[2] = u->ekf.Rk[2];
  c_pData[3] = u->ekf.Rk[3];
  emlrtAssign(&c_y, m12);
  emlrtSetFieldR2017b(b_y, 0, "Rk", c_y, 5);
  c_y = NULL;
  m13 = emlrtCreateDoubleScalar(u->ekf.innovationRange);
  emlrtAssign(&c_y, m13);
  emlrtSetFieldR2017b(b_y, 0, "innovationRange", c_y, 6);
  c_y = NULL;
  m14 = emlrtCreateDoubleScalar(u->ekf.innovationAzimuth);
  emlrtAssign(&c_y, m14);
  emlrtSetFieldR2017b(b_y, 0, "innovationAzimuth", c_y, 7);
  c_y = NULL;
  m15 = emlrtCreateDoubleScalar(u->ekf.innovationRange_norm);
  emlrtAssign(&c_y, m15);
  emlrtSetFieldR2017b(b_y, 0, "innovationRange_norm", c_y, 8);
  c_y = NULL;
  m16 = emlrtCreateDoubleScalar(u->ekf.innovationAzimuth_norm);
  emlrtAssign(&c_y, m16);
  emlrtSetFieldR2017b(b_y, 0, "innovationAzimuth_norm", c_y, 9);
  c_y = NULL;
  m17 = emlrtCreateDoubleScalar(u->ekf.innovationRange_std);
  emlrtAssign(&c_y, m17);
  emlrtSetFieldR2017b(b_y, 0, "innovationRange_std", c_y, 10);
  c_y = NULL;
  m18 = emlrtCreateDoubleScalar(u->ekf.innovationAzimuth_std);
  emlrtAssign(&c_y, m18);
  emlrtSetFieldR2017b(b_y, 0, "innovationAzimuth_std", c_y, 11);
  emlrtSetFieldR2017b(y, 0, "ekf", b_y, 5);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 4, sv3));
  c_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv3, mxDOUBLE_CLASS, mxREAL);
  d_pData = emlrtMxGetPr(m19);
  d_pData[0] = u->outputs.position[0];
  d_pData[1] = u->outputs.position[1];
  emlrtAssign(&c_y, m19);
  emlrtSetFieldR2017b(b_y, 0, "position", c_y, 0);
  c_y = NULL;
  m20 = emlrtCreateNumericArray(1, iv4, mxDOUBLE_CLASS, mxREAL);
  e_pData = emlrtMxGetPr(m20);
  e_pData[0] = u->outputs.velocity[0];
  e_pData[1] = u->outputs.velocity[1];
  emlrtAssign(&c_y, m20);
  emlrtSetFieldR2017b(b_y, 0, "velocity", c_y, 1);
  c_y = NULL;
  m21 = emlrtCreateNumericArray(1, iv5, mxDOUBLE_CLASS, mxREAL);
  f_pData = emlrtMxGetPr(m21);
  f_pData[0] = u->outputs.position_std[0];
  f_pData[1] = u->outputs.position_std[1];
  emlrtAssign(&c_y, m21);
  emlrtSetFieldR2017b(b_y, 0, "position_std", c_y, 2);
  c_y = NULL;
  m22 = emlrtCreateNumericArray(1, iv6, mxDOUBLE_CLASS, mxREAL);
  g_pData = emlrtMxGetPr(m22);
  g_pData[0] = u->outputs.velocity_std[0];
  g_pData[1] = u->outputs.velocity_std[1];
  emlrtAssign(&c_y, m22);
  emlrtSetFieldR2017b(b_y, 0, "velocity_std", c_y, 3);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 6);
  return y;
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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

static const mxArray *emlrt_marshallOut(const struct7_T *u)
{
  const mxArray *y;
  static const char * sv[13] = { "t", "status", "usedInSolution", "position",
    "velocity", "position_std", "velocity_std", "innovationRange",
    "innovationAzimuth", "innovationRange_norm", "innovationAzimuth_norm",
    "innovationRange_std", "innovationAzimuth_std" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, sv));
  emlrtSetFieldR2017b(y, 0, "t", b_emlrt_marshallOut(u->t), 0);
  emlrtSetFieldR2017b(y, 0, "status", c_emlrt_marshallOut(u->status), 1);
  emlrtSetFieldR2017b(y, 0, "usedInSolution", c_emlrt_marshallOut
                      (u->usedInSolution), 2);
  emlrtSetFieldR2017b(y, 0, "position", d_emlrt_marshallOut(u->position), 3);
  emlrtSetFieldR2017b(y, 0, "velocity", d_emlrt_marshallOut(u->velocity), 4);
  emlrtSetFieldR2017b(y, 0, "position_std", d_emlrt_marshallOut(u->position_std),
                      5);
  emlrtSetFieldR2017b(y, 0, "velocity_std", d_emlrt_marshallOut(u->velocity_std),
                      6);
  emlrtSetFieldR2017b(y, 0, "innovationRange", b_emlrt_marshallOut
                      (u->innovationRange), 7);
  emlrtSetFieldR2017b(y, 0, "innovationAzimuth", b_emlrt_marshallOut
                      (u->innovationAzimuth), 8);
  emlrtSetFieldR2017b(y, 0, "innovationRange_norm", b_emlrt_marshallOut
                      (u->innovationRange_norm), 9);
  emlrtSetFieldR2017b(y, 0, "innovationAzimuth_norm", b_emlrt_marshallOut
                      (u->innovationAzimuth_norm), 10);
  emlrtSetFieldR2017b(y, 0, "innovationRange_std", b_emlrt_marshallOut
                      (u->innovationRange_std), 11);
  emlrtSetFieldR2017b(y, 0, "innovationAzimuth_std", b_emlrt_marshallOut
                      (u->innovationAzimuth_std), 12);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[1000])
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0,
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

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, int8_T y[500])
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dataAlgo,
  const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(dataAlgo), &thisId, y);
  emlrtDestroyArray(&dataAlgo);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
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
  y->t = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "t")),
    &thisId);
  thisId.fIdentifier = "t0";
  y->t0 = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "t0")), &thisId);
  thisId.fIdentifier = "status";
  y->status = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "status")), &thisId);
  thisId.fIdentifier = "usedInSolution";
  y->usedInSolution = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 3, "usedInSolution")), &thisId);
  thisId.fIdentifier = "sonar";
  y->sonar = m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "sonar")), &thisId);
  thisId.fIdentifier = "ekf";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "ekf")),
                     &thisId, &y->ekf);
  thisId.fIdentifier = "outputs";
  y->outputs = r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "outputs")), &thisId);
  emlrtDestroyArray(&u);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int8_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int8_T y;
  y = bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct3_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
  y.newMeasurement = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "newMeasurement")), &thisId);
  thisId.fIdentifier = "range";
  y.range = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "range")), &thisId);
  thisId.fIdentifier = "azimuth";
  y.azimuth = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "azimuth")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct4_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[12] = { "Ts", "tLastCalled", "tLastUpdated",
    "Xk", "Pk", "Rk", "innovationRange", "innovationAzimuth",
    "innovationRange_norm", "innovationAzimuth_norm", "innovationRange_std",
    "innovationAzimuth_std" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 12, fieldNames, 0U, &dims);
  thisId.fIdentifier = "Ts";
  y->Ts = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0,
    "Ts")), &thisId);
  thisId.fIdentifier = "tLastCalled";
  y->tLastCalled = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 1, "tLastCalled")), &thisId);
  thisId.fIdentifier = "tLastUpdated";
  y->tLastUpdated = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 2, "tLastUpdated")), &thisId);
  thisId.fIdentifier = "Xk";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "Xk")),
                     &thisId, y->Xk);
  thisId.fIdentifier = "Pk";
  p_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "Pk")),
                     &thisId, y->Pk);
  thisId.fIdentifier = "Rk";
  q_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "Rk")),
                     &thisId, y->Rk);
  thisId.fIdentifier = "innovationRange";
  y->innovationRange = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 6, "innovationRange")), &thisId);
  thisId.fIdentifier = "innovationAzimuth";
  y->innovationAzimuth = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 7, "innovationAzimuth")), &thisId);
  thisId.fIdentifier = "innovationRange_norm";
  y->innovationRange_norm = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 8, "innovationRange_norm")), &thisId);
  thisId.fIdentifier = "innovationAzimuth_norm";
  y->innovationAzimuth_norm = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 9, "innovationAzimuth_norm")), &thisId);
  thisId.fIdentifier = "innovationRange_std";
  y->innovationRange_std = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 10, "innovationRange_std")), &thisId);
  thisId.fIdentifier = "innovationAzimuth_std";
  y->innovationAzimuth_std = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 11, "innovationAzimuth_std")), &thisId);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[16])
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct5_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  struct5_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "position", "velocity", "position_std",
    "velocity_std" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "position";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "position")),
                     &thisId, y.position);
  thisId.fIdentifier = "velocity";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "velocity")),
                     &thisId, y.velocity);
  thisId.fIdentifier = "position_std";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "position_std")), &thisId, y.position_std);
  thisId.fIdentifier = "velocity_std";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "velocity_std")), &thisId, y.velocity_std);
  emlrtDestroyArray(&u);
  return y;
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *paramsAlgo,
  const char_T *identifier, struct6_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  u_emlrt_marshallIn(sp, emlrtAlias(paramsAlgo), &thisId, y);
  emlrtDestroyArray(&paramsAlgo);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct6_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[17] = { "algoVersion", "algoSubversion",
    "platformNum", "bitSonarRangeUsed", "bitSonarAzimuthUsed", "Ts",
    "maximalUpdatePeriod", "minimalUpdatePeriod", "position0", "velocity0",
    "position_std0", "velocity_std0", "acceleration_psd", "sonarRange_std",
    "sonarAzimuth_std", "sonarInnovationRange_threshold",
    "sonarInnovationAzimuth_threshold" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 17, fieldNames, 0U, &dims);
  thisId.fIdentifier = "algoVersion";
  y->algoVersion = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "algoVersion")), &thisId);
  thisId.fIdentifier = "algoSubversion";
  y->algoSubversion = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 1, "algoSubversion")), &thisId);
  thisId.fIdentifier = "platformNum";
  y->platformNum = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 2, "platformNum")), &thisId);
  thisId.fIdentifier = "bitSonarRangeUsed";
  y->bitSonarRangeUsed = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 3, "bitSonarRangeUsed")), &thisId);
  thisId.fIdentifier = "bitSonarAzimuthUsed";
  y->bitSonarAzimuthUsed = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 4, "bitSonarAzimuthUsed")), &thisId);
  thisId.fIdentifier = "Ts";
  y->Ts = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "Ts")), &thisId);
  thisId.fIdentifier = "maximalUpdatePeriod";
  y->maximalUpdatePeriod = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 6, "maximalUpdatePeriod")), &thisId);
  thisId.fIdentifier = "minimalUpdatePeriod";
  y->minimalUpdatePeriod = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 7, "minimalUpdatePeriod")), &thisId);
  thisId.fIdentifier = "position0";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8, "position0")),
                     &thisId, y->position0);
  thisId.fIdentifier = "velocity0";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9, "velocity0")),
                     &thisId, y->velocity0);
  thisId.fIdentifier = "position_std0";
  y->position_std0 = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 10, "position_std0")), &thisId);
  thisId.fIdentifier = "velocity_std0";
  y->velocity_std0 = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 11, "velocity_std0")), &thisId);
  thisId.fIdentifier = "acceleration_psd";
  y->acceleration_psd = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 12, "acceleration_psd")), &thisId);
  thisId.fIdentifier = "sonarRange_std";
  y->sonarRange_std = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 13, "sonarRange_std")), &thisId);
  thisId.fIdentifier = "sonarAzimuth_std";
  y->sonarAzimuth_std = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 14, "sonarAzimuth_std")), &thisId);
  thisId.fIdentifier = "sonarInnovationRange_threshold";
  y->sonarInnovationRange_threshold = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 15, "sonarInnovationRange_threshold")),
    &thisId);
  thisId.fIdentifier = "sonarInnovationAzimuth_threshold";
  y->c_sonarInnovationAzimuth_thresh = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 16, "sonarInnovationAzimuth_threshold")),
    &thisId);
  emlrtDestroyArray(&u);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[500])
{
  static const int32_T dims[2] = { 1, 500 };

  real_T (*r)[500];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[500])emlrtMxGetData(src);
  memcpy(&ret[0], &(*r)[0], 500U * sizeof(real_T));
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[1000])
{
  static const int32_T dims[2] = { 2, 500 };

  real_T (*r)[1000];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[1000])emlrtMxGetData(src);
  memcpy(&ret[0], &(*r)[0], 1000U * sizeof(real_T));
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, int8_T ret[500])
{
  static const int32_T dims[2] = { 1, 500 };

  int8_T (*r)[500];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int8", false, 2U, dims);
  r = (int8_T (*)[500])emlrtMxGetData(src);
  memcpy(&ret[0], &(*r)[0], 500U * sizeof(int8_T));
  emlrtDestroyArray(&src);
}

void ZEN_objectTracking_V0_engine_api(const mxArray * const prhs[3], int32_T
  nlhs, const mxArray *plhs[2])
{
  struct0_T signals;
  struct2_T dataAlgo;
  struct6_T paramsAlgo;
  struct7_T resultsAlgo;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "signals", &signals);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "dataAlgo", &dataAlgo);
  t_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "paramsAlgo", &paramsAlgo);

  /* Invoke the target function */
  ZEN_objectTracking_V0_engine(&st, &signals, &dataAlgo, &paramsAlgo,
    &resultsAlgo);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&resultsAlgo);
  if (nlhs > 1) {
    plhs[1] = e_emlrt_marshallOut(&dataAlgo);
  }
}

/* End of code generation (_coder_ZEN_objectTracking_V0_engine_api.c) */
