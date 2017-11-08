/*
 * SREM_EM_mexutil.c
 *
 * Code generation for function 'SREM_EM_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "SREM_EM_mexutil.h"

/* Function Definitions */
const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m25;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m25, 1, &pArray, "message", true,
    location);
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m18;
  y = NULL;
  m18 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m18);
  return y;
}

void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

/* End of code generation (SREM_EM_mexutil.c) */
