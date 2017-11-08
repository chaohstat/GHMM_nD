/*
 * taufun.h
 *
 * Code generation for function 'taufun'
 *
 */

#ifndef __TAUFUN_H__
#define __TAUFUN_H__

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
extern void taufun(const emlrtStack *sp, real_T tau, const emxArray_real_T *b,
                   const emxArray_real_T *Y11DIC, real_T N0, const
                   emxArray_real_T *DIC, const emxArray_real_T *DICind, real_T
                   *f1, real_T *f2);

#endif

/* End of code generation (taufun.h) */
