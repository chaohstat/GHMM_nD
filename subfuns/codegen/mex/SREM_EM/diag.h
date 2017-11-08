/*
 * diag.h
 *
 * Code generation for function 'diag'
 *
 */

#ifndef __DIAG_H__
#define __DIAG_H__

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
extern void b_diag(const emlrtStack *sp, const emxArray_real_T *v,
                   emxArray_real_T *d);
extern void diag(const emlrtStack *sp, const emxArray_real_T *v, real_T d_data[],
                 int32_T d_size[1]);

#endif

/* End of code generation (diag.h) */
