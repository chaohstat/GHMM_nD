/*
 * bbarupdate.c
 *
 * Code generation for function 'bbarupdate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "bbarupdate.h"
#include "SREM_EM_emxutil.h"
#include "taufun.h"
#include "mldivide.h"
#include "diag.h"
#include "squeeze.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo ne_emlrtRSI = { 3, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtRSInfo oe_emlrtRSI = { 4, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtRSInfo pe_emlrtRSI = { 5, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtRSInfo qe_emlrtRSI = { 6, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtRSInfo re_emlrtRSI = { 7, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtRTEInfo x_emlrtRTEI = { 1, 23, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtECInfo m_emlrtECI = { 2, 5, 16, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtECInfo n_emlrtECI = { -1, 6, 1, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

static emlrtECInfo o_emlrtECI = { -1, 7, 1, "bbarupdate",
  "D:\\CODE\\GHMM_V3\\subfuns\\bbarupdate.m" };

/* Function Definitions */
void bbarupdate(const emlrtStack *sp, const emxArray_real_T *Y1, const
                emxArray_real_T *Pb1, const emxArray_real_T *W1, const
                emxArray_real_T *beta, const emxArray_real_T *Sigma_s, real_T q,
                real_T betabar0_data[], int32_T betabar0_size[2])
{
  emxArray_real_T *y;
  int32_T i;
  int32_T b;
  emxArray_real_T *b_Pb1;
  int32_T loop_ub;
  int32_T i9;
  emxArray_real_T *a;
  emxArray_real_T *b_b;
  uint32_T unnamed_idx_0;
  emxArray_real_T *c_b;
  const mxArray *b_y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *m14;
  char_T cv35[45];
  static const char_T cv36[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *c_y;
  static const int32_T iv22[2] = { 1, 21 };

  char_T cv37[21];
  static const char_T cv38[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *C;
  emxArray_real_T *r3;
  int32_T b_loop_ub;
  int32_T i10;
  uint32_T unnamed_idx_1;
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
  const mxArray *d_y;
  static const int32_T iv23[2] = { 1, 45 };

  const mxArray *e_y;
  static const int32_T iv24[2] = { 1, 21 };

  emxArray_real_T *f_y;
  emxArray_real_T *c_Pb1;
  const mxArray *g_y;
  static const int32_T iv25[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv26[2] = { 1, 21 };

  const mxArray *i_y;
  static const int32_T iv27[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv28[2] = { 1, 21 };

  emxArray_real_T *k_y;
  emxArray_real_T *d_b;
  const mxArray *l_y;
  static const int32_T iv29[2] = { 1, 45 };

  const mxArray *m_y;
  static const int32_T iv30[2] = { 1, 21 };

  int32_T e_b[2];
  int32_T b_C[2];
  const mxArray *n_y;
  static const int32_T iv31[2] = { 1, 45 };

  const mxArray *o_y;
  static const int32_T iv32[2] = { 1, 21 };

  int32_T tmp_data[10];
  int32_T tmp_size[1];
  real_T b_tmp_data[10];
  int32_T iv33[1];
  int32_T iv34[1];
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
  c_emxInit_real_T(sp, &y, 1, &x_emlrtRTEI, true);
  betabar0_size[0] = (int32_T)q;
  betabar0_size[1] = 2;
  i = (int32_T)q << 1;
  for (b = 0; b < i; b++) {
    betabar0_data[b] = 0.0;
  }

  b_emxInit_real_T(sp, &b_Pb1, 3, &x_emlrtRTEI, true);
  i = Pb1->size[1];
  loop_ub = Pb1->size[2];
  b = b_Pb1->size[0] * b_Pb1->size[1] * b_Pb1->size[2];
  b_Pb1->size[0] = 1;
  b_Pb1->size[1] = i;
  b_Pb1->size[2] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_Pb1, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  for (b = 0; b < loop_ub; b++) {
    for (i9 = 0; i9 < i; i9++) {
      b_Pb1->data[b_Pb1->size[0] * i9 + b_Pb1->size[0] * b_Pb1->size[1] * b] =
        Pb1->data[(Pb1->size[0] * i9 + Pb1->size[0] * Pb1->size[1] * b) + 1];
    }
  }

  emxInit_real_T(sp, &a, 2, &x_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_b, 1, &x_emlrtRTEI, true);
  st.site = &ne_emlrtRSI;
  squeeze(&st, b_Pb1, a);
  st.site = &ne_emlrtRSI;
  b = b_b->size[0];
  b_b->size[0] = Sigma_s->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = Sigma_s->size[1];
  emxFree_real_T(&b_Pb1);
  for (b = 0; b < i; b++) {
    b_b->data[b] = 1.0 / Sigma_s->data[Sigma_s->size[0] * b];
  }

  b_st.site = &db_emlrtRSI;
  c_dynamic_size_checks(&b_st, a, b_b);
  if ((a->size[1] == 1) || (b_b->size[0] == 1)) {
    b = y->size[0];
    y->size[0] = a->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = a->size[0];
    for (b = 0; b < i; b++) {
      y->data[b] = 0.0;
      loop_ub = a->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        y->data[b] += a->data[b + a->size[0] * i9] * b_b->data[i9];
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    b = y->size[0];
    y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0;
    for (b = 0; b < i; b++) {
      y->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    d_eml_xgemm(a->size[0], a->size[1], a, a->size[0], b_b, a->size[1], y,
                a->size[0]);
  }

  emxInit_real_T(&st, &c_b, 2, &x_emlrtRTEI, true);
  st.site = &ne_emlrtRSI;
  b_diag(&st, y, c_b);
  st.site = &ne_emlrtRSI;
  b = a->size[0] * a->size[1];
  a->size[0] = W1->size[0];
  a->size[1] = W1->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)a, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = W1->size[0] * W1->size[1];
  for (b = 0; b < i; b++) {
    a->data[b] = W1->data[b];
  }

  b_st.site = &db_emlrtRSI;
  if (!(W1->size[1] == c_b->size[0])) {
    if (((W1->size[0] == 1) && (W1->size[1] == 1)) || ((c_b->size[0] == 1) &&
         (c_b->size[1] == 1))) {
      b_y = NULL;
      m14 = emlrtCreateCharArray(2, iv21);
      for (i = 0; i < 45; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m14, cv35);
      emlrtAssign(&b_y, m14);
      c_st.site = &ef_emlrtRSI;
      d_st.site = &mf_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      c_y = NULL;
      m14 = emlrtCreateCharArray(2, iv22);
      for (i = 0; i < 21; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m14, cv37);
      emlrtAssign(&c_y, m14);
      c_st.site = &ff_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &C, 2, &x_emlrtRTEI, true);
  emxInit_real_T(&st, &r3, 2, &x_emlrtRTEI, true);
  if ((W1->size[1] == 1) || (c_b->size[0] == 1)) {
    b = C->size[0] * C->size[1];
    C->size[0] = W1->size[0];
    C->size[1] = c_b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = W1->size[0];
    for (b = 0; b < i; b++) {
      loop_ub = c_b->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        C->data[b + C->size[0] * i9] = 0.0;
        b_loop_ub = W1->size[1];
        for (i10 = 0; i10 < b_loop_ub; i10++) {
          C->data[b + C->size[0] * i9] += W1->data[b + W1->size[0] * i10] *
            c_b->data[i10 + c_b->size[0] * i9];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)W1->size[0];
    unnamed_idx_1 = (uint32_T)c_b->size[1];
    b = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      r3->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      C->data[b] = 0.0;
    }

    if ((W1->size[0] < 1) || (c_b->size[1] < 1) || (W1->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(W1->size[0]);
      n_t = (ptrdiff_t)(c_b->size[1]);
      k_t = (ptrdiff_t)(W1->size[1]);
      lda_t = (ptrdiff_t)(W1->size[0]);
      ldb_t = (ptrdiff_t)(W1->size[1]);
      ldc_t = (ptrdiff_t)(W1->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&c_b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  st.site = &ne_emlrtRSI;
  b = c_b->size[0] * c_b->size[1];
  c_b->size[0] = W1->size[1];
  c_b->size[1] = W1->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)c_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = W1->size[0];
  for (b = 0; b < i; b++) {
    loop_ub = W1->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      c_b->data[i9 + c_b->size[0] * b] = W1->data[b + W1->size[0] * i9];
    }
  }

  b_st.site = &db_emlrtRSI;
  if (!(C->size[1] == c_b->size[0])) {
    if (((C->size[0] == 1) && (C->size[1] == 1)) || ((c_b->size[0] == 1) &&
         (c_b->size[1] == 1))) {
      d_y = NULL;
      m14 = emlrtCreateCharArray(2, iv23);
      for (i = 0; i < 45; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m14, cv35);
      emlrtAssign(&d_y, m14);
      c_st.site = &ef_emlrtRSI;
      d_st.site = &mf_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      e_y = NULL;
      m14 = emlrtCreateCharArray(2, iv24);
      for (i = 0; i < 21; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m14, cv37);
      emlrtAssign(&e_y, m14);
      c_st.site = &ff_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &f_y, 2, &x_emlrtRTEI, true);
  if ((C->size[1] == 1) || (c_b->size[0] == 1)) {
    b = f_y->size[0] * f_y->size[1];
    f_y->size[0] = C->size[0];
    f_y->size[1] = c_b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)f_y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = C->size[0];
    for (b = 0; b < i; b++) {
      loop_ub = c_b->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        f_y->data[b + f_y->size[0] * i9] = 0.0;
        b_loop_ub = C->size[1];
        for (i10 = 0; i10 < b_loop_ub; i10++) {
          f_y->data[b + f_y->size[0] * i9] += C->data[b + C->size[0] * i10] *
            c_b->data[i10 + c_b->size[0] * i9];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)C->size[0];
    unnamed_idx_1 = (uint32_T)c_b->size[1];
    b = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      r3->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b = f_y->size[0] * f_y->size[1];
    f_y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)f_y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = f_y->size[0] * f_y->size[1];
    f_y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)f_y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      f_y->data[b] = 0.0;
    }

    if ((C->size[0] < 1) || (c_b->size[1] < 1) || (C->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(C->size[0]);
      n_t = (ptrdiff_t)(c_b->size[1]);
      k_t = (ptrdiff_t)(C->size[1]);
      lda_t = (ptrdiff_t)(C->size[0]);
      ldb_t = (ptrdiff_t)(C->size[1]);
      ldc_t = (ptrdiff_t)(C->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&C->data[0]);
      Bib0_t = (double *)(&c_b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&f_y->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  b_emxInit_real_T(&st, &c_Pb1, 3, &x_emlrtRTEI, true);
  i = Pb1->size[1];
  loop_ub = Pb1->size[2];
  b = c_Pb1->size[0] * c_Pb1->size[1] * c_Pb1->size[2];
  c_Pb1->size[0] = 1;
  c_Pb1->size[1] = i;
  c_Pb1->size[2] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_Pb1, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  for (b = 0; b < loop_ub; b++) {
    for (i9 = 0; i9 < i; i9++) {
      c_Pb1->data[c_Pb1->size[0] * i9 + c_Pb1->size[0] * c_Pb1->size[1] * b] =
        Pb1->data[(Pb1->size[0] * i9 + Pb1->size[0] * Pb1->size[1] * b) + 2];
    }
  }

  st.site = &oe_emlrtRSI;
  squeeze(&st, c_Pb1, a);
  st.site = &oe_emlrtRSI;
  b = b_b->size[0];
  b_b->size[0] = Sigma_s->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = Sigma_s->size[1];
  emxFree_real_T(&c_Pb1);
  for (b = 0; b < i; b++) {
    b_b->data[b] = 1.0 / Sigma_s->data[Sigma_s->size[0] * b];
  }

  b_st.site = &db_emlrtRSI;
  c_dynamic_size_checks(&b_st, a, b_b);
  if ((a->size[1] == 1) || (b_b->size[0] == 1)) {
    b = y->size[0];
    y->size[0] = a->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = a->size[0];
    for (b = 0; b < i; b++) {
      y->data[b] = 0.0;
      loop_ub = a->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        y->data[b] += a->data[b + a->size[0] * i9] * b_b->data[i9];
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    b = y->size[0];
    y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0;
    for (b = 0; b < i; b++) {
      y->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    d_eml_xgemm(a->size[0], a->size[1], a, a->size[0], b_b, a->size[1], y,
                a->size[0]);
  }

  st.site = &oe_emlrtRSI;
  b_diag(&st, y, c_b);
  st.site = &oe_emlrtRSI;
  b = a->size[0] * a->size[1];
  a->size[0] = W1->size[0];
  a->size[1] = W1->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)a, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = W1->size[0] * W1->size[1];
  for (b = 0; b < i; b++) {
    a->data[b] = W1->data[b];
  }

  b_st.site = &db_emlrtRSI;
  if (!(W1->size[1] == c_b->size[0])) {
    if (((W1->size[0] == 1) && (W1->size[1] == 1)) || ((c_b->size[0] == 1) &&
         (c_b->size[1] == 1))) {
      g_y = NULL;
      m14 = emlrtCreateCharArray(2, iv25);
      for (i = 0; i < 45; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m14, cv35);
      emlrtAssign(&g_y, m14);
      c_st.site = &ef_emlrtRSI;
      d_st.site = &mf_emlrtRSI;
      error(&c_st, b_message(&d_st, g_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      h_y = NULL;
      m14 = emlrtCreateCharArray(2, iv26);
      for (i = 0; i < 21; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m14, cv37);
      emlrtAssign(&h_y, m14);
      c_st.site = &ff_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      error(&c_st, b_message(&d_st, h_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((W1->size[1] == 1) || (c_b->size[0] == 1)) {
    b = C->size[0] * C->size[1];
    C->size[0] = W1->size[0];
    C->size[1] = c_b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = W1->size[0];
    for (b = 0; b < i; b++) {
      loop_ub = c_b->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        C->data[b + C->size[0] * i9] = 0.0;
        b_loop_ub = W1->size[1];
        for (i10 = 0; i10 < b_loop_ub; i10++) {
          C->data[b + C->size[0] * i9] += W1->data[b + W1->size[0] * i10] *
            c_b->data[i10 + c_b->size[0] * i9];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)W1->size[0];
    unnamed_idx_1 = (uint32_T)c_b->size[1];
    b = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      r3->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      C->data[b] = 0.0;
    }

    if ((W1->size[0] < 1) || (c_b->size[1] < 1) || (W1->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(W1->size[0]);
      n_t = (ptrdiff_t)(c_b->size[1]);
      k_t = (ptrdiff_t)(W1->size[1]);
      lda_t = (ptrdiff_t)(W1->size[0]);
      ldb_t = (ptrdiff_t)(W1->size[1]);
      ldc_t = (ptrdiff_t)(W1->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&c_b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  st.site = &oe_emlrtRSI;
  b = c_b->size[0] * c_b->size[1];
  c_b->size[0] = W1->size[1];
  c_b->size[1] = W1->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)c_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = W1->size[0];
  for (b = 0; b < i; b++) {
    loop_ub = W1->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      c_b->data[i9 + c_b->size[0] * b] = W1->data[b + W1->size[0] * i9];
    }
  }

  b_st.site = &db_emlrtRSI;
  if (!(C->size[1] == c_b->size[0])) {
    if (((C->size[0] == 1) && (C->size[1] == 1)) || ((c_b->size[0] == 1) &&
         (c_b->size[1] == 1))) {
      i_y = NULL;
      m14 = emlrtCreateCharArray(2, iv27);
      for (i = 0; i < 45; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m14, cv35);
      emlrtAssign(&i_y, m14);
      c_st.site = &ef_emlrtRSI;
      d_st.site = &mf_emlrtRSI;
      error(&c_st, b_message(&d_st, i_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      j_y = NULL;
      m14 = emlrtCreateCharArray(2, iv28);
      for (i = 0; i < 21; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m14, cv37);
      emlrtAssign(&j_y, m14);
      c_st.site = &ff_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      error(&c_st, b_message(&d_st, j_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &k_y, 2, &x_emlrtRTEI, true);
  if ((C->size[1] == 1) || (c_b->size[0] == 1)) {
    b = k_y->size[0] * k_y->size[1];
    k_y->size[0] = C->size[0];
    k_y->size[1] = c_b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)k_y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = C->size[0];
    for (b = 0; b < i; b++) {
      loop_ub = c_b->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        k_y->data[b + k_y->size[0] * i9] = 0.0;
        b_loop_ub = C->size[1];
        for (i10 = 0; i10 < b_loop_ub; i10++) {
          k_y->data[b + k_y->size[0] * i9] += C->data[b + C->size[0] * i10] *
            c_b->data[i10 + c_b->size[0] * i9];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)C->size[0];
    unnamed_idx_1 = (uint32_T)c_b->size[1];
    b = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      r3->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b = k_y->size[0] * k_y->size[1];
    k_y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)k_y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = k_y->size[0] * k_y->size[1];
    k_y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)k_y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      k_y->data[b] = 0.0;
    }

    if ((C->size[0] < 1) || (c_b->size[1] < 1) || (C->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(C->size[0]);
      n_t = (ptrdiff_t)(c_b->size[1]);
      k_t = (ptrdiff_t)(C->size[1]);
      lda_t = (ptrdiff_t)(C->size[0]);
      ldb_t = (ptrdiff_t)(C->size[1]);
      ldc_t = (ptrdiff_t)(C->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&C->data[0]);
      Bib0_t = (double *)(&c_b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&k_y->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxInit_real_T(&st, &d_b, 2, &x_emlrtRTEI, true);
  b = d_b->size[0] * d_b->size[1];
  d_b->size[0] = Y1->size[1];
  d_b->size[1] = Y1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)d_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = Y1->size[0];
  for (b = 0; b < i; b++) {
    loop_ub = Y1->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      d_b->data[i9 + d_b->size[0] * b] = Y1->data[b + Y1->size[0] * i9];
    }
  }

  st.site = &pe_emlrtRSI;
  b = a->size[0] * a->size[1];
  a->size[0] = W1->size[1];
  a->size[1] = W1->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = W1->size[0];
  for (b = 0; b < i; b++) {
    loop_ub = W1->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      a->data[i9 + a->size[0] * b] = W1->data[b + W1->size[0] * i9];
    }
  }

  b = c_b->size[0] * c_b->size[1];
  c_b->size[0] = beta->size[0];
  c_b->size[1] = beta->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = beta->size[0] * beta->size[1];
  for (b = 0; b < i; b++) {
    c_b->data[b] = beta->data[b];
  }

  b_st.site = &db_emlrtRSI;
  if (!(a->size[1] == beta->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((beta->size[0] == 1) &&
         (beta->size[1] == 1))) {
      l_y = NULL;
      m14 = emlrtCreateCharArray(2, iv29);
      for (i = 0; i < 45; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m14, cv35);
      emlrtAssign(&l_y, m14);
      c_st.site = &ef_emlrtRSI;
      d_st.site = &mf_emlrtRSI;
      error(&c_st, b_message(&d_st, l_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      m_y = NULL;
      m14 = emlrtCreateCharArray(2, iv30);
      for (i = 0; i < 21; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m14, cv37);
      emlrtAssign(&m_y, m14);
      c_st.site = &ff_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      error(&c_st, b_message(&d_st, m_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (beta->size[0] == 1)) {
    b = C->size[0] * C->size[1];
    C->size[0] = a->size[0];
    C->size[1] = beta->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = a->size[0];
    for (b = 0; b < i; b++) {
      loop_ub = beta->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        C->data[b + C->size[0] * i9] = 0.0;
        b_loop_ub = a->size[1];
        for (i10 = 0; i10 < b_loop_ub; i10++) {
          C->data[b + C->size[0] * i9] += a->data[b + a->size[0] * i10] *
            beta->data[i10 + beta->size[0] * i9];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)beta->size[1];
    b = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      r3->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      C->data[b] = 0.0;
    }

    if ((a->size[0] < 1) || (beta->size[1] < 1) || (a->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(a->size[0]);
      n_t = (ptrdiff_t)(beta->size[1]);
      k_t = (ptrdiff_t)(a->size[1]);
      lda_t = (ptrdiff_t)(a->size[0]);
      ldb_t = (ptrdiff_t)(a->size[1]);
      ldc_t = (ptrdiff_t)(a->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&c_b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&c_b);
  for (b = 0; b < 2; b++) {
    e_b[b] = d_b->size[b];
  }

  for (b = 0; b < 2; b++) {
    b_C[b] = C->size[b];
  }

  emlrtSizeEqCheck2DFastR2012b(e_b, b_C, &m_emlrtECI, sp);
  st.site = &pe_emlrtRSI;
  b = a->size[0] * a->size[1];
  a->size[0] = W1->size[0];
  a->size[1] = W1->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)a, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = W1->size[0] * W1->size[1];
  for (b = 0; b < i; b++) {
    a->data[b] = W1->data[b];
  }

  b = d_b->size[0] * d_b->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)d_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = d_b->size[0];
  b = d_b->size[1];
  i *= b;
  for (b = 0; b < i; b++) {
    d_b->data[b] -= C->data[b];
  }

  b_st.site = &db_emlrtRSI;
  if (!(W1->size[1] == d_b->size[0])) {
    if (((W1->size[0] == 1) && (W1->size[1] == 1)) || ((d_b->size[0] == 1) &&
         (d_b->size[1] == 1))) {
      n_y = NULL;
      m14 = emlrtCreateCharArray(2, iv31);
      for (i = 0; i < 45; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m14, cv35);
      emlrtAssign(&n_y, m14);
      c_st.site = &ef_emlrtRSI;
      d_st.site = &mf_emlrtRSI;
      error(&c_st, b_message(&d_st, n_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      o_y = NULL;
      m14 = emlrtCreateCharArray(2, iv32);
      for (i = 0; i < 21; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m14, cv37);
      emlrtAssign(&o_y, m14);
      c_st.site = &ff_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      error(&c_st, b_message(&d_st, o_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((W1->size[1] == 1) || (d_b->size[0] == 1)) {
    b = C->size[0] * C->size[1];
    C->size[0] = W1->size[0];
    C->size[1] = d_b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = W1->size[0];
    for (b = 0; b < i; b++) {
      loop_ub = d_b->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        C->data[b + C->size[0] * i9] = 0.0;
        b_loop_ub = W1->size[1];
        for (i10 = 0; i10 < b_loop_ub; i10++) {
          C->data[b + C->size[0] * i9] += W1->data[b + W1->size[0] * i10] *
            d_b->data[i10 + d_b->size[0] * i9];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)W1->size[0];
    unnamed_idx_1 = (uint32_T)d_b->size[1];
    b = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      r3->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    b = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (b = 0; b < i; b++) {
      C->data[b] = 0.0;
    }

    if ((W1->size[0] < 1) || (d_b->size[1] < 1) || (W1->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(W1->size[0]);
      n_t = (ptrdiff_t)(d_b->size[1]);
      k_t = (ptrdiff_t)(W1->size[1]);
      lda_t = (ptrdiff_t)(W1->size[0]);
      ldb_t = (ptrdiff_t)(W1->size[1]);
      ldc_t = (ptrdiff_t)(W1->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&d_b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r3);
  emxFree_real_T(&d_b);
  emxFree_real_T(&a);
  st.site = &pe_emlrtRSI;
  b = b_b->size[0];
  b_b->size[0] = Sigma_s->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, b, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  i = Sigma_s->size[1];
  for (b = 0; b < i; b++) {
    b_b->data[b] = Sigma_s->data[Sigma_s->size[0] * b];
  }

  b_st.site = &db_emlrtRSI;
  c_dynamic_size_checks(&b_st, C, b_b);
  if ((C->size[1] == 1) || (b_b->size[0] == 1)) {
    b = y->size[0];
    y->size[0] = C->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = C->size[0];
    for (b = 0; b < i; b++) {
      y->data[b] = 0.0;
      loop_ub = C->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        y->data[b] += C->data[b + C->size[0] * i9] * b_b->data[i9];
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)C->size[0];
    b = y->size[0];
    y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)y, b, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
    i = (int32_T)unnamed_idx_0;
    for (b = 0; b < i; b++) {
      y->data[b] = 0.0;
    }

    b_st.site = &cb_emlrtRSI;
    d_eml_xgemm(C->size[0], C->size[1], C, C->size[0], b_b, C->size[1], y,
                C->size[0]);
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&C);
  i = (int32_T)q;
  for (b = 0; b < i; b++) {
    tmp_data[b] = b;
  }

  st.site = &qe_emlrtRSI;
  b_mldivide(&st, f_y->data, f_y->size, y->data, y->size, b_tmp_data, tmp_size);
  iv33[0] = (int32_T)q;
  emlrtSubAssignSizeCheckR2012b(iv33, 1, tmp_size, 1, &n_emlrtECI, sp);
  i = tmp_size[0];
  emxFree_real_T(&f_y);
  for (b = 0; b < i; b++) {
    betabar0_data[tmp_data[b]] = b_tmp_data[b];
  }

  i = (int32_T)q;
  for (b = 0; b < i; b++) {
    tmp_data[b] = b;
  }

  st.site = &re_emlrtRSI;
  b_mldivide(&st, k_y->data, k_y->size, y->data, y->size, b_tmp_data, tmp_size);
  iv34[0] = (int32_T)q;
  emlrtSubAssignSizeCheckR2012b(iv34, 1, tmp_size, 1, &o_emlrtECI, sp);
  i = tmp_size[0];
  emxFree_real_T(&k_y);
  for (b = 0; b < i; b++) {
    betabar0_data[tmp_data[b] + (int32_T)q] = b_tmp_data[b];
  }

  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b)
{
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv31[45];
  int32_T i;
  static const char_T cv32[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv20[2] = { 1, 21 };

  char_T cv33[21];
  static const char_T cv34[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      y = NULL;
      m13 = emlrtCreateCharArray(2, iv19);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(sp, 45, m13, cv31);
      emlrtAssign(&y, m13);
      st.site = &ef_emlrtRSI;
      b_st.site = &mf_emlrtRSI;
      error(&st, b_message(&b_st, y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      b_y = NULL;
      m13 = emlrtCreateCharArray(2, iv20);
      for (i = 0; i < 21; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(sp, 21, m13, cv33);
      emlrtAssign(&b_y, m13);
      st.site = &ff_emlrtRSI;
      b_st.site = &nf_emlrtRSI;
      error(&st, b_message(&b_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }
}

void d_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T lda,
                 const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C,
                 int32_T ldc)
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
    n_t = (ptrdiff_t)(1);
    k_t = (ptrdiff_t)(k);
    lda_t = (ptrdiff_t)(lda);
    ldb_t = (ptrdiff_t)(ldb);
    ldc_t = (ptrdiff_t)(ldc);
    alpha1_t = (double *)(&alpha1);
    Aia0_t = (double *)(&A->data[0]);
    Bib0_t = (double *)(&B->data[0]);
    beta1_t = (double *)(&beta1);
    Cic0_t = (double *)(&C->data[0]);
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
          &ldb_t, beta1_t, Cic0_t, &ldc_t);
  }
}

/* End of code generation (bbarupdate.c) */
