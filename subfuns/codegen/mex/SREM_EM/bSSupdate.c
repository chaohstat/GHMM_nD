/*
 * bSSupdate.c
 *
 * Code generation for function 'bSSupdate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "bSSupdate.h"
#include "bbarupdate.h"
#include "SREM_EM_emxutil.h"
#include "taufun.h"
#include "mldivide.h"
#include "diag.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo tb_emlrtRSI = { 4, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtRSInfo ub_emlrtRSI = { 5, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtRSInfo vb_emlrtRSI = { 6, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtRTEInfo s_emlrtRTEI = { 1, 30, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 4, 12, "Y1", "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 4, 45, "Pb", "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m", 0 };

static emlrtECInfo i_emlrtECI = { -1, 4, 9, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 6, 34, "beta", "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m", 0 };

static emlrtECInfo j_emlrtECI = { -1, 6, 21, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 5, 13, "beta0", "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m", 0 };

static emlrtECInfo k_emlrtECI = { -1, 5, 5, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 6, 55, "beta0", "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m", 0 };

static emlrtECInfo l_emlrtECI = { -1, 6, 41, "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m" };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 6, 5, "Sigma_s0", "bSSupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bSSupdate.m", 0 };

/* Function Declarations */
static void c_eml_xgemm(int32_T m, int32_T n, const real_T A_data[], int32_T lda,
  const real_T B_data[], emxArray_real_T *C, int32_T ldc);

/* Function Definitions */
static void c_eml_xgemm(int32_T m, int32_T n, const real_T A_data[], int32_T lda,
  const real_T B_data[], emxArray_real_T *C, int32_T ldc)
{
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  if ((m < 1) || (n < 1)) {
  } else {
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(m);
    n_t = (ptrdiff_t)(n);
    k_t = (ptrdiff_t)(3);
    lda_t = (ptrdiff_t)(lda);
    ldb_t = (ptrdiff_t)(3);
    ldc_t = (ptrdiff_t)(ldc);
    alpha1_t = (double *)(&alpha1);
    Aia0_t = (double *)(&A_data[0]);
    Bib0_t = (double *)(&B_data[0]);
    beta1_t = (double *)(&beta1);
    Cic0_t = (double *)(&C->data[0]);
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
          &ldb_t, beta1_t, Cic0_t, &ldc_t);
  }
}

void bSSupdate(const emlrtStack *sp, const emxArray_real_T *Y1, const
               emxArray_real_T *Pb, const emxArray_real_T *W1, const
               emxArray_real_T *beta, const real_T exbetabar_data[], const
               int32_T exbetabar_size[2], real_T q, emxArray_real_T *beta0,
               emxArray_real_T *Sigma_s0)
{
  emxArray_real_T *r0;
  emxArray_real_T *y;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  int32_T i7;
  int32_T i;
  int32_T loop_ub;
  int32_T ll;
  emxArray_real_T *a;
  emxArray_real_T *d_y;
  emxArray_real_T *b_a;
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  real_T z_data[1200];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i8;
  int16_T unnamed_idx_0;
  real_T Pb_data[3600];
  int32_T tmp_size[1];
  real_T tmp_data[1200];
  int32_T b_tmp_data[10];
  int32_T d_loop_ub;
  const mxArray *e_y;
  static const int32_T iv10[2] = { 1, 45 };

  const mxArray *m7;
  char_T cv16[45];
  static const char_T cv17[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *f_y;
  static const int32_T iv11[2] = { 1, 21 };

  char_T cv18[21];
  static const char_T cv19[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T e_loop_ub;
  int16_T unnamed_idx_1;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  int32_T iv12[1];
  boolean_T guard2 = false;
  boolean_T guard1 = false;
  real_T a_data[1200];
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
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &r0, 2, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &s_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_y, 1, &s_emlrtRTEI, true);
  c_emxInit_real_T(sp, &c_y, 1, &s_emlrtRTEI, true);
  i7 = beta0->size[0] * beta0->size[1];
  beta0->size[0] = (int32_T)q;
  emxEnsureCapacity(sp, (emxArray__common *)beta0, i7, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  i = Y1->size[0];
  i7 = beta0->size[0] * beta0->size[1];
  beta0->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)beta0, i7, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = (int32_T)q * Y1->size[0];
  for (i7 = 0; i7 < loop_ub; i7++) {
    beta0->data[i7] = 0.0;
  }

  i7 = Sigma_s0->size[0] * Sigma_s0->size[1];
  Sigma_s0->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)Sigma_s0, i7, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  i = Y1->size[0];
  i7 = Sigma_s0->size[0] * Sigma_s0->size[1];
  Sigma_s0->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)Sigma_s0, i7, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = Y1->size[0];
  for (i7 = 0; i7 < loop_ub; i7++) {
    Sigma_s0->data[i7] = 0.0;
  }

  ll = 0;
  emxInit_real_T(sp, &a, 2, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &d_y, 2, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &b_a, 2, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &s_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_b, 1, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &s_emlrtRTEI, true);
  while (ll <= Y1->size[0] - 1) {
    loop_ub = Y1->size[1];
    i7 = Y1->size[0];
    i = 1 + ll;
    i7 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &k_emlrtBCI, sp);
    for (i = 0; i < loop_ub; i++) {
      z_data[i] = Y1->data[(i7 + Y1->size[0] * i) - 1];
    }

    st.site = &tb_emlrtRSI;
    i7 = a->size[0] * a->size[1];
    a->size[0] = W1->size[1];
    a->size[1] = W1->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)a, i7, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    b_loop_ub = W1->size[0];
    for (i7 = 0; i7 < b_loop_ub; i7++) {
      c_loop_ub = W1->size[1];
      for (i = 0; i < c_loop_ub; i++) {
        a->data[i + a->size[0] * i7] = W1->data[i7 + W1->size[0] * i];
      }
    }

    b_st.site = &db_emlrtRSI;
    b_dynamic_size_checks(&b_st, a, exbetabar_size);
    if ((a->size[1] == 1) || (exbetabar_size[0] == 1)) {
      i7 = y->size[0] * y->size[1];
      y->size[0] = a->size[0];
      y->size[1] = 3;
      emxEnsureCapacity(&st, (emxArray__common *)y, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      b_loop_ub = a->size[0];
      for (i7 = 0; i7 < b_loop_ub; i7++) {
        for (i = 0; i < 3; i++) {
          y->data[i7 + y->size[0] * i] = 0.0;
          c_loop_ub = a->size[1];
          for (i8 = 0; i8 < c_loop_ub; i8++) {
            y->data[i7 + y->size[0] * i] += a->data[i7 + a->size[0] * i8] *
              exbetabar_data[i8 + exbetabar_size[0] * i];
          }
        }
      }
    } else {
      unnamed_idx_0 = (int16_T)a->size[0];
      i7 = y->size[0] * y->size[1];
      y->size[0] = unnamed_idx_0;
      y->size[1] = 3;
      emxEnsureCapacity(&st, (emxArray__common *)y, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      b_loop_ub = unnamed_idx_0 * 3;
      for (i7 = 0; i7 < b_loop_ub; i7++) {
        y->data[i7] = 0.0;
      }

      b_st.site = &cb_emlrtRSI;
      b_eml_xgemm(a->size[0], a->size[1], a, a->size[0], exbetabar_data, a->
                  size[1], y, a->size[0]);
    }

    st.site = &tb_emlrtRSI;
    i7 = Pb->size[2];
    i = ll + 1;
    emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &l_emlrtBCI, &st);
    i7 = Pb->size[1];
    unnamed_idx_0 = (int16_T)y->size[0];
    i = r0->size[0] * r0->size[1];
    r0->size[0] = unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r0, i, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    i = r0->size[0] * r0->size[1];
    r0->size[1] = (int16_T)i7;
    emxEnsureCapacity(&st, (emxArray__common *)r0, i, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    b_loop_ub = unnamed_idx_0 * (int16_T)i7;
    for (i7 = 0; i7 < b_loop_ub; i7++) {
      r0->data[i7] = 0.0;
    }

    i7 = Pb->size[1];
    b_loop_ub = Pb->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      for (i8 = 0; i8 < 3; i8++) {
        Pb_data[i8 + 3 * i] = Pb->data[(i8 + Pb->size[0] * i) + Pb->size[0] *
          Pb->size[1] * ll];
      }
    }

    b_st.site = &cb_emlrtRSI;
    c_eml_xgemm(y->size[0], i7, y->data, y->size[0], Pb_data, r0, y->size[0]);
    st.site = &tb_emlrtRSI;
    diag(&st, r0, tmp_data, tmp_size);
    emlrtSizeEqCheck1DFastR2012b(loop_ub, tmp_size[0], &i_emlrtECI, sp);
    for (i7 = 0; i7 < loop_ub; i7++) {
      z_data[i7] -= tmp_data[i7];
    }

    b_loop_ub = beta0->size[0];
    for (i7 = 0; i7 < b_loop_ub; i7++) {
      b_tmp_data[i7] = i7;
    }

    i7 = beta0->size[1];
    i = ll + 1;
    emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &n_emlrtBCI, sp);
    st.site = &ub_emlrtRSI;
    i7 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = W1->size[0];
    b_a->size[1] = W1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_a, i7, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    c_loop_ub = W1->size[0] * W1->size[1];
    for (i7 = 0; i7 < c_loop_ub; i7++) {
      b_a->data[i7] = W1->data[i7];
    }

    i7 = b->size[0] * b->size[1];
    b->size[0] = W1->size[1];
    b->size[1] = W1->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b, i7, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    c_loop_ub = W1->size[0];
    for (i7 = 0; i7 < c_loop_ub; i7++) {
      d_loop_ub = W1->size[1];
      for (i = 0; i < d_loop_ub; i++) {
        b->data[i + b->size[0] * i7] = W1->data[i7 + W1->size[0] * i];
      }
    }

    b_st.site = &db_emlrtRSI;
    if (!(W1->size[1] == b->size[0])) {
      if (((W1->size[0] == 1) && (W1->size[1] == 1)) || ((b->size[0] == 1) &&
           (b->size[1] == 1))) {
        e_y = NULL;
        m7 = emlrtCreateCharArray(2, iv10);
        for (i = 0; i < 45; i++) {
          cv16[i] = cv17[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m7, cv16);
        emlrtAssign(&e_y, m7);
        c_st.site = &ef_emlrtRSI;
        d_st.site = &mf_emlrtRSI;
        error(&c_st, b_message(&d_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
      } else {
        f_y = NULL;
        m7 = emlrtCreateCharArray(2, iv11);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv18);
        emlrtAssign(&f_y, m7);
        c_st.site = &ff_emlrtRSI;
        d_st.site = &nf_emlrtRSI;
        error(&c_st, b_message(&d_st, f_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if ((W1->size[1] == 1) || (b->size[0] == 1)) {
      i7 = d_y->size[0] * d_y->size[1];
      d_y->size[0] = W1->size[0];
      d_y->size[1] = b->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)d_y, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      c_loop_ub = W1->size[0];
      for (i7 = 0; i7 < c_loop_ub; i7++) {
        d_loop_ub = b->size[1];
        for (i = 0; i < d_loop_ub; i++) {
          d_y->data[i7 + d_y->size[0] * i] = 0.0;
          e_loop_ub = W1->size[1];
          for (i8 = 0; i8 < e_loop_ub; i8++) {
            d_y->data[i7 + d_y->size[0] * i] += W1->data[i7 + W1->size[0] * i8] *
              b->data[i8 + b->size[0] * i];
          }
        }
      }
    } else {
      unnamed_idx_0 = (int16_T)W1->size[0];
      unnamed_idx_1 = (int16_T)b->size[1];
      i7 = r1->size[0] * r1->size[1];
      r1->size[0] = unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r1, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      i7 = r1->size[0] * r1->size[1];
      r1->size[1] = unnamed_idx_1;
      emxEnsureCapacity(&st, (emxArray__common *)r1, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      c_loop_ub = unnamed_idx_0 * unnamed_idx_1;
      for (i7 = 0; i7 < c_loop_ub; i7++) {
        r1->data[i7] = 0.0;
      }

      b_st.site = &cb_emlrtRSI;
      c_st.site = &eb_emlrtRSI;
      i7 = d_y->size[0] * d_y->size[1];
      d_y->size[0] = unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)d_y, i7, (int32_T)sizeof
                        (real_T), &s_emlrtRTEI);
      i7 = d_y->size[0] * d_y->size[1];
      d_y->size[1] = unnamed_idx_1;
      emxEnsureCapacity(&c_st, (emxArray__common *)d_y, i7, (int32_T)sizeof
                        (real_T), &s_emlrtRTEI);
      c_loop_ub = unnamed_idx_0 * unnamed_idx_1;
      for (i7 = 0; i7 < c_loop_ub; i7++) {
        d_y->data[i7] = 0.0;
      }

      if ((W1->size[0] < 1) || (b->size[1] < 1) || (W1->size[1] < 1)) {
      } else {
        alpha1 = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(W1->size[0]);
        n_t = (ptrdiff_t)(b->size[1]);
        k_t = (ptrdiff_t)(W1->size[1]);
        lda_t = (ptrdiff_t)(W1->size[0]);
        ldb_t = (ptrdiff_t)(W1->size[1]);
        ldc_t = (ptrdiff_t)(W1->size[0]);
        alpha1_t = (double *)(&alpha1);
        Aia0_t = (double *)(&b_a->data[0]);
        Bib0_t = (double *)(&b->data[0]);
        beta1_t = (double *)(&beta1);
        Cic0_t = (double *)(&d_y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    st.site = &ub_emlrtRSI;
    b_st.site = &ub_emlrtRSI;
    mldivide(&b_st, d_y->data, d_y->size, W1, r2);
    i7 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = r2->size[0];
    b_a->size[1] = r2->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_a, i7, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    c_loop_ub = r2->size[0] * r2->size[1];
    for (i7 = 0; i7 < c_loop_ub; i7++) {
      b_a->data[i7] = r2->data[i7];
    }

    i7 = b_b->size[0];
    b_b->size[0] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)b_b, i7, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    for (i7 = 0; i7 < loop_ub; i7++) {
      b_b->data[i7] = z_data[i7];
    }

    b_st.site = &db_emlrtRSI;
    c_dynamic_size_checks(&b_st, b_a, b_b);
    if ((b_a->size[1] == 1) || (loop_ub == 1)) {
      i7 = b_y->size[0];
      b_y->size[0] = b_a->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)b_y, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      c_loop_ub = b_a->size[0];
      for (i7 = 0; i7 < c_loop_ub; i7++) {
        b_y->data[i7] = 0.0;
        d_loop_ub = b_a->size[1];
        for (i = 0; i < d_loop_ub; i++) {
          b_y->data[i7] += b_a->data[i7 + b_a->size[0] * i] * b_b->data[i];
        }
      }
    } else {
      unnamed_idx_0 = (int16_T)b_a->size[0];
      i7 = b_y->size[0];
      b_y->size[0] = unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)b_y, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      c_loop_ub = unnamed_idx_0;
      for (i7 = 0; i7 < c_loop_ub; i7++) {
        b_y->data[i7] = 0.0;
      }

      b_st.site = &cb_emlrtRSI;
      d_eml_xgemm(b_a->size[0], b_a->size[1], b_a, b_a->size[0], b_b, b_a->size
                  [1], b_y, b_a->size[0]);
    }

    iv12[0] = b_loop_ub;
    emlrtSubAssignSizeCheckR2012b(iv12, 1, *(int32_T (*)[1])b_y->size, 1,
      &k_emlrtECI, sp);
    b_loop_ub = b_y->size[0];
    for (i7 = 0; i7 < b_loop_ub; i7++) {
      beta0->data[b_tmp_data[i7] + beta0->size[0] * ll] = b_y->data[i7];
    }

    st.site = &vb_emlrtRSI;
    i7 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = W1->size[1];
    b_a->size[1] = W1->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b_a, i7, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    b_loop_ub = W1->size[0];
    for (i7 = 0; i7 < b_loop_ub; i7++) {
      c_loop_ub = W1->size[1];
      for (i = 0; i < c_loop_ub; i++) {
        b_a->data[i + b_a->size[0] * i7] = W1->data[i7 + W1->size[0] * i];
      }
    }

    b_loop_ub = beta->size[0];
    i7 = beta->size[1];
    i = 1 + ll;
    i7 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &m_emlrtBCI, &st);
    i = b_b->size[0];
    b_b->size[0] = b_loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)b_b, i, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    for (i = 0; i < b_loop_ub; i++) {
      b_b->data[i] = beta->data[i + beta->size[0] * (i7 - 1)];
    }

    b_st.site = &db_emlrtRSI;
    c_dynamic_size_checks(&b_st, b_a, b_b);
    guard2 = false;
    if (b_a->size[1] == 1) {
      guard2 = true;
    } else {
      i7 = beta->size[0];
      if (i7 == 1) {
        guard2 = true;
      } else {
        unnamed_idx_0 = (int16_T)b_a->size[0];
        i7 = b_y->size[0];
        b_y->size[0] = unnamed_idx_0;
        emxEnsureCapacity(&st, (emxArray__common *)b_y, i7, (int32_T)sizeof
                          (real_T), &s_emlrtRTEI);
        b_loop_ub = unnamed_idx_0;
        for (i7 = 0; i7 < b_loop_ub; i7++) {
          b_y->data[i7] = 0.0;
        }

        b_st.site = &cb_emlrtRSI;
        d_eml_xgemm(b_a->size[0], b_a->size[1], b_a, b_a->size[0], b_b,
                    b_a->size[1], b_y, b_a->size[0]);
      }
    }

    if (guard2) {
      i7 = b_y->size[0];
      b_y->size[0] = b_a->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)b_y, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      b_loop_ub = b_a->size[0];
      for (i7 = 0; i7 < b_loop_ub; i7++) {
        b_y->data[i7] = 0.0;
        c_loop_ub = b_a->size[1];
        for (i = 0; i < c_loop_ub; i++) {
          b_y->data[i7] += b_a->data[i7 + b_a->size[0] * i] * b_b->data[i];
        }
      }
    }

    i7 = b_y->size[0];
    emlrtSizeEqCheck1DFastR2012b(loop_ub, i7, &j_emlrtECI, sp);
    st.site = &vb_emlrtRSI;
    i7 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = W1->size[1];
    b_a->size[1] = W1->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)b_a, i7, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    b_loop_ub = W1->size[0];
    for (i7 = 0; i7 < b_loop_ub; i7++) {
      c_loop_ub = W1->size[1];
      for (i = 0; i < c_loop_ub; i++) {
        b_a->data[i + b_a->size[0] * i7] = W1->data[i7 + W1->size[0] * i];
      }
    }

    b_loop_ub = beta0->size[0];
    i7 = beta0->size[1];
    i = 1 + ll;
    i7 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &o_emlrtBCI, &st);
    i = b_b->size[0];
    b_b->size[0] = b_loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)b_b, i, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    for (i = 0; i < b_loop_ub; i++) {
      b_b->data[i] = beta0->data[i + beta0->size[0] * (i7 - 1)];
    }

    b_st.site = &db_emlrtRSI;
    c_dynamic_size_checks(&b_st, b_a, b_b);
    guard1 = false;
    if (b_a->size[1] == 1) {
      guard1 = true;
    } else {
      i7 = beta0->size[0];
      if (i7 == 1) {
        guard1 = true;
      } else {
        unnamed_idx_0 = (int16_T)b_a->size[0];
        i7 = c_y->size[0];
        c_y->size[0] = unnamed_idx_0;
        emxEnsureCapacity(&st, (emxArray__common *)c_y, i7, (int32_T)sizeof
                          (real_T), &s_emlrtRTEI);
        b_loop_ub = unnamed_idx_0;
        for (i7 = 0; i7 < b_loop_ub; i7++) {
          c_y->data[i7] = 0.0;
        }

        b_st.site = &cb_emlrtRSI;
        d_eml_xgemm(b_a->size[0], b_a->size[1], b_a, b_a->size[0], b_b,
                    b_a->size[1], c_y, b_a->size[0]);
      }
    }

    if (guard1) {
      i7 = c_y->size[0];
      c_y->size[0] = b_a->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)c_y, i7, (int32_T)sizeof(real_T),
                        &s_emlrtRTEI);
      b_loop_ub = b_a->size[0];
      for (i7 = 0; i7 < b_loop_ub; i7++) {
        c_y->data[i7] = 0.0;
        c_loop_ub = b_a->size[1];
        for (i = 0; i < c_loop_ub; i++) {
          c_y->data[i7] += b_a->data[i7 + b_a->size[0] * i] * b_b->data[i];
        }
      }
    }

    i7 = c_y->size[0];
    emlrtSizeEqCheck1DFastR2012b(loop_ub, i7, &l_emlrtECI, sp);
    st.site = &vb_emlrtRSI;
    for (i7 = 0; i7 < loop_ub; i7++) {
      a_data[i7] = z_data[i7] - b_y->data[i7];
    }

    for (i7 = 0; i7 < loop_ub; i7++) {
      alpha1 = z_data[i7] - c_y->data[i7];
      z_data[i7] = alpha1;
    }

    b_st.site = &db_emlrtRSI;
    if (loop_ub == 1) {
      alpha1 = 0.0;
      i7 = 0;
      while (i7 <= 0) {
        alpha1 += a_data[0] * z_data[0];
        i7 = 1;
      }
    } else {
      b_st.site = &je_emlrtRSI;
      c_st.site = &ke_emlrtRSI;
      if (loop_ub < 1) {
        alpha1 = 0.0;
      } else {
        n_t = (ptrdiff_t)(loop_ub);
        m_t = (ptrdiff_t)(1);
        k_t = (ptrdiff_t)(1);
        alpha1_t = (double *)(&a_data[0]);
        Aia0_t = (double *)(&z_data[0]);
        alpha1 = ddot(&n_t, alpha1_t, &m_t, Aia0_t, &k_t);
      }
    }

    i7 = Sigma_s0->size[1];
    i = 1 + ll;
    Sigma_s0->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &p_emlrtBCI, sp)
      - 1] = alpha1 / (real_T)Y1->size[1];
    ll++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&b_b);
  emxFree_real_T(&b);
  emxFree_real_T(&b_a);
  emxFree_real_T(&d_y);
  emxFree_real_T(&a);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_y);
  emxFree_real_T(&y);
  emxFree_real_T(&r0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  int32_T b_size[2])
{
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *m6;
  char_T cv12[45];
  int32_T i;
  static const char_T cv13[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 21 };

  char_T cv14[21];
  static const char_T cv15[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if (!(a->size[1] == b_size[0])) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      y = NULL;
      m6 = emlrtCreateCharArray(2, iv8);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(sp, 45, m6, cv12);
      emlrtAssign(&y, m6);
      st.site = &ef_emlrtRSI;
      b_st.site = &mf_emlrtRSI;
      error(&st, b_message(&b_st, y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      b_y = NULL;
      m6 = emlrtCreateCharArray(2, iv9);
      for (i = 0; i < 21; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(sp, 21, m6, cv14);
      emlrtAssign(&b_y, m6);
      st.site = &ff_emlrtRSI;
      b_st.site = &nf_emlrtRSI;
      error(&st, b_message(&b_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }
}

void b_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T lda,
                 const real_T B_data[], int32_T ldb, emxArray_real_T *C, int32_T
                 ldc)
{
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  if ((m < 1) || (k < 1)) {
  } else {
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(m);
    n_t = (ptrdiff_t)(3);
    k_t = (ptrdiff_t)(k);
    lda_t = (ptrdiff_t)(lda);
    ldb_t = (ptrdiff_t)(ldb);
    ldc_t = (ptrdiff_t)(ldc);
    alpha1_t = (double *)(&alpha1);
    Aia0_t = (double *)(&A->data[0]);
    Bib0_t = (double *)(&B_data[0]);
    beta1_t = (double *)(&beta1);
    Cic0_t = (double *)(&C->data[0]);
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
          &ldb_t, beta1_t, Cic0_t, &ldc_t);
  }
}

/* End of code generation (bSSupdate.c) */
