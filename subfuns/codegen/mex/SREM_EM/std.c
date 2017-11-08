/*
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "std.h"
#include "eml_error.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = { 12, "std",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"
};

/* Function Definitions */
real_T b_std(const emlrtStack *sp, const real_T varargin_1[3])
{
  int32_T ix;
  real_T xbar;
  int32_T k;
  real_T r;
  real_T x;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ix = 0;
  xbar = varargin_1[0];
  for (k = 0; k < 2; k++) {
    ix++;
    xbar += varargin_1[ix];
  }

  xbar /= 3.0;
  ix = 0;
  r = varargin_1[0] - xbar;
  x = r * r;
  for (k = 0; k < 2; k++) {
    ix++;
    r = varargin_1[ix] - xbar;
    x += r * r;
  }

  x /= 2.0;
  st.site = &ob_emlrtRSI;
  if (x < 0.0) {
    b_st.site = &pb_emlrtRSI;
    eml_error(&b_st);
  }

  return muDoubleScalarSqrt(x);
}

/* End of code generation (std.c) */
