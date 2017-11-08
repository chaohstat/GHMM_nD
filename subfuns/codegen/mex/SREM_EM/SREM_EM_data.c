/*
 * SREM_EM_data.c
 *
 * Code generation for function 'SREM_EM_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo l_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo m_emlrtRSI = { 13, "sum",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

emlrtRSInfo n_emlrtRSI = { 46, "sumprod",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

emlrtRSInfo p_emlrtRSI = { 41, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo q_emlrtRSI = { 230, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo cb_emlrtRSI = { 68, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo db_emlrtRSI = { 21, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo eb_emlrtRSI = { 54, "eml_xgemm",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemm.m"
};

emlrtRSInfo pb_emlrtRSI = { 14, "sqrt",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

emlrtRSInfo bc_emlrtRSI = { 90, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo cc_emlrtRSI = { 117, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo dc_emlrtRSI = { 120, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo ec_emlrtRSI = { 128, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo fc_emlrtRSI = { 130, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo gc_emlrtRSI = { 8, "eml_xgetrf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgetrf.m"
};

emlrtRSInfo hc_emlrtRSI = { 8, "eml_lapack_xgetrf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xgetrf.m"
};

emlrtRSInfo ic_emlrtRSI = { 30, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo jc_emlrtRSI = { 36, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo kc_emlrtRSI = { 44, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo lc_emlrtRSI = { 50, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo mc_emlrtRSI = { 58, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo nc_emlrtRSI = { 20, "eml_ixamax",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_ixamax.m"
};

emlrtRSInfo oc_emlrtRSI = { 1, "ixamax",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\ixamax.p"
};

emlrtRSInfo sc_emlrtRSI = { 41, "eml_xgeru",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgeru.m"
};

emlrtRSInfo tc_emlrtRSI = { 1, "xgeru",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgeru.p"
};

emlrtRSInfo uc_emlrtRSI = { 1, "xger",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xger.p"
};

emlrtRSInfo wc_emlrtRSI = { 54, "eml_xtrsm",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xtrsm.m"
};

emlrtRSInfo xc_emlrtRSI = { 1, "xtrsm",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xtrsm.p"
};

emlrtRSInfo rd_emlrtRSI = { 1, "xnrm2",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xnrm2.p"
};

emlrtRSInfo yd_emlrtRSI = { 28, "eml_xscal",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xscal.m"
};

emlrtRSInfo ae_emlrtRSI = { 1, "xscal",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xscal.p"
};

emlrtRSInfo ge_emlrtRSI = { 1, "xgemv",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemv.p"
};

emlrtRSInfo ie_emlrtRSI = { 1, "xgerc",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgerc.p"
};

emlrtRSInfo je_emlrtRSI = { 61, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo ke_emlrtRSI = { 30, "eml_xdotu",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xdotu.m"
};

emlrtRSInfo le_emlrtRSI = { 1, "xdotu",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xdotu.p"
};

emlrtRSInfo me_emlrtRSI = { 1, "xdot",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xdot.p"
};

emlrtRSInfo ue_emlrtRSI = { 74, "diag",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

emlrtMCInfo d_emlrtMCI = { 239, 9, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtMCInfo g_emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo h_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo i_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo j_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo k_emlrtMCI = { 14, 5, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

emlrtMCInfo l_emlrtMCI = { 13, 15, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

emlrtRTEInfo b_emlrtRTEI = { 30, 1, "combine_vector_elements",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

emlrtRTEInfo j_emlrtRTEI = { 33, 6, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo cf_emlrtRSI = { 13, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

emlrtRSInfo ef_emlrtRSI = { 98, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo ff_emlrtRSI = { 103, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo gf_emlrtRSI = { 239, "find",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo lf_emlrtRSI = { 14, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

emlrtRSInfo mf_emlrtRSI = { 99, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo nf_emlrtRSI = { 104, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

/* End of code generation (SREM_EM_data.c) */
