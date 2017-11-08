/*
 * exp.h
 *
 * Code generation for function 'exp'
 *
 */

#ifndef __EXP_H__
#define __EXP_H__

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
extern void b_exp(emxArray_real_T *x);
extern void c_exp(emxArray_real_T *x);
extern void d_exp(real_T x_data[], int32_T x_size[1]);

#endif

/* End of code generation (exp.h) */
