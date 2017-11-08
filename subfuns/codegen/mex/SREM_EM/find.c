/*
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "find.h"
#include "taufun.h"
#include "SREM_EM_emxutil.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtMCInfo e_emlrtMCI = { 123, 9, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo f_emlrtMCI = { 122, 19, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 127, 5, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 47, 20, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 249, 13, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo if_emlrtRSI = { 122, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo qf_emlrtRSI = { 123, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

/* Function Definitions */
void b_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                emxArray_int32_T *i)
{
  int32_T nx;
  int32_T idx;
  boolean_T b1;
  const mxArray *y;
  static const int32_T iv3[2] = { 1, 36 };

  const mxArray *m3;
  char_T cv4[36];
  int32_T b_i;
  static const char_T cv5[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'f', 'i', 'n', 'd', '_', 'i', 'n', 'c', 'o', 'm',
    'p', 'a', 't', 'i', 'b', 'l', 'e', 'S', 'h', 'a', 'p', 'e' };

  boolean_T exitg1;
  boolean_T guard1 = false;
  const mxArray *b_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  nx = x->size[0] * x->size[1];
  idx = 0;
  if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
      (x->size[1] <= 1)) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (b1) {
  } else {
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv3);
    for (b_i = 0; b_i < 36; b_i++) {
      cv4[b_i] = cv5[b_i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m3, cv4);
    emlrtAssign(&y, m3);
    st.site = &if_emlrtRSI;
    b_st.site = &qf_emlrtRSI;
    error(&st, b_message(&b_st, y, &e_emlrtMCI), &f_emlrtMCI);
  }

  b_i = i->size[0];
  i->size[0] = nx;
  emxEnsureCapacity(sp, (emxArray__common *)i, b_i, (int32_T)sizeof(int32_T),
                    &k_emlrtRTEI);
  st.site = &q_emlrtRSI;
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i <= nx)) {
    guard1 = false;
    if (x->data[b_i - 1]) {
      idx++;
      i->data[idx - 1] = b_i;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      b_i++;
    }
  }

  if (idx <= nx) {
  } else {
    b_y = NULL;
    m3 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m3);
    st.site = &gf_emlrtRSI;
    error(&st, b_y, &d_emlrtMCI);
  }

  if (nx == 1) {
    if (idx == 0) {
      b_i = i->size[0];
      i->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)i, b_i, (int32_T)sizeof(int32_T),
                        &l_emlrtRTEI);
    }
  } else {
    b_i = i->size[0];
    if (1 > idx) {
      i->size[0] = 0;
    } else {
      i->size[0] = idx;
    }

    emxEnsureCapacity(sp, (emxArray__common *)i, b_i, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
  }
}

void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
              emxArray_int32_T *i)
{
  int32_T nx;
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  const mxArray *y;
  const mxArray *m2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nx = x->size[0];
  idx = 0;
  ii = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)i, ii, (int32_T)sizeof(int32_T),
                    &k_emlrtRTEI);
  st.site = &q_emlrtRSI;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx)) {
    guard1 = false;
    if (x->data[ii - 1]) {
      idx++;
      i->data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
    }
  }

  if (idx <= x->size[0]) {
  } else {
    y = NULL;
    m2 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&y, m2);
    st.site = &gf_emlrtRSI;
    error(&st, y, &d_emlrtMCI);
  }

  if (x->size[0] == 1) {
    if (idx == 0) {
      ii = i->size[0];
      i->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)i, ii, (int32_T)sizeof(int32_T),
                        &l_emlrtRTEI);
    }
  } else {
    ii = i->size[0];
    if (1 > idx) {
      i->size[0] = 0;
    } else {
      i->size[0] = idx;
    }

    emxEnsureCapacity(sp, (emxArray__common *)i, ii, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
  }
}

/* End of code generation (find.c) */
