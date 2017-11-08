/*
 * bSSupdate.h
 *
 * Code generation for function 'bSSupdate'
 *
 */

#ifndef __BSSUPDATE_H__
#define __BSSUPDATE_H__

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
extern void bSSupdate(const emlrtStack *sp, const emxArray_real_T *Y1, const
                      emxArray_real_T *Pb, const emxArray_real_T *W1, const
                      emxArray_real_T *beta, const real_T exbetabar_data[],
                      const int32_T exbetabar_size[2], real_T q, emxArray_real_T
                      *beta0, emxArray_real_T *Sigma_s0);
extern void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
  const int32_T b_size[2]);
extern void b_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T
  lda, const real_T B_data[], int32_T ldb, emxArray_real_T *C, int32_T ldc);

#endif

/* End of code generation (bSSupdate.h) */
