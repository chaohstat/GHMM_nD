/*
 * SREM_MAP.c
 *
 * Code generation for function 'SREM_MAP'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "SREM_MAP.h"
#include "bSSupdate.h"
#include "SREM_EM_emxutil.h"
#include "abs.h"
#include "power.h"
#include "taufun.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "exp.h"
#include "std.h"
#include "isequal.h"
#include "rdivide.h"
#include "find.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 47, "combine_vector_elements",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRSInfo r_emlrtRSI = { 21, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo s_emlrtRSI = { 25, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo t_emlrtRSI = { 27, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo u_emlrtRSI = { 28, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo v_emlrtRSI = { 30, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo w_emlrtRSI = { 33, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo x_emlrtRSI = { 35, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo y_emlrtRSI = { 36, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo ab_emlrtRSI = { 40, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo bb_emlrtRSI = { 44, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRSInfo fb_emlrtRSI = { 1, "xgemm",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p"
};

static emlrtRSInfo gb_emlrtRSI = { 18, "min",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo hb_emlrtRSI = { 15, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo ib_emlrtRSI = { 106, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo jb_emlrtRSI = { 108, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo kb_emlrtRSI = { 229, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo lb_emlrtRSI = { 202, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo mb_emlrtRSI = { 19, "sumprod",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRSInfo nb_emlrtRSI = { 38, "sumprod",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRSInfo qb_emlrtRSI = { 16, "mean",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRSInfo rb_emlrtRSI = { 19, "mean",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRSInfo sb_emlrtRSI = { 28, "mean",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtMCInfo m_emlrtMCI = { 28, 19, "assert",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\assert.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 1, 28, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 91, 1, "eml_min_or_max",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 19, 19, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 20, 1, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 20, 21, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 20, 41, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 21, 1, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 21, 22, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 21, 45, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 22, 1, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 24, 5, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 24, 49, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 30, 13, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtECInfo u_emlrtECI = { -1, 40, 6, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 40, 11, "Pb", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 40, 53, "U", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 40, 31, "U", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo v_emlrtECI = { -1, 34, 28, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtECInfo w_emlrtECI = { -1, 34, 41, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtECInfo x_emlrtECI = { -1, 34, 9, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 34, 13, "b", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 33, 33, "U", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo y_emlrtECI = { -1, 32, 9, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 32, 15, "U", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo ab_emlrtECI = { 2, 32, 19, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 32, 37, "U1", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo bb_emlrtECI = { -1, 30, 37, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 30, 45, "U1", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 32, 26, "U0", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo cb_emlrtECI = { -1, 27, 9, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 27, 16, "U0", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo db_emlrtECI = { 2, 30, 56, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtECInfo eb_emlrtECI = { 2, 27, 22, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 28, 43, "W0", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 27, 78, "W0", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtRTEInfo vb_emlrtRTEI = { 26, 5, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtECInfo fb_emlrtECI = { -1, 25, 12, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 25, 22, "W0", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo gb_emlrtECI = { 2, 24, 66, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 24, 93, "DIC", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo hb_emlrtECI = { -1, 24, 20, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 24, 15, "Y", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtECInfo ib_emlrtECI = { -1, 21, 34, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m" };

static emlrtDCInfo d_emlrtDCI = { 19, 39, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 1 };

static emlrtDCInfo e_emlrtDCI = { 19, 39, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 4 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 21, 34, "DIC", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 24, 20, "Ymat", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 24, 33, "Yii", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 24, 33, "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 1 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 34, 28, "bmat", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 34, 41, "b", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 35, 9, "sum_U_MAP", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 35, 37, "cri", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 35, 47, "sum_U_MAP", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 36, 25, "sum_U_MAP", "SREM_MAP",
  "D:\\CODE\\GHMM_V3\\subfuns\\SREM_MAP.m", 0 };

static emlrtRSInfo df_emlrtRSI = { 28, "assert",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\assert.m"
};

/* Function Declarations */
static int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator);
static void dynamic_size_checks(const emlrtStack *sp, const int32_T a_size[2],
  const emxArray_real_T *b);
static void eml_xgemm(int32_T n, int32_T k, const real_T A_data[], const
                      emxArray_real_T *B, int32_T ldb, emxArray_real_T *C);

/* Function Definitions */
static int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (numerator >= 0) {
    absNumerator = (uint32_T)numerator;
  } else {
    absNumerator = (uint32_T)-numerator;
  }

  if (denominator >= 0) {
    absDenominator = (uint32_T)denominator;
  } else {
    absDenominator = (uint32_T)-denominator;
  }

  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  tempAbsQuotient = absNumerator / absDenominator;
  if (quotientNeedsNegation) {
    absNumerator %= absDenominator;
    if (absNumerator > 0U) {
      tempAbsQuotient++;
    }
  }

  if (quotientNeedsNegation) {
    quotient = -(int32_T)tempAbsQuotient;
  } else {
    quotient = (int32_T)tempAbsQuotient;
  }

  return quotient;
}

static void dynamic_size_checks(const emlrtStack *sp, const int32_T a_size[2],
  const emxArray_real_T *b)
{
  const mxArray *y;
  static const int32_T iv5[2] = { 1, 45 };

  const mxArray *m4;
  char_T cv6[45];
  int32_T i;
  static const char_T cv7[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv6[2] = { 1, 21 };

  char_T cv8[21];
  static const char_T cv9[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if (!(a_size[1] == b->size[0])) {
    if ((a_size[1] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      y = NULL;
      m4 = emlrtCreateCharArray(2, iv5);
      for (i = 0; i < 45; i++) {
        cv6[i] = cv7[i];
      }

      emlrtInitCharArrayR2013a(sp, 45, m4, cv6);
      emlrtAssign(&y, m4);
      st.site = &ef_emlrtRSI;
      b_st.site = &mf_emlrtRSI;
      error(&st, b_message(&b_st, y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      b_y = NULL;
      m4 = emlrtCreateCharArray(2, iv6);
      for (i = 0; i < 21; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(sp, 21, m4, cv8);
      emlrtAssign(&b_y, m4);
      st.site = &ff_emlrtRSI;
      b_st.site = &nf_emlrtRSI;
      error(&st, b_message(&b_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }
}

static void eml_xgemm(int32_T n, int32_T k, const real_T A_data[], const
                      emxArray_real_T *B, int32_T ldb, emxArray_real_T *C)
{
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  if ((n < 1) || (k < 1)) {
  } else {
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(1);
    n_t = (ptrdiff_t)(n);
    k_t = (ptrdiff_t)(k);
    lda_t = (ptrdiff_t)(1);
    ldb_t = (ptrdiff_t)(ldb);
    ldc_t = (ptrdiff_t)(1);
    alpha1_t = (double *)(&alpha1);
    Aia0_t = (double *)(&A_data[0]);
    Bib0_t = (double *)(&B->data[0]);
    beta1_t = (double *)(&beta1);
    Cic0_t = (double *)(&C->data[0]);
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
          &ldb_t, beta1_t, Cic0_t, &ldc_t);
  }
}

void SREM_MAP(const emlrtStack *sp, emxArray_real_T *b, const emxArray_real_T *Y,
              const emxArray_real_T *DIC, const emxArray_real_T *W0, const
              emxArray_real_T *beta, const real_T exbetabar_data[], const
              int32_T exbetabar_size[2], const emxArray_real_T *Sigma_s, real_T
              tau, real_T MAP_iter, emxArray_real_T *Pb, real_T *sum_U)
{
  emxArray_real_T *sum_U_MAP;
  emxArray_real_T *x;
  emxArray_real_T *y;
  int32_T i20;
  real_T s;
  int32_T loop_ub;
  int32_T cri_size[1];
  real_T cri_data[1200];
  emxArray_real_T *U0;
  int32_T i;
  emxArray_real_T *U1;
  emxArray_real_T *U;
  emxArray_boolean_T *b_DIC;
  emxArray_real_T *indd;
  emxArray_int32_T *ii;
  emxArray_real_T *nozeroind;
  int32_T i21;
  int32_T i22;
  int32_T sz[2];
  emxArray_real_T *Ymat;
  emxArray_real_T *bmat;
  int32_T b_ii;
  emxArray_real_T *Yii;
  emxArray_real_T *W;
  emxArray_real_T *bindd;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *a;
  emxArray_real_T *indx;
  emxArray_int32_T *iindx;
  emxArray_real_T *b_Sigma_s;
  emxArray_real_T *r6;
  emxArray_real_T *c_Sigma_s;
  emxArray_real_T *b_Ymat;
  emxArray_real_T *b_bindd;
  emxArray_real_T *r7;
  emxArray_real_T *b_U0;
  emxArray_real_T *b_U1;
  emxArray_real_T *c_U0;
  emxArray_real_T *b_U;
  int32_T n;
  int32_T outsz[2];
  int32_T c_y[2];
  int32_T a_size[2];
  real_T a_data[10];
  int32_T ll;
  boolean_T exitg2;
  real_T W0_data[10];
  const mxArray *d_y;
  static const int32_T iv63[2] = { 1, 45 };

  const mxArray *m29;
  char_T cv48[45];
  static const char_T cv49[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *e_y;
  static const int32_T iv64[2] = { 1, 21 };

  char_T cv50[21];
  static const char_T cv51[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T f_y[3];
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  real_T b_sum_U_MAP[3];
  int32_T b_iindx[2];
  int32_T c_iindx[1];
  int32_T d_iindx[2];
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T ixstart;
  int32_T cindx;
  int32_T b_a;
  boolean_T c_a;
  boolean_T exitg4;
  boolean_T d_a;
  int32_T e_iindx[1];
  boolean_T guard1 = false;
  boolean_T cond;
  const mxArray *g_y;
  static const int32_T iv65[2] = { 1, 36 };

  char_T cv52[36];
  static const char_T cv53[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  int32_T e_a[1];
  emxArray_real_T f_a;
  const mxArray *h_y;
  static const int32_T iv66[2] = { 1, 37 };

  char_T cv54[37];
  static const char_T cv55[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p', 't', 'y' };

  int32_T exitg3;
  boolean_T b_guard1 = false;
  boolean_T p;
  boolean_T exitg1;
  const mxArray *i_y;
  static const int32_T iv67[2] = { 1, 15 };

  char_T cv56[15];
  static const char_T cv57[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T iv68[3];
  const mxArray *j_y;
  static const int32_T iv69[2] = { 1, 36 };

  emxArray_real_T b_cri_data;
  const mxArray *k_y;
  static const int32_T iv70[2] = { 1, 37 };

  emxArray_real_T c_cri_data;
  const mxArray *l_y;
  static const int32_T iv71[2] = { 1, 37 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &st;
  e_st.tls = st.tls;
  f_st.prev = &b_st;
  f_st.tls = b_st.tls;
  g_st.prev = &d_st;
  g_st.tls = d_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &sum_U_MAP, 2, &gb_emlrtRTEI, true);
  emxInit_real_T(sp, &x, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &n_emlrtRTEI, true);

  /* %  The EM algorithm */
  /* ---input--------------------------------------------------------- */
  /*    b: initial 2D or 3D labels p*n */
  /*    Y1: image intensity matrix p*m */
  /*    DIC: dictionary of spatial relationship */
  /*    subind: subject information m*3 */
  /*    beta: initial value of beta q*p */
  /*    betabar: initial value of betabar q*2 */
  /*    Sigma_s: initial value of variance matrix in epsilon 1*p */
  /*    tau: initial value of tau in Gibbs distribution 1 */
  /*    MAP_iter: maximum number of iterations of the MAP algorithm */
  /* ---output-------------------------------------------------------- */
  /*    b0: final 2D or 3D labels */
  /*    Copyright by Chao Huang, 2015/01/25 */
  /* % */
  i20 = sum_U_MAP->size[0] * sum_U_MAP->size[1];
  sum_U_MAP->size[0] = 1;
  s = emlrtNonNegativeCheckFastR2012b(MAP_iter, &e_emlrtDCI, sp);
  sum_U_MAP->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(s, &d_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)sum_U_MAP, i20, (int32_T)sizeof
                    (real_T), &n_emlrtRTEI);
  s = emlrtNonNegativeCheckFastR2012b(MAP_iter, &e_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(s, &d_emlrtDCI, sp);
  for (i20 = 0; i20 < loop_ub; i20++) {
    sum_U_MAP->data[i20] = 0.0;
  }

  cri_size[0] = Y->size[1];
  loop_ub = Y->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    cri_data[i20] = 0.0;
  }

  b_emxInit_real_T(sp, &U0, 3, &hb_emlrtRTEI, true);
  i = Y->size[0];
  i20 = U0->size[0] * U0->size[1] * U0->size[2];
  U0->size[0] = i;
  U0->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)U0, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = Y->size[1];
  i20 = U0->size[0] * U0->size[1] * U0->size[2];
  U0->size[2] = i;
  emxEnsureCapacity(sp, (emxArray__common *)U0, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = Y->size[0] * 3 * Y->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    U0->data[i20] = 0.0;
  }

  b_emxInit_real_T(sp, &U1, 3, &ib_emlrtRTEI, true);
  i = Y->size[0];
  i20 = U1->size[0] * U1->size[1] * U1->size[2];
  U1->size[0] = i;
  U1->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)U1, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = Y->size[1];
  i20 = U1->size[0] * U1->size[1] * U1->size[2];
  U1->size[2] = i;
  emxEnsureCapacity(sp, (emxArray__common *)U1, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = Y->size[0] * 3 * Y->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    U1->data[i20] = 0.0;
  }

  b_emxInit_real_T(sp, &U, 3, &jb_emlrtRTEI, true);
  i = Y->size[0];
  i20 = U->size[0] * U->size[1] * U->size[2];
  U->size[0] = i;
  U->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)U, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = Y->size[1];
  i20 = U->size[0] * U->size[1] * U->size[2];
  U->size[2] = i;
  emxEnsureCapacity(sp, (emxArray__common *)U, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = Y->size[0] * 3 * Y->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    U->data[i20] = 0.0;
  }

  i20 = Pb->size[0] * Pb->size[1] * Pb->size[2];
  Pb->size[0] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)Pb, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = Y->size[1];
  i20 = Pb->size[0] * Pb->size[1] * Pb->size[2];
  Pb->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)Pb, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = Y->size[0];
  i20 = Pb->size[0] * Pb->size[1] * Pb->size[2];
  Pb->size[2] = i;
  emxEnsureCapacity(sp, (emxArray__common *)Pb, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = 3 * Y->size[1] * Y->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Pb->data[i20] = 0.0;
  }

  emxInit_boolean_T(sp, &b_DIC, 2, &n_emlrtRTEI, true);
  st.site = &r_emlrtRSI;
  i20 = b_DIC->size[0] * b_DIC->size[1];
  b_DIC->size[0] = DIC->size[0];
  b_DIC->size[1] = DIC->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_DIC, i20, (int32_T)sizeof
                    (boolean_T), &n_emlrtRTEI);
  loop_ub = DIC->size[0] * DIC->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    b_DIC->data[i20] = (DIC->data[i20] != 0.0);
  }

  c_emxInit_real_T(&st, &indd, 1, &kb_emlrtRTEI, true);
  emxInit_int32_T(&st, &ii, 1, &j_emlrtRTEI, true);
  b_st.site = &p_emlrtRSI;
  b_eml_find(&b_st, b_DIC, ii);
  i20 = indd->size[0];
  indd->size[0] = ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)indd, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = ii->size[0];
  emxFree_boolean_T(&b_DIC);
  for (i20 = 0; i20 < loop_ub; i20++) {
    indd->data[i20] = ii->data[i20];
  }

  c_emxInit_real_T(&st, &nozeroind, 1, &lb_emlrtRTEI, true);
  emlrtMatrixMatrixIndexCheckR2012b(*(int32_T (*)[2])DIC->size, 2, *(int32_T (*)
    [1])indd->size, 1, &ib_emlrtECI, sp);
  i20 = nozeroind->size[0];
  nozeroind->size[0] = indd->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)nozeroind, i20, (int32_T)sizeof
                    (real_T), &n_emlrtRTEI);
  loop_ub = indd->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    i21 = DIC->size[0] * DIC->size[1];
    i22 = (int32_T)indd->data[i20];
    nozeroind->data[i20] = DIC->data[emlrtDynamicBoundsCheckFastR2012b(i22, 1,
      i21, &rb_emlrtBCI, sp) - 1];
  }

  for (i20 = 0; i20 < 2; i20++) {
    sz[i20] = DIC->size[i20];
  }

  emxInit_real_T(sp, &Ymat, 2, &mb_emlrtRTEI, true);
  i20 = Ymat->size[0] * Ymat->size[1];
  Ymat->size[0] = sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)Ymat, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i20 = Ymat->size[0] * Ymat->size[1];
  Ymat->size[1] = sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)Ymat, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = sz[0] * sz[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ymat->data[i20] = 0.0;
  }

  for (i20 = 0; i20 < 2; i20++) {
    sz[i20] = DIC->size[i20];
  }

  emxInit_real_T(sp, &bmat, 2, &nb_emlrtRTEI, true);
  i20 = bmat->size[0] * bmat->size[1];
  bmat->size[0] = sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)bmat, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i20 = bmat->size[0] * bmat->size[1];
  bmat->size[1] = sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)bmat, i20, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = sz[0] * sz[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    bmat->data[i20] = 0.0;
  }

  b_ii = 0;
  c_emxInit_real_T(sp, &Yii, 1, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &W, 2, &pb_emlrtRTEI, true);
  emxInit_real_T(sp, &bindd, 2, &qb_emlrtRTEI, true);
  emxInit_real_T(sp, &r4, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &r5, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_y, 2, &n_emlrtRTEI, true);
  c_emxInit_real_T(sp, &a, 1, &n_emlrtRTEI, true);
  c_emxInit_real_T(sp, &indx, 1, &n_emlrtRTEI, true);
  emxInit_int32_T(sp, &iindx, 1, &n_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_Sigma_s, 1, &n_emlrtRTEI, true);
  c_emxInit_real_T(sp, &r6, 1, &n_emlrtRTEI, true);
  c_emxInit_real_T(sp, &c_Sigma_s, 1, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Ymat, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_bindd, 2, &n_emlrtRTEI, true);
  c_emxInit_real_T(sp, &r7, 1, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_U0, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_U1, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &c_U0, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_U, 2, &n_emlrtRTEI, true);
  while (b_ii <= Y->size[1] - 1) {
    loop_ub = Y->size[0];
    i20 = Y->size[1];
    i21 = 1 + b_ii;
    i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &qb_emlrtBCI, sp);
    i21 = Yii->size[0];
    Yii->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)Yii, i21, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    for (i21 = 0; i21 < loop_ub; i21++) {
      Yii->data[i21] = Y->data[i21 + Y->size[0] * (i20 - 1)];
    }

    i20 = ii->size[0];
    ii->size[0] = indd->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)ii, i20, (int32_T)sizeof(int32_T),
                      &n_emlrtRTEI);
    loop_ub = indd->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      i21 = Ymat->size[0] * Ymat->size[1];
      i22 = (int32_T)indd->data[i20];
      ii->data[i20] = emlrtDynamicBoundsCheckFastR2012b(i22, 1, i21,
        &sb_emlrtBCI, sp);
    }

    i20 = Y->size[0];
    loop_ub = nozeroind->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      s = nozeroind->data[i21];
      i22 = (int32_T)emlrtIntegerCheckFastR2012b(s, &f_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i22, 1, i20, &tb_emlrtBCI, sp);
    }

    i20 = ii->size[0];
    i21 = indd->size[0];
    emlrtSizeEqCheck1DFastR2012b(i20, i21, &hb_emlrtECI, sp);
    loop_ub = nozeroind->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      Ymat->data[ii->data[i20] - 1] = Yii->data[(int32_T)nozeroind->data[i20] -
        1];
    }

    i20 = DIC->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &pb_emlrtBCI, sp);
    n = DIC->size[1];
    i20 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = Yii->size[0];
    b_y->size[1] = n;
    emxEnsureCapacity(sp, (emxArray__common *)b_y, i20, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    loop_ub = Yii->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      for (i21 = 0; i21 < n; i21++) {
        b_y->data[i20 + b_y->size[0] * i21] = Yii->data[i20];
      }
    }

    for (i20 = 0; i20 < 2; i20++) {
      outsz[i20] = Ymat->size[i20];
    }

    for (i20 = 0; i20 < 2; i20++) {
      c_y[i20] = b_y->size[i20];
    }

    emlrtSizeEqCheck2DFastR2012b(outsz, c_y, &gb_emlrtECI, sp);
    i20 = b_Ymat->size[0] * b_Ymat->size[1];
    b_Ymat->size[0] = Ymat->size[0];
    b_Ymat->size[1] = Ymat->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_Ymat, i20, (int32_T)sizeof
                      (real_T), &n_emlrtRTEI);
    loop_ub = Ymat->size[0] * Ymat->size[1];
    for (i20 = 0; i20 < loop_ub; i20++) {
      b_Ymat->data[i20] = Ymat->data[i20] - b_y->data[i20];
    }

    b_abs(sp, b_Ymat, W);
    i20 = W->size[0] * W->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)W, i20, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    i = W->size[0];
    n = W->size[1];
    loop_ub = i * n;
    for (i20 = 0; i20 < loop_ub; i20++) {
      W->data[i20] *= -0.5;
    }

    b_exp(W);
    st.site = &s_emlrtRSI;
    loop_ub = W0->size[0];
    i20 = W0->size[1];
    i21 = 1 + b_ii;
    i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ob_emlrtBCI, &st);
    a_size[0] = 1;
    a_size[1] = loop_ub;
    for (i21 = 0; i21 < loop_ub; i21++) {
      a_data[i21] = W0->data[i21 + W0->size[0] * (i20 - 1)];
    }

    b_st.site = &db_emlrtRSI;
    dynamic_size_checks(&b_st, a_size, beta);
    if ((loop_ub == 1) || (beta->size[0] == 1)) {
      i20 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = beta->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      i = beta->size[1];
      for (i20 = 0; i20 < i; i20++) {
        y->data[y->size[0] * i20] = 0.0;
        for (i21 = 0; i21 < loop_ub; i21++) {
          y->data[y->size[0] * i20] += a_data[i21] * beta->data[i21 + beta->
            size[0] * i20];
        }
      }
    } else {
      sz[1] = beta->size[1];
      i20 = y->size[0] * y->size[1];
      y->size[0] = 1;
      emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      i20 = y->size[0] * y->size[1];
      y->size[1] = sz[1];
      emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      i = sz[1];
      for (i20 = 0; i20 < i; i20++) {
        y->data[i20] = 0.0;
      }

      b_st.site = &cb_emlrtRSI;
      eml_xgemm(beta->size[1], loop_ub, a_data, beta, loop_ub, y);
    }

    i20 = a->size[0];
    a->size[0] = y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    loop_ub = y->size[1];
    for (i20 = 0; i20 < loop_ub; i20++) {
      a->data[i20] = y->data[y->size[0] * i20];
    }

    i20 = Y->size[0];
    i21 = a->size[0];
    emlrtSizeEqCheck1DFastR2012b(i20, i21, &fb_emlrtECI, sp);
    i20 = Yii->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yii, i20, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    loop_ub = Yii->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      Yii->data[i20] -= a->data[i20];
    }

    emlrtForLoopVectorCheckR2012b(1.0, 1.0, MAP_iter, mxDOUBLE_CLASS, (int32_T)
      MAP_iter, &vb_emlrtRTEI, sp);
    ll = 0;
    exitg2 = false;
    while ((!exitg2) && (ll <= (int32_T)MAP_iter - 1)) {
      power(sp, Yii, a);
      i20 = r6->size[0];
      r6->size[0] = a->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      loop_ub = a->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        r6->data[i20] = 0.5 * a->data[i20];
      }

      i20 = c_Sigma_s->size[0];
      c_Sigma_s->size[0] = Sigma_s->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)c_Sigma_s, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      loop_ub = Sigma_s->size[1];
      for (i20 = 0; i20 < loop_ub; i20++) {
        c_Sigma_s->data[i20] = Sigma_s->data[Sigma_s->size[0] * i20];
      }

      st.site = &t_emlrtRSI;
      rdivide(&st, r6, c_Sigma_s, a);
      i20 = b_x->size[0] * b_x->size[1];
      b_x->size[0] = a->size[0];
      b_x->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)b_x, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      loop_ub = a->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        for (i21 = 0; i21 < 3; i21++) {
          b_x->data[i20 + b_x->size[0] * i21] = a->data[i20];
        }
      }

      i20 = b_Sigma_s->size[0];
      b_Sigma_s->size[0] = Sigma_s->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_Sigma_s, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      loop_ub = Sigma_s->size[1];
      for (i20 = 0; i20 < loop_ub; i20++) {
        b_Sigma_s->data[i20] = Sigma_s->data[Sigma_s->size[0] * i20];
      }

      st.site = &t_emlrtRSI;
      rdivide(&st, Yii, b_Sigma_s, a);
      i20 = W0->size[1];
      i21 = b_ii + 1;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &nb_emlrtBCI, sp);
      loop_ub = W0->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        W0_data[i20] = W0->data[i20 + W0->size[0] * b_ii];
      }

      i20 = b_y->size[0] * b_y->size[1];
      b_y->size[0] = a->size[0];
      b_y->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_y, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      i = a->size[0];
      for (i20 = 0; i20 < i; i20++) {
        for (i21 = 0; i21 < loop_ub; i21++) {
          b_y->data[i20 + b_y->size[0] * i21] = a->data[i20] * W0_data[i21];
        }
      }

      st.site = &t_emlrtRSI;
      b_st.site = &db_emlrtRSI;
      b_dynamic_size_checks(&b_st, b_y, exbetabar_size);
      if ((b_y->size[1] == 1) || (exbetabar_size[0] == 1)) {
        i20 = x->size[0] * x->size[1];
        x->size[0] = b_y->size[0];
        x->size[1] = 3;
        emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        loop_ub = b_y->size[0];
        for (i20 = 0; i20 < loop_ub; i20++) {
          for (i21 = 0; i21 < 3; i21++) {
            x->data[i20 + x->size[0] * i21] = 0.0;
            i = b_y->size[1];
            for (i22 = 0; i22 < i; i22++) {
              x->data[i20 + x->size[0] * i21] += b_y->data[i20 + b_y->size[0] *
                i22] * exbetabar_data[i22 + exbetabar_size[0] * i21];
            }
          }
        }
      } else {
        sz[0] = b_y->size[0];
        i20 = x->size[0] * x->size[1];
        x->size[0] = sz[0];
        x->size[1] = 3;
        emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        loop_ub = sz[0] * 3;
        for (i20 = 0; i20 < loop_ub; i20++) {
          x->data[i20] = 0.0;
        }

        b_st.site = &cb_emlrtRSI;
        b_eml_xgemm(b_y->size[0], b_y->size[1], b_y, b_y->size[0],
                    exbetabar_data, b_y->size[1], x, b_y->size[0]);
      }

      for (i20 = 0; i20 < 2; i20++) {
        c_y[i20] = b_x->size[i20];
      }

      for (i20 = 0; i20 < 2; i20++) {
        outsz[i20] = x->size[i20];
      }

      emlrtSizeEqCheck2DFastR2012b(c_y, outsz, &eb_emlrtECI, sp);
      st.site = &u_emlrtRSI;
      loop_ub = W0->size[0];
      i20 = W0->size[1];
      i21 = 1 + b_ii;
      i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &mb_emlrtBCI, &st);
      for (i21 = 0; i21 < loop_ub; i21++) {
        a_data[i21] = W0->data[i21 + W0->size[0] * (i20 - 1)];
      }

      b_st.site = &db_emlrtRSI;
      if (!(loop_ub == exbetabar_size[0])) {
        if (loop_ub == 1) {
          d_y = NULL;
          m29 = emlrtCreateCharArray(2, iv63);
          for (i = 0; i < 45; i++) {
            cv48[i] = cv49[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 45, m29, cv48);
          emlrtAssign(&d_y, m29);
          c_st.site = &ef_emlrtRSI;
          f_st.site = &mf_emlrtRSI;
          error(&c_st, b_message(&f_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
        } else {
          e_y = NULL;
          m29 = emlrtCreateCharArray(2, iv64);
          for (i = 0; i < 21; i++) {
            cv50[i] = cv51[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 21, m29, cv50);
          emlrtAssign(&e_y, m29);
          c_st.site = &ff_emlrtRSI;
          f_st.site = &nf_emlrtRSI;
          error(&c_st, b_message(&f_st, e_y, &i_emlrtMCI), &j_emlrtMCI);
        }
      }

      if ((loop_ub == 1) || (exbetabar_size[0] == 1)) {
        for (i20 = 0; i20 < 3; i20++) {
          f_y[i20] = 0.0;
          for (i21 = 0; i21 < loop_ub; i21++) {
            f_y[i20] += a_data[i21] * exbetabar_data[i21 + exbetabar_size[0] *
              i20];
          }
        }
      } else {
        b_st.site = &cb_emlrtRSI;
        c_st.site = &eb_emlrtRSI;
        for (i20 = 0; i20 < 3; i20++) {
          f_y[i20] = 0.0;
        }

        if (loop_ub < 1) {
        } else {
          d_st.site = &fb_emlrtRSI;
          s = 1.0;
          beta1 = 0.0;
          TRANSB = 'N';
          TRANSA = 'N';
          g_st.site = &fb_emlrtRSI;
          m_t = (ptrdiff_t)(1);
          g_st.site = &fb_emlrtRSI;
          n_t = (ptrdiff_t)(3);
          g_st.site = &fb_emlrtRSI;
          k_t = (ptrdiff_t)(loop_ub);
          g_st.site = &fb_emlrtRSI;
          lda_t = (ptrdiff_t)(1);
          g_st.site = &fb_emlrtRSI;
          ldb_t = (ptrdiff_t)(loop_ub);
          g_st.site = &fb_emlrtRSI;
          ldc_t = (ptrdiff_t)(1);
          alpha1_t = (double *)(&s);
          Aia0_t = (double *)(&a_data[0]);
          Bib0_t = (double *)(&exbetabar_data[0]);
          beta1_t = (double *)(&beta1);
          Cic0_t = (double *)(&f_y[0]);
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
        }
      }

      b_power(f_y, b_sum_U_MAP);
      i20 = r7->size[0];
      r7->size[0] = Sigma_s->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)r7, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      loop_ub = Sigma_s->size[1];
      for (i20 = 0; i20 < loop_ub; i20++) {
        r7->data[i20] = 0.5 / Sigma_s->data[Sigma_s->size[0] * i20];
      }

      i20 = r4->size[0] * r4->size[1];
      r4->size[0] = r7->size[0];
      r4->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)r4, i20, (int32_T)sizeof(real_T),
                        &n_emlrtRTEI);
      loop_ub = r7->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        for (i21 = 0; i21 < 3; i21++) {
          r4->data[i20 + r4->size[0] * i21] = r7->data[i20] * b_sum_U_MAP[i21];
        }
      }

      for (i20 = 0; i20 < 2; i20++) {
        c_y[i20] = b_x->size[i20];
      }

      for (i20 = 0; i20 < 2; i20++) {
        outsz[i20] = r4->size[i20];
      }

      emlrtSizeEqCheck2DFastR2012b(c_y, outsz, &eb_emlrtECI, sp);
      loop_ub = U0->size[0];
      i20 = iindx->size[0];
      iindx->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)iindx, i20, (int32_T)sizeof
                        (int32_T), &n_emlrtRTEI);
      for (i20 = 0; i20 < loop_ub; i20++) {
        iindx->data[i20] = i20;
      }

      i20 = U0->size[2];
      i21 = b_ii + 1;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &lb_emlrtBCI, sp);
      b_iindx[0] = iindx->size[0];
      b_iindx[1] = 3;
      emlrtSubAssignSizeCheckR2012b(b_iindx, 2, *(int32_T (*)[2])b_x->size, 2,
        &cb_emlrtECI, sp);
      for (i20 = 0; i20 < 3; i20++) {
        loop_ub = b_x->size[0];
        for (i21 = 0; i21 < loop_ub; i21++) {
          U0->data[(iindx->data[i21] + U0->size[0] * i20) + U0->size[0] *
            U0->size[1] * b_ii] = (b_x->data[i21 + b_x->size[0] * i20] - x->
            data[i21 + x->size[0] * i20]) + r4->data[i21 + r4->size[0] * i20];
        }
      }

      for (i = 0; i < 3; i++) {
        i20 = bindd->size[0] * bindd->size[1];
        bindd->size[0] = bmat->size[0];
        bindd->size[1] = bmat->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)bindd, i20, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        loop_ub = bmat->size[0] * bmat->size[1];
        for (i20 = 0; i20 < loop_ub; i20++) {
          bindd->data[i20] = (bmat->data[i20] == 1.0 + (real_T)i);
        }

        for (i20 = 0; i20 < 2; i20++) {
          outsz[i20] = bindd->size[i20];
        }

        for (i20 = 0; i20 < 2; i20++) {
          c_y[i20] = W->size[i20];
        }

        emlrtSizeEqCheck2DFastR2012b(outsz, c_y, &db_emlrtECI, sp);
        loop_ub = U1->size[0];
        i20 = iindx->size[0];
        iindx->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)iindx, i20, (int32_T)sizeof
                          (int32_T), &n_emlrtRTEI);
        for (i20 = 0; i20 < loop_ub; i20++) {
          iindx->data[i20] = i20;
        }

        i20 = U1->size[2];
        i21 = b_ii + 1;
        emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &jb_emlrtBCI, sp);
        i20 = b_bindd->size[0] * b_bindd->size[1];
        b_bindd->size[0] = bindd->size[0];
        b_bindd->size[1] = bindd->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)b_bindd, i20, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        loop_ub = bindd->size[0] * bindd->size[1];
        for (i20 = 0; i20 < loop_ub; i20++) {
          b_bindd->data[i20] = bindd->data[i20] * W->data[i20];
        }

        st.site = &v_emlrtRSI;
        sum(&st, b_bindd, a);
        i20 = a->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                          &n_emlrtRTEI);
        loop_ub = a->size[0];
        for (i20 = 0; i20 < loop_ub; i20++) {
          a->data[i20] = -a->data[i20];
        }

        i20 = a->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                          &n_emlrtRTEI);
        loop_ub = a->size[0];
        for (i20 = 0; i20 < loop_ub; i20++) {
          a->data[i20] *= tau;
        }

        c_iindx[0] = iindx->size[0];
        emlrtSubAssignSizeCheckR2012b(c_iindx, 1, *(int32_T (*)[1])a->size, 1,
          &bb_emlrtECI, sp);
        loop_ub = a->size[0];
        for (i20 = 0; i20 < loop_ub; i20++) {
          U1->data[(iindx->data[i20] + U1->size[0] * i) + U1->size[0] * U1->
            size[1] * b_ii] = a->data[i20];
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      i20 = U0->size[2];
      i21 = b_ii + 1;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &kb_emlrtBCI, sp);
      i20 = U1->size[2];
      i21 = b_ii + 1;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ib_emlrtBCI, sp);
      loop_ub = U0->size[0];
      i20 = b_U0->size[0] * b_U0->size[1];
      b_U0->size[0] = loop_ub;
      b_U0->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)b_U0, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      for (i20 = 0; i20 < 3; i20++) {
        for (i21 = 0; i21 < loop_ub; i21++) {
          b_U0->data[i21 + b_U0->size[0] * i20] = U0->data[(i21 + U0->size[0] *
            i20) + U0->size[0] * U0->size[1] * b_ii];
        }
      }

      for (i20 = 0; i20 < 2; i20++) {
        outsz[i20] = b_U0->size[i20];
      }

      loop_ub = U1->size[0];
      i20 = b_U1->size[0] * b_U1->size[1];
      b_U1->size[0] = loop_ub;
      b_U1->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)b_U1, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      for (i20 = 0; i20 < 3; i20++) {
        for (i21 = 0; i21 < loop_ub; i21++) {
          b_U1->data[i21 + b_U1->size[0] * i20] = U1->data[(i21 + U1->size[0] *
            i20) + U1->size[0] * U1->size[1] * b_ii];
        }
      }

      for (i20 = 0; i20 < 2; i20++) {
        c_y[i20] = b_U1->size[i20];
      }

      emlrtSizeEqCheck2DFastR2012b(outsz, c_y, &ab_emlrtECI, sp);
      loop_ub = U->size[0];
      i20 = iindx->size[0];
      iindx->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)iindx, i20, (int32_T)sizeof
                        (int32_T), &n_emlrtRTEI);
      for (i20 = 0; i20 < loop_ub; i20++) {
        iindx->data[i20] = i20;
      }

      i20 = U->size[2];
      i21 = b_ii + 1;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &hb_emlrtBCI, sp);
      d_iindx[0] = iindx->size[0];
      d_iindx[1] = 3;
      loop_ub = U0->size[0];
      i20 = c_U0->size[0] * c_U0->size[1];
      c_U0->size[0] = loop_ub;
      c_U0->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)c_U0, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      for (i20 = 0; i20 < 3; i20++) {
        for (i21 = 0; i21 < loop_ub; i21++) {
          c_U0->data[i21 + c_U0->size[0] * i20] = U0->data[(i21 + U0->size[0] *
            i20) + U0->size[0] * U0->size[1] * b_ii];
        }
      }

      for (i20 = 0; i20 < 2; i20++) {
        outsz[i20] = c_U0->size[i20];
      }

      emlrtSubAssignSizeCheckR2012b(d_iindx, 2, outsz, 2, &y_emlrtECI, sp);
      loop_ub = U0->size[0] - 1;
      for (i20 = 0; i20 < 3; i20++) {
        for (i21 = 0; i21 <= loop_ub; i21++) {
          U->data[(iindx->data[i21] + U->size[0] * i20) + U->size[0] * U->size[1]
            * b_ii] = U0->data[(i21 + U0->size[0] * i20) + U0->size[0] *
            U0->size[1] * b_ii] + U1->data[(i21 + U1->size[0] * i20) + U1->size
            [0] * U1->size[1] * b_ii];
        }
      }

      st.site = &w_emlrtRSI;
      i20 = U->size[2];
      i21 = b_ii + 1;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &gb_emlrtBCI, &st);
      b_st.site = &gb_emlrtRSI;
      c_st.site = &hb_emlrtRSI;
      loop_ub = U->size[0];
      i20 = b_U->size[0] * b_U->size[1];
      b_U->size[0] = loop_ub;
      b_U->size[1] = 3;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_U, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      for (i20 = 0; i20 < 3; i20++) {
        for (i21 = 0; i21 < loop_ub; i21++) {
          b_U->data[i21 + b_U->size[0] * i20] = U->data[(i21 + U->size[0] * i20)
            + U->size[0] * U->size[1] * b_ii];
        }
      }

      for (i20 = 0; i20 < 2; i20++) {
        outsz[i20] = b_U->size[i20];
      }

      i20 = a->size[0];
      a->size[0] = outsz[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)a, i20, (int32_T)sizeof
                        (real_T), &fb_emlrtRTEI);
      i20 = iindx->size[0];
      iindx->size[0] = outsz[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)iindx, i20, (int32_T)sizeof
                        (int32_T), &n_emlrtRTEI);
      loop_ub = outsz[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        iindx->data[i20] = 1;
      }

      i20 = U->size[0];
      ix = 0;
      iy = -1;
      d_st.site = &ib_emlrtRSI;
      for (j = 1; j <= i20; j++) {
        ix++;
        d_st.site = &jb_emlrtRSI;
        ixstart = ix;
        i = ix + (i20 << 1);
        loop_ub = U->size[0];
        i21 = b_x->size[0] * b_x->size[1];
        b_x->size[0] = loop_ub;
        b_x->size[1] = 3;
        emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i21, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        for (i21 = 0; i21 < 3; i21++) {
          for (i22 = 0; i22 < loop_ub; i22++) {
            b_x->data[i22 + b_x->size[0] * i21] = U->data[(i22 + U->size[0] *
              i21) + U->size[0] * U->size[1] * b_ii];
          }
        }

        i21 = b_x->size[0];
        s = b_x->data[(ix - 1) % b_x->size[0] + b_x->size[0] * div_nzp_s32_floor
          (ix - 1, i21)];
        n = 1;
        cindx = 1;
        if (muDoubleScalarIsNaN(s)) {
          b_a = ix + i20;
          g_st.site = &lb_emlrtRSI;
          if (b_a > i) {
            c_a = false;
          } else {
            c_a = (i > MAX_int32_T - i20);
          }

          if (c_a) {
            h_st.site = &l_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          exitg4 = false;
          while ((!exitg4) && (b_a <= i)) {
            cindx++;
            ixstart = b_a;
            loop_ub = U->size[0];
            i21 = b_x->size[0] * b_x->size[1];
            b_x->size[0] = loop_ub;
            b_x->size[1] = 3;
            emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i21, (int32_T)
                              sizeof(real_T), &n_emlrtRTEI);
            for (i21 = 0; i21 < 3; i21++) {
              for (i22 = 0; i22 < loop_ub; i22++) {
                b_x->data[i22 + b_x->size[0] * i21] = U->data[(i22 + U->size[0] *
                  i21) + U->size[0] * U->size[1] * b_ii];
              }
            }

            i21 = b_x->size[0];
            if (!muDoubleScalarIsNaN(b_x->data[(b_a - 1) % b_x->size[0] +
                 b_x->size[0] * div_nzp_s32_floor(b_a - 1, i21)])) {
              loop_ub = U->size[0];
              i21 = b_x->size[0] * b_x->size[1];
              b_x->size[0] = loop_ub;
              b_x->size[1] = 3;
              emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i21, (int32_T)
                                sizeof(real_T), &n_emlrtRTEI);
              for (i21 = 0; i21 < 3; i21++) {
                for (i22 = 0; i22 < loop_ub; i22++) {
                  b_x->data[i22 + b_x->size[0] * i21] = U->data[(i22 + U->size[0]
                    * i21) + U->size[0] * U->size[1] * b_ii];
                }
              }

              i21 = b_x->size[0];
              s = b_x->data[(b_a - 1) % b_x->size[0] + b_x->size[0] *
                div_nzp_s32_floor(b_a - 1, i21)];
              n = cindx;
              exitg4 = true;
            } else {
              b_a += i20;
            }
          }
        }

        if (ixstart < i) {
          b_a = ixstart + i20;
          g_st.site = &kb_emlrtRSI;
          if (b_a > i) {
            d_a = false;
          } else {
            d_a = (i > MAX_int32_T - i20);
          }

          if (d_a) {
            h_st.site = &l_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          while (b_a <= i) {
            cindx++;
            loop_ub = U->size[0];
            i21 = b_x->size[0] * b_x->size[1];
            b_x->size[0] = loop_ub;
            b_x->size[1] = 3;
            emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i21, (int32_T)
                              sizeof(real_T), &n_emlrtRTEI);
            for (i21 = 0; i21 < 3; i21++) {
              for (i22 = 0; i22 < loop_ub; i22++) {
                b_x->data[i22 + b_x->size[0] * i21] = U->data[(i22 + U->size[0] *
                  i21) + U->size[0] * U->size[1] * b_ii];
              }
            }

            i21 = b_x->size[0];
            if (b_x->data[(b_a - 1) % b_x->size[0] + b_x->size[0] *
                div_nzp_s32_floor(b_a - 1, i21)] < s) {
              loop_ub = U->size[0];
              i21 = b_x->size[0] * b_x->size[1];
              b_x->size[0] = loop_ub;
              b_x->size[1] = 3;
              emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i21, (int32_T)
                                sizeof(real_T), &n_emlrtRTEI);
              for (i21 = 0; i21 < 3; i21++) {
                for (i22 = 0; i22 < loop_ub; i22++) {
                  b_x->data[i22 + b_x->size[0] * i21] = U->data[(i22 + U->size[0]
                    * i21) + U->size[0] * U->size[1] * b_ii];
                }
              }

              i21 = b_x->size[0];
              s = b_x->data[(b_a - 1) % b_x->size[0] + b_x->size[0] *
                div_nzp_s32_floor(b_a - 1, i21)];
              n = cindx;
            }

            b_a += i20;
          }
        }

        iy++;
        a->data[iy] = s;
        iindx->data[iy] = n;
      }

      i20 = indx->size[0];
      indx->size[0] = iindx->size[0];
      emxEnsureCapacity(&b_st, (emxArray__common *)indx, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      loop_ub = iindx->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        indx->data[i20] = iindx->data[i20];
      }

      loop_ub = b->size[0];
      i20 = iindx->size[0];
      iindx->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)iindx, i20, (int32_T)sizeof
                        (int32_T), &n_emlrtRTEI);
      for (i20 = 0; i20 < loop_ub; i20++) {
        iindx->data[i20] = i20;
      }

      i20 = b->size[1];
      i21 = b_ii + 1;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &fb_emlrtBCI, sp);
      e_iindx[0] = iindx->size[0];
      emlrtSubAssignSizeCheckR2012b(e_iindx, 1, *(int32_T (*)[1])indx->size, 1,
        &x_emlrtECI, sp);
      loop_ub = indx->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        b->data[iindx->data[i20] + b->size[0] * b_ii] = indx->data[i20] - 1.0;
      }

      emlrtMatrixMatrixIndexCheckR2012b(*(int32_T (*)[2])b->size, 2, *(int32_T (*)
        [1])indd->size, 1, &w_emlrtECI, sp);
      i20 = ii->size[0];
      ii->size[0] = indd->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)ii, i20, (int32_T)sizeof(int32_T),
                        &n_emlrtRTEI);
      loop_ub = indd->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        i21 = bmat->size[0] * bmat->size[1];
        i22 = (int32_T)indd->data[i20];
        ii->data[i20] = emlrtDynamicBoundsCheckFastR2012b(i22, 1, i21,
          &ub_emlrtBCI, sp);
      }

      loop_ub = nozeroind->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        i21 = b->size[0] * b->size[1];
        i22 = (int32_T)nozeroind->data[i20];
        emlrtDynamicBoundsCheckFastR2012b(i22, 1, i21, &vb_emlrtBCI, sp);
      }

      i20 = ii->size[0];
      i21 = indd->size[0];
      emlrtSizeEqCheck1DFastR2012b(i20, i21, &v_emlrtECI, sp);
      loop_ub = nozeroind->size[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        bmat->data[ii->data[i20] - 1] = b->data[(int32_T)nozeroind->data[i20] -
          1] + 1.0;
      }

      st.site = &x_emlrtRSI;
      b_st.site = &m_emlrtRSI;
      n = a->size[0];
      guard1 = false;
      if (n == 1) {
        guard1 = true;
      } else {
        n = a->size[0];
        if (n != 1) {
          guard1 = true;
        } else {
          cond = false;
        }
      }

      if (guard1) {
        cond = true;
      }

      c_st.site = &mb_emlrtRSI;
      if (cond) {
      } else {
        g_y = NULL;
        m29 = emlrtCreateCharArray(2, iv65);
        for (i = 0; i < 36; i++) {
          cv52[i] = cv53[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 36, m29, cv52);
        emlrtAssign(&g_y, m29);
        d_st.site = &df_emlrtRSI;
        error(&d_st, b_message(&d_st, g_y, &m_emlrtMCI), &m_emlrtMCI);
      }

      e_a[0] = a->size[0];
      f_a = *a;
      f_a.size = (int32_T *)&e_a;
      f_a.numDimensions = 1;
      cond = !isequal(&f_a);
      c_st.site = &nb_emlrtRSI;
      if (cond) {
      } else {
        h_y = NULL;
        m29 = emlrtCreateCharArray(2, iv66);
        for (i = 0; i < 37; i++) {
          cv54[i] = cv55[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 37, m29, cv54);
        emlrtAssign(&h_y, m29);
        d_st.site = &df_emlrtRSI;
        error(&d_st, b_message(&d_st, h_y, &m_emlrtMCI), &m_emlrtMCI);
      }

      n = a->size[0];
      if (n == 0) {
        s = 0.0;
      } else {
        s = a->data[0];
        cindx = 2;
        do {
          exitg3 = 0;
          n = a->size[0];
          if (cindx <= n) {
            s += a->data[cindx - 1];
            cindx++;
          } else {
            exitg3 = 1;
          }
        } while (exitg3 == 0);
      }

      i20 = sum_U_MAP->size[1];
      sum_U_MAP->data[emlrtDynamicBoundsCheckFastR2012b(ll + 1, 1, i20,
        &wb_emlrtBCI, sp) - 1] = s;
      i20 = 1 + b_ii;
      i21 = sum_U_MAP->size[1];
      cri_data[emlrtDynamicBoundsCheckFastR2012b(i20, 1, cri_size[0],
        &xb_emlrtBCI, sp) - 1] = sum_U_MAP->
        data[emlrtDynamicBoundsCheckFastR2012b(ll + 1, 1, i21, &yb_emlrtBCI, sp)
        - 1];
      b_guard1 = false;
      if (1.0 + (real_T)ll >= 3.0) {
        for (i20 = 0; i20 < 3; i20++) {
          i21 = sum_U_MAP->size[1];
          i22 = (int32_T)((1.0 + (real_T)ll) + (-2.0 + (real_T)i20));
          b_sum_U_MAP[i20] = sum_U_MAP->data[emlrtDynamicBoundsCheckFastR2012b
            (i22, 1, i21, &ac_emlrtBCI, sp) - 1];
        }

        st.site = &y_emlrtRSI;
        if (b_std(&st, b_sum_U_MAP) < 0.01) {
          exitg2 = true;
        } else {
          b_guard1 = true;
        }
      } else {
        b_guard1 = true;
      }

      if (b_guard1) {
        ll++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }
    }

    i20 = Pb->size[1];
    i21 = b_ii + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &cb_emlrtBCI, sp);
    loop_ub = Pb->size[2];
    i20 = iindx->size[0];
    iindx->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)iindx, i20, (int32_T)sizeof
                      (int32_T), &n_emlrtRTEI);
    for (i20 = 0; i20 < loop_ub; i20++) {
      iindx->data[i20] = i20;
    }

    loop_ub = U->size[0];
    i20 = U->size[2];
    i21 = 1 + b_ii;
    i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &db_emlrtBCI, sp);
    i21 = b_x->size[0] * b_x->size[1];
    b_x->size[0] = loop_ub;
    b_x->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b_x, i21, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    for (i21 = 0; i21 < 3; i21++) {
      for (i22 = 0; i22 < loop_ub; i22++) {
        b_x->data[i22 + b_x->size[0] * i21] = -U->data[(i22 + U->size[0] * i21)
          + U->size[0] * U->size[1] * (i20 - 1)];
      }
    }

    c_exp(b_x);
    loop_ub = U->size[0];
    i20 = U->size[2];
    i21 = 1 + b_ii;
    i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &eb_emlrtBCI, sp);
    i21 = x->size[0] * x->size[1];
    x->size[0] = loop_ub;
    x->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)x, i21, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    for (i21 = 0; i21 < 3; i21++) {
      for (i22 = 0; i22 < loop_ub; i22++) {
        x->data[i22 + x->size[0] * i21] = -U->data[(i22 + U->size[0] * i21) +
          U->size[0] * U->size[1] * (i20 - 1)];
      }
    }

    c_exp(x);
    st.site = &ab_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    for (i20 = 0; i20 < 2; i20++) {
      sz[i20] = b_x->size[i20];
    }

    i20 = a->size[0];
    a->size[0] = sz[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    if (b_x->size[0] == 0) {
      i20 = a->size[0];
      a->size[0] = sz[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)a, i20, (int32_T)sizeof
                        (real_T), &n_emlrtRTEI);
      loop_ub = sz[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        a->data[i20] = 0.0;
      }
    } else {
      i = b_x->size[0];
      iy = -1;
      ixstart = -1;
      d_st.site = &o_emlrtRSI;
      for (j = 1; j <= i; j++) {
        ixstart++;
        ix = ixstart;
        s = b_x->data[ixstart];
        for (cindx = 0; cindx < 2; cindx++) {
          ix += i;
          s += b_x->data[ix];
        }

        iy++;
        a->data[iy] = s;
      }
    }

    i20 = b_x->size[0] * b_x->size[1];
    b_x->size[0] = a->size[0];
    b_x->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b_x, i20, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    loop_ub = a->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      for (i21 = 0; i21 < 3; i21++) {
        b_x->data[i20 + b_x->size[0] * i21] = a->data[i20];
      }
    }

    st.site = &ab_emlrtRSI;
    for (i20 = 0; i20 < 2; i20++) {
      sz[i20] = x->size[i20];
    }

    for (i20 = 0; i20 < 2; i20++) {
      outsz[i20] = b_x->size[i20];
    }

    cond = false;
    p = true;
    cindx = 0;
    exitg1 = false;
    while ((!exitg1) && (cindx < 2)) {
      if (!(sz[cindx] == outsz[cindx])) {
        p = false;
        exitg1 = true;
      } else {
        cindx++;
      }
    }

    if (!p) {
    } else {
      cond = true;
    }

    if (cond) {
    } else {
      i_y = NULL;
      m29 = emlrtCreateCharArray(2, iv67);
      for (i = 0; i < 15; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&st, 15, m29, cv56);
      emlrtAssign(&i_y, m29);
      b_st.site = &cf_emlrtRSI;
      e_st.site = &lf_emlrtRSI;
      error(&b_st, b_message(&e_st, i_y, &k_emlrtMCI), &l_emlrtMCI);
    }

    i20 = r5->size[0] * r5->size[1];
    r5->size[0] = 3;
    r5->size[1] = x->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)r5, i20, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    loop_ub = x->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      for (i21 = 0; i21 < 3; i21++) {
        r5->data[i21 + r5->size[0] * i20] = x->data[i20 + x->size[0] * i21] /
          b_x->data[i20 + b_x->size[0] * i21];
      }
    }

    iv68[0] = 3;
    iv68[1] = 1;
    iv68[2] = iindx->size[0];
    emlrtSubAssignSizeCheckR2012b(iv68, 3, *(int32_T (*)[2])r5->size, 2,
      &u_emlrtECI, sp);
    i = iindx->size[0];
    for (i20 = 0; i20 < i; i20++) {
      for (i21 = 0; i21 < 3; i21++) {
        Pb->data[(i21 + Pb->size[0] * b_ii) + Pb->size[0] * Pb->size[1] *
          iindx->data[i20]] = r5->data[i21 + 3 * i20];
      }
    }

    b_ii++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_U);
  emxFree_real_T(&c_U0);
  emxFree_real_T(&b_U1);
  emxFree_real_T(&b_U0);
  emxFree_real_T(&r7);
  emxFree_real_T(&b_bindd);
  emxFree_real_T(&b_Ymat);
  emxFree_real_T(&c_Sigma_s);
  emxFree_real_T(&r6);
  emxFree_real_T(&b_Sigma_s);
  emxFree_int32_T(&iindx);
  emxFree_real_T(&indx);
  emxFree_int32_T(&ii);
  emxFree_real_T(&a);
  emxFree_real_T(&b_y);
  emxFree_real_T(&b_x);
  emxFree_real_T(&r5);
  emxFree_real_T(&r4);
  emxFree_real_T(&bindd);
  emxFree_real_T(&W);
  emxFree_real_T(&Yii);
  emxFree_real_T(&bmat);
  emxFree_real_T(&Ymat);
  emxFree_real_T(&nozeroind);
  emxFree_real_T(&indd);
  emxFree_real_T(&U);
  emxFree_real_T(&U1);
  emxFree_real_T(&U0);
  emxFree_real_T(&sum_U_MAP);
  st.site = &bb_emlrtRSI;
  if ((cri_size[0] == 1) || (cri_size[0] != 1)) {
    cond = true;
  } else {
    cond = false;
  }

  b_st.site = &qb_emlrtRSI;
  if (cond) {
  } else {
    j_y = NULL;
    m29 = emlrtCreateCharArray(2, iv69);
    for (i = 0; i < 36; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 36, m29, cv52);
    emlrtAssign(&j_y, m29);
    c_st.site = &df_emlrtRSI;
    error(&c_st, b_message(&c_st, j_y, &m_emlrtMCI), &m_emlrtMCI);
  }

  b_cri_data.data = (real_T *)&cri_data;
  b_cri_data.size = (int32_T *)&cri_size;
  b_cri_data.allocatedSize = 1200;
  b_cri_data.numDimensions = 1;
  b_cri_data.canFreeData = false;
  cond = !isequal(&b_cri_data);
  b_st.site = &rb_emlrtRSI;
  if (cond) {
  } else {
    k_y = NULL;
    m29 = emlrtCreateCharArray(2, iv70);
    for (i = 0; i < 37; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 37, m29, cv54);
    emlrtAssign(&k_y, m29);
    c_st.site = &df_emlrtRSI;
    error(&c_st, b_message(&c_st, k_y, &m_emlrtMCI), &m_emlrtMCI);
  }

  c_cri_data.data = (real_T *)&cri_data;
  c_cri_data.size = (int32_T *)&cri_size;
  c_cri_data.allocatedSize = 1200;
  c_cri_data.numDimensions = 1;
  c_cri_data.canFreeData = false;
  cond = !isequal(&c_cri_data);
  b_st.site = &sb_emlrtRSI;
  if (cond) {
  } else {
    l_y = NULL;
    m29 = emlrtCreateCharArray(2, iv71);
    for (i = 0; i < 37; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 37, m29, cv54);
    emlrtAssign(&l_y, m29);
    c_st.site = &df_emlrtRSI;
    error(&c_st, b_message(&c_st, l_y, &m_emlrtMCI), &m_emlrtMCI);
  }

  if (cri_size[0] == 0) {
    s = 0.0;
  } else {
    s = cri_data[0];
    for (cindx = 2; cindx <= cri_size[0]; cindx++) {
      s += cri_data[cindx - 1];
    }
  }

  *sum_U = s / (real_T)cri_size[0];
  emxFree_real_T(&y);
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SREM_MAP.c) */
