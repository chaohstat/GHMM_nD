/*
 * bbarupdate.h
 *
 * Code generation for function 'bbarupdate'
 *
 */

#ifndef __BBARUPDATE_H__
#define __BBARUPDATE_H__

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
extern void bbarupdate(const emlrtStack *sp, const emxArray_real_T *Y1, const
  emxArray_real_T *Pb1, const emxArray_real_T *W1, const emxArray_real_T *beta,
  const emxArray_real_T *Sigma_s, real_T q, real_T betabar0_data[], int32_T
  betabar0_size[2]);
extern void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
  const emxArray_real_T *b);
extern void d_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T
  lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C, int32_T ldc);

#endif

/* End of code generation (bbarupdate.h) */
