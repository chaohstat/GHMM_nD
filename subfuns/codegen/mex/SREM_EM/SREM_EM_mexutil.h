/*
 * SREM_EM_mexutil.h
 *
 * Code generation for function 'SREM_EM_mexutil'
 *
 */

#ifndef __SREM_EM_MEXUTIL_H__
#define __SREM_EM_MEXUTIL_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "SREM_EM_types.h"

/* Function Declarations */
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
extern const mxArray *emlrt_marshallOut(const real_T u);
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

#endif

/* End of code generation (SREM_EM_mexutil.h) */
