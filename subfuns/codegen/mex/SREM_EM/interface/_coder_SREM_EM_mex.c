/*
 * _coder_SREM_EM_mex.c
 *
 * Code generation for function 'SREM_EM'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_SREM_EM_api.h"
#include "SREM_EM_initialize.h"
#include "SREM_EM_terminate.h"

/* Function Declarations */
static void SREM_EM_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "SREM_EM", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void SREM_EM_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[6];
  const mxArray *inputs[10];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  /* Module initialization. */
  SREM_EM_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 10, mxCHAR_CLASS, 7, "SREM_EM");
  } else if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 7, "SREM_EM");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  SREM_EM_api(inputs, outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  SREM_EM_terminate();
}

void SREM_EM_atexit_wrapper(void)
{
   SREM_EM_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(SREM_EM_atexit_wrapper);
  /* Dispatch the entry-point. */
  SREM_EM_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (_coder_SREM_EM_mex.c) */
