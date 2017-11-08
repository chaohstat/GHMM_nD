/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "rdivide.h"
#include "taufun.h"
#include "SREM_EM_emxutil.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRTEInfo q_emlrtRTEI = { 1, 14, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, const
             emxArray_real_T *y, emxArray_real_T *z)
{
  int32_T varargin_1[2];
  int32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  int32_T i;
  boolean_T exitg1;
  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 15 };

  const mxArray *m5;
  char_T cv10[15];
  static const char_T cv11[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  varargin_1[0] = x->size[0];
  varargin_1[1] = 1;
  varargin_2[0] = y->size[0];
  varargin_2[1] = 1;
  p = false;
  b_p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(varargin_1[i] == varargin_2[i])) {
      b_p = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (p) {
  } else {
    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv7);
    for (i = 0; i < 15; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m5, cv10);
    emlrtAssign(&b_y, m5);
    st.site = &cf_emlrtRSI;
    b_st.site = &lf_emlrtRSI;
    error(&st, b_message(&b_st, b_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  i = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)z, i, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    z->data[i] = x->data[i] / y->data[i];
  }
}

/* End of code generation (rdivide.c) */
