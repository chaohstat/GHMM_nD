/*
 * eml_warning.c
 *
 * Code generation for function 'eml_warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "eml_warning.h"
#include "taufun.h"
#include "SREM_EM_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo q_emlrtMCI = { 16, 13, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo r_emlrtMCI = { 16, 5, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtRSInfo of_emlrtRSI = { 16, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

/* Function Declarations */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m28;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m28, 3, pArrays, "message", true,
    location);
}

static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "warning", true, location);
}

void b_eml_warning(const emlrtStack *sp, real_T varargin_2, const char_T
                   varargin_3[14])
{
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 32 };

  const mxArray *m12;
  char_T cv29[32];
  int32_T i;
  static const char_T cv30[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 14 };

  char_T b_varargin_3[14];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m12 = emlrtCreateCharArray(2, iv17);
  for (i = 0; i < 32; i++) {
    cv29[i] = cv30[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m12, cv29);
  emlrtAssign(&y, m12);
  b_y = NULL;
  m12 = emlrtCreateCharArray(2, iv18);
  for (i = 0; i < 14; i++) {
    b_varargin_3[i] = varargin_3[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m12, b_varargin_3);
  emlrtAssign(&b_y, m12);
  st.site = &of_emlrtRSI;
  warning(&st, c_message(&st, y, emlrt_marshallOut(varargin_2), b_y, &q_emlrtMCI),
          &r_emlrtMCI);
}

void eml_warning(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 27 };

  const mxArray *m10;
  char_T cv24[27];
  int32_T i;
  static const char_T cv25[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m10 = emlrtCreateCharArray(2, iv15);
  for (i = 0; i < 27; i++) {
    cv24[i] = cv25[i];
  }

  emlrtInitCharArrayR2013a(sp, 27, m10, cv24);
  emlrtAssign(&y, m10);
  st.site = &of_emlrtRSI;
  warning(&st, b_message(&st, y, &q_emlrtMCI), &r_emlrtMCI);
}

/* End of code generation (eml_warning.c) */
