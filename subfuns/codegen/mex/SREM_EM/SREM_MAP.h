/*
 * SREM_MAP.h
 *
 * Code generation for function 'SREM_MAP'
 *
 */

#ifndef __SREM_MAP_H__
#define __SREM_MAP_H__

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
extern void SREM_MAP(const emlrtStack *sp, emxArray_real_T *b, const
                     emxArray_real_T *Y, const emxArray_real_T *DIC, const
                     emxArray_real_T *W0, const emxArray_real_T *beta, const
                     real_T exbetabar_data[], const int32_T exbetabar_size[2],
                     const emxArray_real_T *Sigma_s, real_T tau, real_T MAP_iter,
                     emxArray_real_T *Pb, real_T *sum_U);

#endif

/* End of code generation (SREM_MAP.h) */
