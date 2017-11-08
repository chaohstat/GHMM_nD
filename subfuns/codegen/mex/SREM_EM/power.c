/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "power.h"
#include "SREM_EM_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

/* Function Declarations */
static void eml_scalexp_alloc(const emlrtStack *sp, const emxArray_real_T
  *varargin_1, emxArray_real_T *z);

/* Function Definitions */
static void eml_scalexp_alloc(const emlrtStack *sp, const emxArray_real_T
  *varargin_1, emxArray_real_T *z)
{
  int32_T unnamed_idx_0;
  int32_T i5;
  unnamed_idx_0 = varargin_1->size[0];
  i5 = z->size[0];
  z->size[0] = unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)z, i5, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
}

void b_power(const real_T a[3], real_T y[3])
{
  int32_T k;
  for (k = 0; k < 3; k++) {
    y[k] = a[k] * a[k];
  }
}

void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  int32_T i4;
  int32_T k;
  eml_scalexp_alloc(sp, a, y);
  i4 = y->size[0];
  for (k = 0; k < i4; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
