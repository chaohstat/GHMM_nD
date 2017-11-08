/*
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#ifndef __MLDIVIDE_H__
#define __MLDIVIDE_H__

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
extern void b_mldivide(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], const real_T B_data[], const int32_T B_size[1], real_T
  Y_data[], int32_T Y_size[1]);
extern void mldivide(const emlrtStack *sp, const real_T A_data[], const int32_T
                     A_size[2], const emxArray_real_T *B, emxArray_real_T *Y);

#endif

/* End of code generation (mldivide.h) */
