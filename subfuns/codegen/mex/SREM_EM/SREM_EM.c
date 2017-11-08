/*
 * SREM_EM.c
 *
 * Code generation for function 'SREM_EM'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "SREM_EM_emxutil.h"
#include "std.h"
#include "taufun.h"
#include "bbarupdate.h"
#include "bSSupdate.h"
#include "eml_int_forloop_overflow_check.h"
#include "SREM_MAP.h"
#include "find.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 26, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo b_emlrtRSI = { 32, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo c_emlrtRSI = { 40, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo d_emlrtRSI = { 42, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo e_emlrtRSI = { 47, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo f_emlrtRSI = { 51, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo g_emlrtRSI = { 54, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo h_emlrtRSI = { 58, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRSInfo i_emlrtRSI = { 11, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo j_emlrtRSI = { 26, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo k_emlrtRSI = { 39, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo ve_emlrtRSI = { 3, "tauupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\tauupdate.m" };

static emlrtMCInfo emlrtMCI = { 14, 5, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 55, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo c_emlrtRTEI = { 26, 20, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo d_emlrtRTEI = { 26, 68, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo e_emlrtRTEI = { 26, 86, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo f_emlrtRTEI = { 28, 1, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo g_emlrtRTEI = { 32, 1, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo h_emlrtRTEI = { 32, 19, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo i_emlrtRTEI = { 32, 80, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 26, 35, "subind1", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 26, 61, "subind1", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 28, 38, "Y11", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 30, 17, "beta", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtECInfo emlrtECI = { 1, 30, 34, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 35, 1, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtECInfo b_emlrtECI = { -1, 42, 5, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtECInfo c_emlrtECI = { 1, 47, 6, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtECInfo d_emlrtECI = { 2, 47, 6, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtECInfo e_emlrtECI = { 2, 47, 12, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtECInfo f_emlrtECI = { 1, 51, 5, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtECInfo g_emlrtECI = { 1, 56, 5, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtECInfo h_emlrtECI = { 2, 56, 5, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m" };

static emlrtDCInfo emlrtDCI = { 24, 17, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 1 };

static emlrtDCInfo b_emlrtDCI = { 24, 17, "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 4 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 26, 79, "Y1", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 26, 97, "W1", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 32, 91, "Y11", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 40, 18, "sum_U", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 42, 10, "Pb", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 58, 21, "sum_U", "SREM_EM",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_EM.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 20, 34, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

static emlrtRSInfo kf_emlrtRSI = { 14, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

/* Function Declarations */
static int32_T compute_nones(const emlrtStack *sp, const boolean_T x_data[],
  int32_T n);
static void eml_li_find(const emlrtStack *sp, const boolean_T x_data[], const
  int32_T x_size[1], int32_T y_data[], int32_T y_size[1]);

/* Function Definitions */
static int32_T compute_nones(const emlrtStack *sp, const boolean_T x_data[],
  int32_T n)
{
  int32_T k;
  boolean_T b0;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = 0;
  st.site = &k_emlrtRSI;
  if (1 > n) {
    b0 = false;
  } else {
    b0 = (n > 2147483646);
  }

  if (b0) {
    b_st.site = &l_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (i = 1; i <= n; i++) {
    if (x_data[i - 1]) {
      k++;
    }
  }

  return k;
}

static void eml_li_find(const emlrtStack *sp, const boolean_T x_data[], const
  int32_T x_size[1], int32_T y_data[], int32_T y_size[1])
{
  int32_T k;
  const mxArray *y;
  const mxArray *m0;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &i_emlrtRSI;
  k = compute_nones(&st, x_data, x_size[0]);
  if (k <= x_size[0]) {
  } else {
    y = NULL;
    m0 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&y, m0);
    st.site = &kf_emlrtRSI;
    error(&st, y, &emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &c_emlrtDCI, sp);
  y_size[0] = k;
  k = 0;
  st.site = &j_emlrtRSI;
  for (i = 1; i <= x_size[0]; i++) {
    if (x_data[i - 1]) {
      y_data[k] = i;
      k++;
    }
  }
}

void SREM_EM(const emlrtStack *sp, emxArray_real_T *b, const emxArray_real_T *Y1,
             const emxArray_real_T *DIC, const emxArray_real_T *subind1,
             emxArray_real_T *beta, real_T betabar_data[], int32_T betabar_size
             [2], emxArray_real_T *Sigma_s, real_T tau, real_T EM_iter, real_T
             MAP_iter, emxArray_real_T *b0, emxArray_real_T *beta0, real_T
             betabar0_data[], int32_T betabar0_size[2], emxArray_real_T
             *Sigma_s0, real_T *tau0, emxArray_real_T *sum_U)
{
  int32_T i0;
  real_T s;
  int32_T iy;
  int32_T i1;
  int32_T ixstart;
  emxArray_real_T *W1;
  int32_T loop_ub;
  int32_T k;
  int32_T inx1_size[1];
  boolean_T inx1_data[1200];
  emxArray_real_T *Y11;
  int32_T tmp_size[1];
  int32_T tmp_data[1200];
  emxArray_real_T *W11;
  emxArray_real_T *Pb;
  int32_T vstride;
  int32_T exbetabar_size[2];
  real_T exbetabar_data[30];
  emxArray_boolean_T *unzeroDIC;
  int32_T sz[2];
  emxArray_real_T *sumDIC;
  int32_T ix;
  emxArray_boolean_T *b_sumDIC;
  emxArray_int32_T *ii;
  emxArray_real_T *Y11DIC;
  int32_T i2;
  emxArray_real_T *Pb1;
  emxArray_real_T *b_beta;
  boolean_T exitg1;
  int32_T b_tmp_data[1200];
  int32_T iv0[3];
  boolean_T exitg2;
  real_T B;
  boolean_T guard1 = false;
  real_T b_sum_U[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* %  The EM algorithm */
  /* ---input--------------------------------------------------------- */
  /*    b: initial 2D or 3D labels p*n1, n1: number of pateint */
  /*    Y1: image intensity matrix p*m */
  /*    DIC: dictionary of spatial relationship */
  /*    subind1: subject information m*(2+q) */
  /*    beta: initial value of beta q*p */
  /*    betabar: initial value of betabar q*2 */
  /*    Sigma_s: initial value of variance matrix in epsilon 1*p */
  /*    tau: initial value of tau in Gibbs distribution 1 */
  /*    EM_iter: maximum number of iterations of the EM algorithm */
  /*    MAP_iter: maximum number of iterations of the MAP algorithm */
  /* ---output-------------------------------------------------------- */
  /*    b0: final 2D or 3D labels */
  /*    beta0: final vector of beta  q*p */
  /*    betabar0: final vector of betabar  q*2 */
  /*    Sigma_s0: final value of variance matrix in epsilon  1*p */
  /*    tau0: final value of tau in Gibbs distribution  1 */
  /*    sum_U: energy function */
  /*    Copyright by Chao Huang, 2015/01/23 */
  i0 = sum_U->size[0] * sum_U->size[1];
  sum_U->size[0] = 1;
  s = emlrtNonNegativeCheckFastR2012b(EM_iter, &b_emlrtDCI, sp);
  sum_U->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(s, &emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)sum_U, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  s = emlrtNonNegativeCheckFastR2012b(EM_iter, &b_emlrtDCI, sp);
  iy = (int32_T)emlrtIntegerCheckFastR2012b(s, &emlrtDCI, sp);
  for (i0 = 0; i0 < iy; i0++) {
    sum_U->data[i0] = 0.0;
  }

  if (3 > subind1->size[1]) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = 2;
    i1 = subind1->size[1];
    ixstart = subind1->size[1];
    i1 = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i1, &emlrtBCI, sp);
  }

  emxInit_real_T(sp, &W1, 2, &c_emlrtRTEI, true);
  iy = subind1->size[0];
  ixstart = W1->size[0] * W1->size[1];
  W1->size[0] = i1 - i0;
  W1->size[1] = iy;
  emxEnsureCapacity(sp, (emxArray__common *)W1, ixstart, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (ixstart = 0; ixstart < iy; ixstart++) {
    loop_ub = i1 - i0;
    for (k = 0; k < loop_ub; k++) {
      W1->data[k + W1->size[0] * ixstart] = subind1->data[ixstart +
        subind1->size[0] * (i0 + k)];
    }
  }

  i0 = subind1->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &b_emlrtBCI, sp);
  iy = subind1->size[0];
  inx1_size[0] = iy;
  for (i0 = 0; i0 < iy; i0++) {
    inx1_data[i0] = (subind1->data[i0 + subind1->size[0]] != 0.0);
  }

  emxInit_real_T(sp, &Y11, 2, &d_emlrtRTEI, true);
  st.site = &emlrtRSI;
  eml_li_find(&st, inx1_data, inx1_size, tmp_data, tmp_size);
  iy = Y1->size[0];
  i0 = Y11->size[0] * Y11->size[1];
  Y11->size[0] = iy;
  Y11->size[1] = tmp_size[0];
  emxEnsureCapacity(sp, (emxArray__common *)Y11, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = tmp_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    for (i1 = 0; i1 < iy; i1++) {
      ixstart = Y1->size[1];
      Y11->data[i1 + Y11->size[0] * i0] = Y1->data[i1 + Y1->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(tmp_data[i0], 1, ixstart, &e_emlrtBCI,
          sp) - 1)];
    }
  }

  emxInit_real_T(sp, &W11, 2, &e_emlrtRTEI, true);
  st.site = &emlrtRSI;
  eml_li_find(&st, inx1_data, inx1_size, tmp_data, tmp_size);
  iy = W1->size[0];
  i0 = W11->size[0] * W11->size[1];
  W11->size[0] = iy;
  W11->size[1] = tmp_size[0];
  emxEnsureCapacity(sp, (emxArray__common *)W11, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = tmp_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    for (i1 = 0; i1 < iy; i1++) {
      ixstart = W1->size[1];
      W11->data[i1 + W11->size[0] * i0] = W1->data[i1 + W1->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(tmp_data[i0], 1, ixstart, &f_emlrtBCI,
          sp) - 1)];
    }
  }

  b_emxInit_real_T(sp, &Pb, 3, &f_emlrtRTEI, true);
  i0 = Pb->size[0] * Pb->size[1] * Pb->size[2];
  Pb->size[0] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)Pb, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vstride = Y1->size[1];
  i0 = Pb->size[0] * Pb->size[1] * Pb->size[2];
  Pb->size[1] = vstride;
  emxEnsureCapacity(sp, (emxArray__common *)Pb, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vstride = Y1->size[0];
  i0 = Pb->size[0] * Pb->size[1] * Pb->size[2];
  Pb->size[2] = vstride;
  emxEnsureCapacity(sp, (emxArray__common *)Pb, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = 3 * Y1->size[1] * Y1->size[0];
  for (i0 = 0; i0 < iy; i0++) {
    Pb->data[i0] = 0.0;
  }

  i0 = Y11->size[0];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &c_emlrtBCI, sp);
  i0 = Y11->size[1];
  i1 = beta->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i1, &d_emlrtBCI, sp);
  i1 = beta->size[0];
  ixstart = beta->size[0];
  emlrtDimSizeEqCheckFastR2012b(ixstart, betabar_size[0], &emlrtECI, sp);
  iy = beta->size[0];
  exbetabar_size[0] = iy;
  exbetabar_size[1] = 3;
  for (ixstart = 0; ixstart < iy; ixstart++) {
    exbetabar_data[ixstart] = 0.0;
  }

  for (ixstart = 0; ixstart < 2; ixstart++) {
    loop_ub = betabar_size[0];
    for (k = 0; k < loop_ub; k++) {
      exbetabar_data[k + iy * (ixstart + 1)] = betabar_data[k + betabar_size[0] *
        ixstart];
    }
  }

  emxInit_boolean_T(sp, &unzeroDIC, 2, &g_emlrtRTEI, true);
  ixstart = unzeroDIC->size[0] * unzeroDIC->size[1];
  unzeroDIC->size[0] = DIC->size[0];
  unzeroDIC->size[1] = DIC->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)unzeroDIC, ixstart, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  iy = DIC->size[0] * DIC->size[1];
  for (ixstart = 0; ixstart < iy; ixstart++) {
    unzeroDIC->data[ixstart] = (DIC->data[ixstart] != 0.0);
  }

  st.site = &b_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  for (ixstart = 0; ixstart < 2; ixstart++) {
    sz[ixstart] = unzeroDIC->size[ixstart];
  }

  c_emxInit_real_T(&c_st, &sumDIC, 1, &h_emlrtRTEI, true);
  ixstart = sumDIC->size[0];
  sumDIC->size[0] = sz[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)sumDIC, ixstart, (int32_T)sizeof
                    (real_T), &b_emlrtRTEI);
  if ((unzeroDIC->size[0] == 0) || (unzeroDIC->size[1] == 0)) {
    ixstart = sumDIC->size[0];
    sumDIC->size[0] = sz[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)sumDIC, ixstart, (int32_T)
                      sizeof(real_T), &emlrtRTEI);
    iy = sz[0];
    for (ixstart = 0; ixstart < iy; ixstart++) {
      sumDIC->data[ixstart] = 0.0;
    }
  } else {
    vstride = unzeroDIC->size[0];
    iy = -1;
    ixstart = -1;
    for (loop_ub = 1; loop_ub <= vstride; loop_ub++) {
      ixstart++;
      ix = ixstart;
      s = unzeroDIC->data[ixstart];
      for (k = 2; k <= unzeroDIC->size[1]; k++) {
        ix += vstride;
        s += (real_T)unzeroDIC->data[ix];
      }

      iy++;
      sumDIC->data[iy] = s;
    }
  }

  emxFree_boolean_T(&unzeroDIC);
  b_emxInit_boolean_T(&c_st, &b_sumDIC, 1, &emlrtRTEI, true);
  st.site = &b_emlrtRSI;
  ixstart = b_sumDIC->size[0];
  b_sumDIC->size[0] = sumDIC->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)b_sumDIC, ixstart, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  iy = sumDIC->size[0];
  for (ixstart = 0; ixstart < iy; ixstart++) {
    b_sumDIC->data[ixstart] = (sumDIC->data[ixstart] == 6.0);
  }

  emxInit_int32_T(&st, &ii, 1, &j_emlrtRTEI, true);
  b_st.site = &p_emlrtRSI;
  eml_find(&b_st, b_sumDIC, ii);
  ixstart = sumDIC->size[0];
  sumDIC->size[0] = ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)sumDIC, ixstart, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  iy = ii->size[0];
  emxFree_boolean_T(&b_sumDIC);
  for (ixstart = 0; ixstart < iy; ixstart++) {
    sumDIC->data[ixstart] = ii->data[ixstart];
  }

  emxInit_real_T(&st, &Y11DIC, 2, &i_emlrtRTEI, true);
  iy = Y11->size[1];
  ixstart = Y11DIC->size[0] * Y11DIC->size[1];
  Y11DIC->size[0] = sumDIC->size[0];
  Y11DIC->size[1] = iy;
  emxEnsureCapacity(sp, (emxArray__common *)Y11DIC, ixstart, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (ixstart = 0; ixstart < iy; ixstart++) {
    loop_ub = sumDIC->size[0];
    for (k = 0; k < loop_ub; k++) {
      i2 = Y11->size[0];
      vstride = (int32_T)sumDIC->data[k];
      Y11DIC->data[k + Y11DIC->size[0] * ixstart] = Y11->data
        [(emlrtDynamicBoundsCheckFastR2012b(vstride, 1, i2, &g_emlrtBCI, sp) +
          Y11->size[0] * ixstart) - 1];
    }
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, EM_iter, mxDOUBLE_CLASS, (int32_T)
    EM_iter, &rb_emlrtRTEI, sp);
  ix = 0;
  b_emxInit_real_T(sp, &Pb1, 3, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_beta, 2, &emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (ix <= (int32_T)EM_iter - 1)) {
    /*     %% E step: calculating expectations */
    /*     %% update b */
    ixstart = sum_U->size[1];
    st.site = &c_emlrtRSI;
    SREM_MAP(&st, b, Y11, DIC, W11, beta, exbetabar_data, exbetabar_size,
             Sigma_s, tau, MAP_iter, Pb1, &sum_U->
             data[emlrtDynamicBoundsCheckFastR2012b(ix + 1, 1, ixstart,
              &h_emlrtBCI, sp) - 1]);
    st.site = &d_emlrtRSI;
    eml_li_find(&st, inx1_data, inx1_size, tmp_data, tmp_size);
    iy = tmp_size[0];
    for (ixstart = 0; ixstart < iy; ixstart++) {
      k = Pb->size[1];
      b_tmp_data[ixstart] = emlrtDynamicBoundsCheckFastR2012b(tmp_data[ixstart],
        1, k, &i_emlrtBCI, sp) - 1;
    }

    iy = Pb->size[2];
    ixstart = ii->size[0];
    ii->size[0] = iy;
    emxEnsureCapacity(sp, (emxArray__common *)ii, ixstart, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    for (ixstart = 0; ixstart < iy; ixstart++) {
      ii->data[ixstart] = ixstart;
    }

    iv0[0] = 3;
    iv0[1] = tmp_size[0];
    iv0[2] = ii->size[0];
    emlrtSubAssignSizeCheckR2012b(iv0, 3, *(int32_T (*)[3])Pb1->size, 3,
      &b_emlrtECI, sp);
    iy = Pb1->size[2];
    for (ixstart = 0; ixstart < iy; ixstart++) {
      loop_ub = Pb1->size[1];
      for (k = 0; k < loop_ub; k++) {
        for (i2 = 0; i2 < 3; i2++) {
          Pb->data[(i2 + Pb->size[0] * b_tmp_data[k]) + Pb->size[0] * Pb->size[1]
            * ii->data[ixstart]] = Pb1->data[(i2 + Pb1->size[0] * k) + Pb1->
            size[0] * Pb1->size[1] * ixstart];
        }
      }
    }

    /*     %% M step: update beta, betabar, Sigma_v, Sigma_s and tau */
    st.site = &e_emlrtRSI;
    bSSupdate(&st, Y1, Pb, W1, beta, exbetabar_data, exbetabar_size, i1, b_beta,
              Sigma_s);
    ixstart = b_beta->size[0];
    emlrtDimSizeGeqCheckFastR2012b(10, ixstart, &c_emlrtECI, sp);
    ixstart = b_beta->size[1];
    emlrtDimSizeGeqCheckFastR2012b(1000000, ixstart, &d_emlrtECI, sp);
    ixstart = beta->size[0] * beta->size[1];
    beta->size[0] = b_beta->size[0];
    beta->size[1] = b_beta->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)beta, ixstart, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    iy = b_beta->size[0] * b_beta->size[1];
    for (ixstart = 0; ixstart < iy; ixstart++) {
      beta->data[ixstart] = b_beta->data[ixstart];
    }

    ixstart = Sigma_s->size[1];
    emlrtDimSizeGeqCheckFastR2012b(1000000, ixstart, &e_emlrtECI, sp);

    /*  update betabar */
    st.site = &f_emlrtRSI;
    bbarupdate(&st, Y11, Pb1, W11, b_beta, Sigma_s, i1, betabar_data,
               betabar_size);
    emlrtDimSizeGeqCheckFastR2012b(10, betabar_size[0], &f_emlrtECI, sp);

    /*  update tau */
    st.site = &g_emlrtRSI;
    vstride = 0;
    exitg2 = false;
    while ((!exitg2) && (vstride < 50)) {
      b_st.site = &ve_emlrtRSI;
      taufun(&b_st, tau, b, Y11DIC, i0, DIC, sumDIC, &s, &B);
      tau -= s / B;
      if ((vstride + 1 >= 3) && (muDoubleScalarAbs(tau - tau) < 0.01)) {
        exitg2 = true;
      } else {
        vstride++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }
    }

    ixstart = b->size[0];
    emlrtDimSizeGeqCheckFastR2012b(1000000, ixstart, &g_emlrtECI, sp);
    ixstart = b->size[1];
    emlrtDimSizeGeqCheckFastR2012b(1200, ixstart, &h_emlrtECI, sp);
    guard1 = false;
    if (1.0 + (real_T)ix >= 3.0) {
      for (ixstart = 0; ixstart < 3; ixstart++) {
        k = sum_U->size[1];
        i2 = (int32_T)((1.0 + (real_T)ix) + (-2.0 + (real_T)ixstart));
        b_sum_U[ixstart] = sum_U->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1,
          k, &j_emlrtBCI, sp) - 1];
      }

      st.site = &h_emlrtRSI;
      if (b_std(&st, b_sum_U) < 0.01) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ix++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_int32_T(&ii);
  emxFree_real_T(&b_beta);
  emxFree_real_T(&Pb1);
  emxFree_real_T(&Y11DIC);
  emxFree_real_T(&sumDIC);
  emxFree_real_T(&Pb);
  emxFree_real_T(&W11);
  emxFree_real_T(&Y11);
  emxFree_real_T(&W1);
  i0 = b0->size[0] * b0->size[1];
  b0->size[0] = b->size[0];
  b0->size[1] = b->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = b->size[0] * b->size[1];
  for (i0 = 0; i0 < iy; i0++) {
    b0->data[i0] = b->data[i0];
  }

  i0 = beta0->size[0] * beta0->size[1];
  beta0->size[0] = beta->size[0];
  beta0->size[1] = beta->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)beta0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = beta->size[0] * beta->size[1];
  for (i0 = 0; i0 < iy; i0++) {
    beta0->data[i0] = beta->data[i0];
  }

  betabar0_size[0] = betabar_size[0];
  betabar0_size[1] = 2;
  iy = betabar_size[0] * betabar_size[1];
  for (i0 = 0; i0 < iy; i0++) {
    betabar0_data[i0] = betabar_data[i0];
  }

  i0 = Sigma_s0->size[0] * Sigma_s0->size[1];
  Sigma_s0->size[0] = 1;
  Sigma_s0->size[1] = Sigma_s->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Sigma_s0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = Sigma_s->size[0] * Sigma_s->size[1];
  for (i0 = 0; i0 < iy; i0++) {
    Sigma_s0->data[i0] = Sigma_s->data[i0];
  }

  *tau0 = tau;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SREM_EM.c) */
