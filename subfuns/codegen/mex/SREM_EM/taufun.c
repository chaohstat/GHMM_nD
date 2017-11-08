/*
 * taufun.c
 *
 * Code generation for function 'taufun'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "taufun.h"
#include "SREM_EM_emxutil.h"
#include "exp.h"
#include "abs.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo we_emlrtRSI = { 6, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtRSInfo xe_emlrtRSI = { 7, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtRSInfo ye_emlrtRSI = { 8, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtRSInfo af_emlrtRSI = { 9, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtRSInfo bf_emlrtRSI = { 10, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 1, 20, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 4, 5, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtRTEInfo db_emlrtRTEI = { 4, 17, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtECInfo p_emlrtECI = { -1, 10, 25, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtECInfo q_emlrtECI = { -1, 9, 25, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtECInfo r_emlrtECI = { -1, 8, 25, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 7, 34, "b0", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtECInfo s_emlrtECI = { -1, 7, 24, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 6, 58, "y", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtECInfo t_emlrtECI = { -1, 6, 50, "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m" };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 6, 25, "DIC", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 4, 28, "Y11DIC", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 4, 12, "b", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 6, 25, "DICind", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 6, 50, "y", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 7, 24, "b0", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 8, 25, "b0", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 9, 25, "b0", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 10, 25, "b0", "taufun",
  "D:\\CODE\\GHMM_V3\\subfuns\\taufun.m", 0 };

/* Function Definitions */
void taufun(const emlrtStack *sp, real_T tau, const emxArray_real_T *b, const
            emxArray_real_T *Y11DIC, real_T N0, const emxArray_real_T *DIC,
            const emxArray_real_T *DICind, real_T *f1, real_T *f2)
{
  int32_T ii;
  emxArray_real_T *b0;
  emxArray_real_T *y;
  int32_T loop_ub;
  int32_T i13;
  int32_T b_ii;
  int32_T kk;
  int32_T idx;
  boolean_T x_data[6];
  int32_T ii_data[6];
  boolean_T exitg1;
  boolean_T guard1 = false;
  const mxArray *b_y;
  const mxArray *m17;
  int32_T sind_data[6];
  real_T y_data[6];
  real_T ub;
  int32_T y_size[1];
  int32_T Dis_size[1];
  real_T Dis_data[6];
  int32_T a_size_idx_1;
  real_T a_data[1200];
  real_T b_data[1200];
  const mxArray *c_y;
  static const int32_T iv37[2] = { 1, 45 };

  char_T cv44[45];
  static const char_T cv45[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *d_y;
  static const int32_T iv38[2] = { 1, 21 };

  char_T cv46[21];
  static const char_T cv47[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  const mxArray *e_y;
  static const int32_T iv39[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv40[2] = { 1, 21 };

  real_T ub1;
  const mxArray *g_y;
  static const int32_T iv41[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv42[2] = { 1, 21 };

  real_T ub2;
  const mxArray *i_y;
  static const int32_T iv43[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv44[2] = { 1, 21 };

  real_T ub3;
  real_T a;
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
  *f1 = 0.0;
  *f2 = 0.0;
  ii = 0;
  c_emxInit_real_T(sp, &b0, 1, &cb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &y, 1, &db_emlrtRTEI, true);
  while (ii <= (int32_T)N0 - 1) {
    loop_ub = b->size[0];
    i13 = b->size[1];
    b_ii = emlrtDynamicBoundsCheckFastR2012b(ii + 1, 1, i13, &u_emlrtBCI, sp);
    i13 = b0->size[0];
    b0->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)b0, i13, (int32_T)sizeof(real_T),
                      &bb_emlrtRTEI);
    for (i13 = 0; i13 < loop_ub; i13++) {
      b0->data[i13] = b->data[i13 + b->size[0] * (b_ii - 1)];
    }

    loop_ub = Y11DIC->size[0];
    i13 = Y11DIC->size[1];
    b_ii = emlrtDynamicBoundsCheckFastR2012b(ii + 1, 1, i13, &t_emlrtBCI, sp);
    i13 = y->size[0];
    y->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)y, i13, (int32_T)sizeof(real_T),
                      &bb_emlrtRTEI);
    for (i13 = 0; i13 < loop_ub; i13++) {
      y->data[i13] = Y11DIC->data[i13 + Y11DIC->size[0] * (b_ii - 1)];
    }

    kk = 0;
    while (kk <= DICind->size[0] - 1) {
      st.site = &we_emlrtRSI;
      loop_ub = DIC->size[1];
      i13 = DIC->size[0];
      idx = DICind->size[0];
      b_ii = 1 + kk;
      idx = (int32_T)DICind->data[emlrtDynamicBoundsCheckFastR2012b(b_ii, 1, idx,
        &v_emlrtBCI, &st) - 1];
      idx = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i13, &s_emlrtBCI, &st);
      for (i13 = 0; i13 < loop_ub; i13++) {
        x_data[i13] = (DIC->data[(idx + DIC->size[0] * i13) - 1] == 1.0);
      }

      b_st.site = &p_emlrtRSI;
      idx = 0;
      c_st.site = &q_emlrtRSI;
      b_ii = 1;
      exitg1 = false;
      while ((!exitg1) && (b_ii <= loop_ub)) {
        guard1 = false;
        if (x_data[b_ii - 1]) {
          idx++;
          ii_data[idx - 1] = b_ii;
          if (idx >= loop_ub) {
            exitg1 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          b_ii++;
        }
      }

      if (idx <= loop_ub) {
      } else {
        b_y = NULL;
        m17 = emlrtCreateString("Assertion failed.");
        emlrtAssign(&b_y, m17);
        c_st.site = &gf_emlrtRSI;
        error(&c_st, b_y, &d_emlrtMCI);
      }

      if (loop_ub == 1) {
        if (idx == 0) {
          loop_ub = 0;
        }
      } else if (1 > idx) {
        loop_ub = 0;
      } else {
        loop_ub = idx;
      }

      for (i13 = 0; i13 < loop_ub; i13++) {
        sind_data[i13] = ii_data[i13];
      }

      i13 = Y11DIC->size[0];
      emlrtVectorVectorIndexCheckR2012b(i13, 1, 1, loop_ub, &t_emlrtECI, sp);
      i13 = Y11DIC->size[0];
      for (idx = 0; idx < loop_ub; idx++) {
        b_ii = sind_data[idx];
        emlrtDynamicBoundsCheckFastR2012b(b_ii, 1, i13, &w_emlrtBCI, sp);
      }

      i13 = Y11DIC->size[0];
      idx = kk + 1;
      emlrtDynamicBoundsCheckFastR2012b(idx, 1, i13, &r_emlrtBCI, sp);
      ub = Y11DIC->data[kk + Y11DIC->size[0] * ii];
      y_size[0] = loop_ub;
      for (i13 = 0; i13 < loop_ub; i13++) {
        y_data[i13] = y->data[sind_data[i13] - 1] - ub;
      }

      c_abs(y_data, y_size, Dis_data, Dis_size);
      idx = Dis_size[0];
      for (i13 = 0; i13 < idx; i13++) {
        Dis_data[i13] *= -0.5;
      }

      d_exp(Dis_data, Dis_size);
      i13 = b->size[0];
      emlrtVectorVectorIndexCheckR2012b(i13, 1, 1, loop_ub, &s_emlrtECI, sp);
      st.site = &xe_emlrtRSI;
      a_size_idx_1 = Dis_size[0];
      idx = Dis_size[0];
      for (i13 = 0; i13 < idx; i13++) {
        a_data[i13] = Dis_data[i13];
      }

      i13 = b->size[0];
      idx = b->size[0];
      b_ii = 1 + kk;
      emlrtDynamicBoundsCheckFastR2012b(b_ii, 1, idx, &q_emlrtBCI, &st);
      ub = b->data[kk + b->size[0] * ii];
      for (idx = 0; idx < loop_ub; idx++) {
        b_ii = sind_data[idx];
        b_data[idx] = (b0->data[emlrtDynamicBoundsCheckFastR2012b(b_ii, 1, i13,
          &x_emlrtBCI, &st) - 1] == ub);
      }

      b_st.site = &db_emlrtRSI;
      if (!(Dis_size[0] == loop_ub)) {
        if ((Dis_size[0] == 1) || (loop_ub == 1)) {
          c_y = NULL;
          m17 = emlrtCreateCharArray(2, iv37);
          for (idx = 0; idx < 45; idx++) {
            cv44[idx] = cv45[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 45, m17, cv44);
          emlrtAssign(&c_y, m17);
          c_st.site = &ef_emlrtRSI;
          d_st.site = &mf_emlrtRSI;
          error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
        } else {
          d_y = NULL;
          m17 = emlrtCreateCharArray(2, iv38);
          for (idx = 0; idx < 21; idx++) {
            cv46[idx] = cv47[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 21, m17, cv46);
          emlrtAssign(&d_y, m17);
          c_st.site = &ff_emlrtRSI;
          d_st.site = &nf_emlrtRSI;
          error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
        }
      }

      if ((Dis_size[0] == 1) || (loop_ub == 1)) {
        ub = 0.0;
        for (i13 = 0; i13 < a_size_idx_1; i13++) {
          ub += a_data[i13] * b_data[i13];
        }
      } else {
        b_st.site = &je_emlrtRSI;
        c_st.site = &ke_emlrtRSI;
        if (Dis_size[0] < 1) {
          ub = 0.0;
        } else {
          n_t = (ptrdiff_t)(Dis_size[0]);
          incx_t = (ptrdiff_t)(1);
          incy_t = (ptrdiff_t)(1);
          xix0_t = (double *)(&a_data[0]);
          yiy0_t = (double *)(&b_data[0]);
          ub = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
        }
      }

      i13 = b->size[0];
      emlrtVectorVectorIndexCheckR2012b(i13, 1, 1, loop_ub, &r_emlrtECI, sp);
      st.site = &ye_emlrtRSI;
      a_size_idx_1 = Dis_size[0];
      idx = Dis_size[0];
      for (i13 = 0; i13 < idx; i13++) {
        a_data[i13] = Dis_data[i13];
      }

      i13 = b->size[0];
      for (idx = 0; idx < loop_ub; idx++) {
        b_ii = sind_data[idx];
        b_data[idx] = (b0->data[emlrtDynamicBoundsCheckFastR2012b(b_ii, 1, i13,
          &y_emlrtBCI, &st) - 1] == 0.0);
      }

      b_st.site = &db_emlrtRSI;
      if (!(Dis_size[0] == loop_ub)) {
        if ((Dis_size[0] == 1) || (loop_ub == 1)) {
          e_y = NULL;
          m17 = emlrtCreateCharArray(2, iv39);
          for (idx = 0; idx < 45; idx++) {
            cv44[idx] = cv45[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 45, m17, cv44);
          emlrtAssign(&e_y, m17);
          c_st.site = &ef_emlrtRSI;
          d_st.site = &mf_emlrtRSI;
          error(&c_st, b_message(&d_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
        } else {
          f_y = NULL;
          m17 = emlrtCreateCharArray(2, iv40);
          for (idx = 0; idx < 21; idx++) {
            cv46[idx] = cv47[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 21, m17, cv46);
          emlrtAssign(&f_y, m17);
          c_st.site = &ff_emlrtRSI;
          d_st.site = &nf_emlrtRSI;
          error(&c_st, b_message(&d_st, f_y, &i_emlrtMCI), &j_emlrtMCI);
        }
      }

      if ((Dis_size[0] == 1) || (loop_ub == 1)) {
        ub1 = 0.0;
        for (i13 = 0; i13 < a_size_idx_1; i13++) {
          ub1 += a_data[i13] * b_data[i13];
        }
      } else {
        b_st.site = &je_emlrtRSI;
        c_st.site = &ke_emlrtRSI;
        if (Dis_size[0] < 1) {
          ub1 = 0.0;
        } else {
          n_t = (ptrdiff_t)(Dis_size[0]);
          incx_t = (ptrdiff_t)(1);
          incy_t = (ptrdiff_t)(1);
          xix0_t = (double *)(&a_data[0]);
          yiy0_t = (double *)(&b_data[0]);
          ub1 = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
        }
      }

      i13 = b->size[0];
      emlrtVectorVectorIndexCheckR2012b(i13, 1, 1, loop_ub, &q_emlrtECI, sp);
      st.site = &af_emlrtRSI;
      a_size_idx_1 = Dis_size[0];
      idx = Dis_size[0];
      for (i13 = 0; i13 < idx; i13++) {
        a_data[i13] = Dis_data[i13];
      }

      i13 = b->size[0];
      for (idx = 0; idx < loop_ub; idx++) {
        b_ii = sind_data[idx];
        b_data[idx] = (b0->data[emlrtDynamicBoundsCheckFastR2012b(b_ii, 1, i13,
          &ab_emlrtBCI, &st) - 1] == 1.0);
      }

      b_st.site = &db_emlrtRSI;
      if (!(Dis_size[0] == loop_ub)) {
        if ((Dis_size[0] == 1) || (loop_ub == 1)) {
          g_y = NULL;
          m17 = emlrtCreateCharArray(2, iv41);
          for (idx = 0; idx < 45; idx++) {
            cv44[idx] = cv45[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 45, m17, cv44);
          emlrtAssign(&g_y, m17);
          c_st.site = &ef_emlrtRSI;
          d_st.site = &mf_emlrtRSI;
          error(&c_st, b_message(&d_st, g_y, &g_emlrtMCI), &h_emlrtMCI);
        } else {
          h_y = NULL;
          m17 = emlrtCreateCharArray(2, iv42);
          for (idx = 0; idx < 21; idx++) {
            cv46[idx] = cv47[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 21, m17, cv46);
          emlrtAssign(&h_y, m17);
          c_st.site = &ff_emlrtRSI;
          d_st.site = &nf_emlrtRSI;
          error(&c_st, b_message(&d_st, h_y, &i_emlrtMCI), &j_emlrtMCI);
        }
      }

      if ((Dis_size[0] == 1) || (loop_ub == 1)) {
        ub2 = 0.0;
        for (i13 = 0; i13 < a_size_idx_1; i13++) {
          ub2 += a_data[i13] * b_data[i13];
        }
      } else {
        b_st.site = &je_emlrtRSI;
        c_st.site = &ke_emlrtRSI;
        if (Dis_size[0] < 1) {
          ub2 = 0.0;
        } else {
          n_t = (ptrdiff_t)(Dis_size[0]);
          incx_t = (ptrdiff_t)(1);
          incy_t = (ptrdiff_t)(1);
          xix0_t = (double *)(&a_data[0]);
          yiy0_t = (double *)(&b_data[0]);
          ub2 = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
        }
      }

      i13 = b->size[0];
      emlrtVectorVectorIndexCheckR2012b(i13, 1, 1, loop_ub, &p_emlrtECI, sp);
      st.site = &bf_emlrtRSI;
      a_size_idx_1 = Dis_size[0];
      idx = Dis_size[0];
      for (i13 = 0; i13 < idx; i13++) {
        a_data[i13] = Dis_data[i13];
      }

      i13 = b->size[0];
      for (idx = 0; idx < loop_ub; idx++) {
        b_ii = sind_data[idx];
        b_data[idx] = (b0->data[emlrtDynamicBoundsCheckFastR2012b(b_ii, 1, i13,
          &bb_emlrtBCI, &st) - 1] == 2.0);
      }

      b_st.site = &db_emlrtRSI;
      if (!(Dis_size[0] == loop_ub)) {
        if ((Dis_size[0] == 1) || (loop_ub == 1)) {
          i_y = NULL;
          m17 = emlrtCreateCharArray(2, iv43);
          for (idx = 0; idx < 45; idx++) {
            cv44[idx] = cv45[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 45, m17, cv44);
          emlrtAssign(&i_y, m17);
          c_st.site = &ef_emlrtRSI;
          d_st.site = &mf_emlrtRSI;
          error(&c_st, b_message(&d_st, i_y, &g_emlrtMCI), &h_emlrtMCI);
        } else {
          j_y = NULL;
          m17 = emlrtCreateCharArray(2, iv44);
          for (idx = 0; idx < 21; idx++) {
            cv46[idx] = cv47[idx];
          }

          emlrtInitCharArrayR2013a(&b_st, 21, m17, cv46);
          emlrtAssign(&j_y, m17);
          c_st.site = &ff_emlrtRSI;
          d_st.site = &nf_emlrtRSI;
          error(&c_st, b_message(&d_st, j_y, &i_emlrtMCI), &j_emlrtMCI);
        }
      }

      if ((Dis_size[0] == 1) || (loop_ub == 1)) {
        ub3 = 0.0;
        for (i13 = 0; i13 < a_size_idx_1; i13++) {
          ub3 += a_data[i13] * b_data[i13];
        }
      } else {
        b_st.site = &je_emlrtRSI;
        c_st.site = &ke_emlrtRSI;
        if (Dis_size[0] < 1) {
          ub3 = 0.0;
        } else {
          n_t = (ptrdiff_t)(Dis_size[0]);
          incx_t = (ptrdiff_t)(1);
          incy_t = (ptrdiff_t)(1);
          xix0_t = (double *)(&a_data[0]);
          yiy0_t = (double *)(&b_data[0]);
          ub3 = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
        }
      }

      *f1 = (*f1 + ub) - ((ub1 * muDoubleScalarExp(tau * ub1) + ub2 *
                           muDoubleScalarExp(tau * ub2)) + ub3 *
                          muDoubleScalarExp(tau * ub3)) / ((muDoubleScalarExp
        (tau * ub1) + muDoubleScalarExp(tau * ub2)) + muDoubleScalarExp(tau *
        ub3));
      ub = (ub1 * muDoubleScalarExp(tau * ub1) + ub2 * muDoubleScalarExp(tau *
             ub2)) + ub3 * muDoubleScalarExp(tau * ub3);
      a = (muDoubleScalarExp(tau * ub1) + muDoubleScalarExp(tau * ub2)) +
        muDoubleScalarExp(tau * ub3);
      *f2 = (*f2 - ((ub1 * ub1 * muDoubleScalarExp(tau * ub1) + ub2 * ub2 *
                     muDoubleScalarExp(tau * ub2)) + ub3 * ub3 *
                    muDoubleScalarExp(tau * ub3)) / ((muDoubleScalarExp(tau *
                ub1) + muDoubleScalarExp(tau * ub2)) + muDoubleScalarExp(tau *
               ub3))) + ub * ub / (a * a);
      kk++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    ii++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&y);
  emxFree_real_T(&b0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (taufun.c) */
