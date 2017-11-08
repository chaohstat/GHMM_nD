/*
 * SREM_EM.h
 *
 * Code generation for function 'SREM_EM'
 *
 */

#ifndef __SREM_EM_H__
#define __SREM_EM_H__

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
extern void SREM_EM(const emlrtStack *sp, emxArray_real_T *b, const
                    emxArray_real_T *Y1, const emxArray_real_T *DIC, const
                    emxArray_real_T *subind1, emxArray_real_T *beta, real_T
                    betabar_data[], int32_T betabar_size[2], emxArray_real_T
                    *Sigma_s, real_T tau, real_T EM_iter, real_T MAP_iter,
                    emxArray_real_T *b0, emxArray_real_T *beta0, real_T
                    betabar0_data[], int32_T betabar0_size[2], emxArray_real_T
                    *Sigma_s0, real_T *tau0, emxArray_real_T *sum_U);

#endif

/* End of code generation (SREM_EM.h) */
