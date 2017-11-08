/*
 * find.h
 *
 * Code generation for function 'find'
 *
 */

#ifndef __FIND_H__
#define __FIND_H__

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
extern void b_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *i);
extern void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                     emxArray_int32_T *i);

#endif

/* End of code generation (find.h) */
