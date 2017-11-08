/*
 * _coder_SREM_EM_api.c
 *
 * Code generation for function '_coder_SREM_EM_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "_coder_SREM_EM_api.h"
#include "SREM_EM_emxutil.h"
#include "eml_warning.h"
#include "SREM_EM_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo eb_emlrtRTEI = { 1, 1, "_coder_SREM_EM_api", "" };

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *d_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *DIC, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *subind1,
  const char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *beta, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *betabar,
  const char_T *identifier, real_T **y_data, int32_T y_size[2]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sigma_s,
  const char_T *identifier, emxArray_real_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tau, const
  char_T *identifier);
static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv45[2] = { 0, 0 };

  const mxArray *m19;
  y = NULL;
  m19 = emlrtCreateNumericArray(2, iv45, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m19, (void *)u->data);
  emlrtSetDimensions((mxArray *)m19, u->size, 2);
  emlrtAssign(&y, m19);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(b), &thisId, y);
  emlrtDestroyArray(&b);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv46[2] = { 0, 0 };

  const mxArray *m20;
  y = NULL;
  m20 = emlrtCreateNumericArray(2, iv46, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m20, (void *)u->data);
  emlrtSetDimensions((mxArray *)m20, u->size, 2);
  emlrtAssign(&y, m20);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  static const int32_T iv47[2] = { 0, 0 };

  const mxArray *m21;
  y = NULL;
  m21 = emlrtCreateNumericArray(2, iv47, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m21, (void *)u_data);
  emlrtSetDimensions((mxArray *)m21, u_size, 2);
  emlrtAssign(&y, m21);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *DIC, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(DIC), &thisId, y);
  emlrtDestroyArray(&DIC);
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv48[2] = { 0, 0 };

  const mxArray *m22;
  y = NULL;
  m22 = emlrtCreateNumericArray(2, iv48, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m22, (void *)u->data);
  emlrtSetDimensions((mxArray *)m22, u->size, 2);
  emlrtAssign(&y, m22);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv49[2] = { 0, 0 };

  const mxArray *m23;
  y = NULL;
  m23 = emlrtCreateNumericArray(2, iv49, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m23, (void *)u->data);
  emlrtSetDimensions((mxArray *)m23, u->size, 2);
  emlrtAssign(&y, m23);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *subind1,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(sp, emlrtAlias(subind1), &thisId, y);
  emlrtDestroyArray(&subind1);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *beta, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  j_emlrt_marshallIn(sp, emlrtAlias(beta), &thisId, y);
  emlrtDestroyArray(&beta);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *betabar,
  const char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  l_emlrt_marshallIn(sp, emlrtAlias(betabar), &thisId, y_data, y_size);
  emlrtDestroyArray(&betabar);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sigma_s,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  n_emlrt_marshallIn(sp, emlrtAlias(Sigma_s), &thisId, y);
  emlrtDestroyArray(&Sigma_s);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tau, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = p_emlrt_marshallIn(sp, emlrtAlias(tau), &thisId);
  emlrtDestroyArray(&tau);
  return y;
}

static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = x_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv51[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv52[2];
  for (i = 0; i < 2; i++) {
    iv51[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv51, bv0, iv52);
  ret->size[0] = iv52[0];
  ret->size[1] = iv52[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv53[2];
  boolean_T bv1[2];
  int32_T i15;
  int32_T iv54[2];
  for (i15 = 0; i15 < 2; i15++) {
    iv53[i15] = 1000000 + -999994 * i15;
    bv1[i15] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv53, bv1, iv54);
  ret->size[0] = iv54[0];
  ret->size[1] = iv54[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv55[2];
  boolean_T bv2[2];
  int32_T i16;
  int32_T iv56[2];
  for (i16 = 0; i16 < 2; i16++) {
    iv55[i16] = 1200 + -1190 * i16;
    bv2[i16] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv55, bv2, iv56);
  ret->size[0] = iv56[0];
  ret->size[1] = iv56[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv57[2];
  boolean_T bv3[2];
  int32_T i17;
  int32_T iv58[2];
  for (i17 = 0; i17 < 2; i17++) {
    iv57[i17] = 10 + 999990 * i17;
    bv3[i17] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv57, bv3, iv58);
  ret->size[0] = iv58[0];
  ret->size[1] = iv58[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  int32_T iv59[2];
  boolean_T bv4[2];
  int32_T i18;
  static const boolean_T bv5[2] = { true, false };

  int32_T iv60[2];
  for (i18 = 0; i18 < 2; i18++) {
    iv59[i18] = 10 + -8 * i18;
    bv4[i18] = bv5[i18];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv59, bv4, iv60);
  ret_size[0] = iv60[0];
  ret_size[1] = iv60[1];
  *ret_data = (real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv61[2];
  boolean_T bv6[2];
  int32_T i19;
  static const boolean_T bv7[2] = { false, true };

  int32_T iv62[2];
  for (i19 = 0; i19 < 2; i19++) {
    iv61[i19] = 1 + 999999 * i19;
    bv6[i19] = bv7[i19];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv61, bv6, iv62);
  ret->size[0] = iv62[0];
  ret->size[1] = iv62[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void SREM_EM_api(const mxArray *prhs[10], const mxArray *plhs[6])
{
  real_T (*betabar0_data)[20];
  emxArray_real_T *b;
  emxArray_real_T *Y1;
  emxArray_real_T *DIC;
  emxArray_real_T *subind1;
  emxArray_real_T *beta;
  emxArray_real_T *Sigma_s;
  emxArray_real_T *b0;
  emxArray_real_T *beta0;
  emxArray_real_T *Sigma_s0;
  emxArray_real_T *sum_U;
  int32_T betabar_size[2];
  real_T (*betabar_data)[20];
  real_T tau;
  real_T EM_iter;
  real_T MAP_iter;
  real_T tau0;
  int32_T betabar0_size[2];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  betabar0_data = (real_T (*)[20])mxMalloc(sizeof(real_T [20]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &b, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &Y1, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &DIC, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &subind1, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &beta, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &Sigma_s, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &b0, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &beta0, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &Sigma_s0, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &sum_U, 2, &eb_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, false, -1);
  prhs[5] = emlrtProtectR2012b(prhs[5], 5, false, 20);
  prhs[6] = emlrtProtectR2012b(prhs[6], 6, false, -1);

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "b", b);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Y1", Y1);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "DIC", DIC);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "subind1", subind1);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "beta", beta);
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "betabar", (real_T **)
                     &betabar_data, betabar_size);
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "Sigma_s", Sigma_s);
  tau = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "tau");
  EM_iter = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "EM_iter");
  MAP_iter = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "MAP_iter");

  /* Invoke the target function */
  SREM_EM(&st, b, Y1, DIC, subind1, beta, *betabar_data, betabar_size, Sigma_s,
          tau, EM_iter, MAP_iter, b0, beta0, *betabar0_data, betabar0_size,
          Sigma_s0, &tau0, sum_U);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(b0);
  plhs[1] = c_emlrt_marshallOut(beta0);
  plhs[2] = d_emlrt_marshallOut(*betabar0_data, betabar0_size);
  plhs[3] = e_emlrt_marshallOut(Sigma_s0);
  plhs[4] = emlrt_marshallOut(tau0);
  plhs[5] = f_emlrt_marshallOut(sum_U);
  sum_U->canFreeData = false;
  emxFree_real_T(&sum_U);
  Sigma_s0->canFreeData = false;
  emxFree_real_T(&Sigma_s0);
  beta0->canFreeData = false;
  emxFree_real_T(&beta0);
  b0->canFreeData = false;
  emxFree_real_T(&b0);
  Sigma_s->canFreeData = false;
  emxFree_real_T(&Sigma_s);
  beta->canFreeData = false;
  emxFree_real_T(&beta);
  subind1->canFreeData = false;
  emxFree_real_T(&subind1);
  DIC->canFreeData = false;
  emxFree_real_T(&DIC);
  Y1->canFreeData = false;
  emxFree_real_T(&Y1);
  b->canFreeData = false;
  emxFree_real_T(&b);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_SREM_EM_api.c) */
