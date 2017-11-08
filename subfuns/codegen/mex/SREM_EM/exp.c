/*
 * exp.c
 *
 * Code generation for function 'exp'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "exp.h"

/* Function Definitions */
void b_exp(emxArray_real_T *x)
{
  int32_T i23;
  int32_T k;
  i23 = x->size[0] * x->size[1];
  for (k = 0; k < i23; k++) {
    x->data[k] = muDoubleScalarExp(x->data[k]);
  }
}

void c_exp(emxArray_real_T *x)
{
  int32_T i24;
  int32_T k;
  i24 = x->size[0] * 3;
  for (k = 0; k < i24; k++) {
    x->data[k] = muDoubleScalarExp(x->data[k]);
  }
}

void d_exp(real_T x_data[], int32_T x_size[1])
{
  int32_T i25;
  int32_T k;
  i25 = x_size[0];
  for (k = 0; k < i25; k++) {
    x_data[k] = muDoubleScalarExp(x_data[k]);
  }
}

/* End of code generation (exp.c) */
