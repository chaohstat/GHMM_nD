/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "squeeze.h"
#include "SREM_EM_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo se_emlrtRSI = { 22, "squeeze",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"
};

static emlrtRSInfo te_emlrtRSI = { 52, "squeeze",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 21, 5, "squeeze",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 51, 1, "squeeze",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"
};

/* Function Definitions */
void squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T k;
  int32_T b_b;
  boolean_T b4;
  int32_T sqsz[3];
  boolean_T b5;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = 3;
  while ((k > 2) && (a->size[2] == 1)) {
    k = 2;
  }

  if (k <= 2) {
    k = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = a->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &y_emlrtRTEI);
    b_b = a->size[1] * a->size[2];
    st.site = &se_emlrtRSI;
    if (1 > b_b) {
      b4 = false;
    } else {
      b4 = (b_b > 2147483646);
    }

    if (b4) {
      b_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (k = 0; k < 3; k++) {
      sqsz[k] = 1;
    }

    k = 0;
    if (a->size[1] != 1) {
      sqsz[0] = a->size[1];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
    }

    k = b->size[0] * b->size[1];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &ab_emlrtRTEI);
    b_b = a->size[1] * a->size[2];
    st.site = &te_emlrtRSI;
    if (1 > b_b) {
      b5 = false;
    } else {
      b5 = (b_b > 2147483646);
    }

    if (b5) {
      b_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  }
}

/* End of code generation (squeeze.c) */
