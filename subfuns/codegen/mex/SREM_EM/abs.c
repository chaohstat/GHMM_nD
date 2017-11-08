/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "abs.h"
#include "SREM_EM_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo o_emlrtRTEI = { 16, 5, "abs",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T iv4[2];
  int32_T i3;
  int32_T k;
  for (i3 = 0; i3 < 2; i3++) {
    iv4[i3] = x->size[i3];
  }

  i3 = y->size[0] * y->size[1];
  y->size[0] = iv4[0];
  y->size[1] = iv4[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i3, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  i3 = x->size[0] * x->size[1];
  for (k = 0; k < i3; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const real_T x_data[], const int32_T x_size[1], real_T y_data[],
           int32_T y_size[1])
{
  int32_T k;
  y_size[0] = (int8_T)x_size[0];
  for (k = 0; k < x_size[0]; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
}

/* End of code generation (abs.c) */
