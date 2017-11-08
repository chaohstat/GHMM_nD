/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "diag.h"
#include "SREM_EM_emxutil.h"
#include "taufun.h"
#include "eml_int_forloop_overflow_check.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = { 90, "diag",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtMCInfo n_emlrtMCI = { 87, 9, "diag",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtMCInfo o_emlrtMCI = { 86, 19, "diag",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 1, 14, "diag",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRSInfo hf_emlrtRSI = { 86, "diag",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRSInfo pf_emlrtRSI = { 87, "diag",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

/* Function Declarations */
static void calclen(const emxArray_real_T *v, int32_T *dlen, int32_T *firstidx,
                    int32_T *stride);

/* Function Definitions */
static void calclen(const emxArray_real_T *v, int32_T *dlen, int32_T *firstidx,
                    int32_T *stride)
{
  int32_T m;
  int32_T n;
  m = v->size[0];
  n = v->size[1];
  if (0 < v->size[1]) {
    *dlen = muIntScalarMin_sint32(m, n);
    *firstidx = 1;
    *stride = v->size[0] + 1;
  } else {
    *dlen = 0;
    *firstidx = 1;
    *stride = 0;
  }
}

void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i11;
  unnamed_idx_0 = v->size[0];
  unnamed_idx_1 = v->size[0];
  i11 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)d, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  i11 = d->size[0] * d->size[1];
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)d, i11, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i11 = 0; i11 < unnamed_idx_0; i11++) {
    d->data[i11] = 0.0;
  }

  for (unnamed_idx_0 = 0; unnamed_idx_0 + 1 <= v->size[0]; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * unnamed_idx_0] = v->data[unnamed_idx_0];
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, real_T d_data[],
          int32_T d_size[1])
{
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 39 };

  const mxArray *m8;
  char_T cv20[39];
  int32_T i;
  static const char_T cv21[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i',
    'z', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  int32_T stride;
  int32_T dlen;
  boolean_T b2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    d_size[0] = 1;
    d_data[0] = v->data[0];
  } else {
    if (!((v->size[0] == 1) || (v->size[1] == 1))) {
    } else {
      y = NULL;
      m8 = emlrtCreateCharArray(2, iv13);
      for (i = 0; i < 39; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(sp, 39, m8, cv20);
      emlrtAssign(&y, m8);
      st.site = &hf_emlrtRSI;
      b_st.site = &pf_emlrtRSI;
      error(&st, b_message(&b_st, y, &n_emlrtMCI), &o_emlrtMCI);
    }

    calclen(v, &dlen, &i, &stride);
    d_size[0] = dlen;
    st.site = &wb_emlrtRSI;
    if (1 > dlen) {
      b2 = false;
    } else {
      b2 = (dlen > 2147483646);
    }

    if (b2) {
      c_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= dlen; i++) {
      d_data[i] = v->data[i * stride];
    }
  }
}

/* End of code generation (diag.c) */
