/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "sum.h"
#include "SREM_EM_emxutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRTEInfo r_emlrtRTEI = { 1, 14, "sum",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

/* Function Definitions */
void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T sz[2];
  int32_T vstride;
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  int32_T ix;
  real_T s;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &n_emlrtRSI;
  for (vstride = 0; vstride < 2; vstride++) {
    sz[vstride] = x->size[vstride];
  }

  vstride = y->size[0];
  y->size[0] = sz[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)y, vstride, (int32_T)sizeof
                    (real_T), &b_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    vstride = y->size[0];
    y->size[0] = sz[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)y, vstride, (int32_T)sizeof
                      (real_T), &r_emlrtRTEI);
    iy = sz[0];
    for (vstride = 0; vstride < iy; vstride++) {
      y->data[vstride] = 0.0;
    }
  } else {
    vstride = x->size[0];
    iy = -1;
    ixstart = -1;
    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      for (k = 2; k <= x->size[1]; k++) {
        ix += vstride;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/* End of code generation (sum.c) */
