/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SREM_EM.h"
#include "mldivide.h"
#include "taufun.h"
#include "eml_warning.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "SREM_EM_emxutil.h"
#include "SREM_EM_mexutil.h"
#include "SREM_EM_data.h"

/* Variable Definitions */
static emlrtRSInfo xb_emlrtRSI = { 1, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo yb_emlrtRSI = { 42, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo ac_emlrtRSI = { 92, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo pc_emlrtRSI = { 26, "eml_xswap",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xswap.m"
};

static emlrtRSInfo qc_emlrtRSI = { 1, "xswap",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xswap.p"
};

static emlrtRSInfo rc_emlrtRSI = { 1, "xswap",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xswap.p"
};

static emlrtRSInfo vc_emlrtRSI = { 76, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo yc_emlrtRSI = { 29, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRSInfo ad_emlrtRSI = { 38, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRSInfo bd_emlrtRSI = { 37, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRSInfo cd_emlrtRSI = { 8, "eml_xgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgeqp3.m"
};

static emlrtRSInfo dd_emlrtRSI = { 8, "eml_lapack_xgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xgeqp3.m"
};

static emlrtRSInfo ed_emlrtRSI = { 25, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo fd_emlrtRSI = { 31, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo gd_emlrtRSI = { 32, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo hd_emlrtRSI = { 37, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo id_emlrtRSI = { 47, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo jd_emlrtRSI = { 51, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo kd_emlrtRSI = { 64, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo ld_emlrtRSI = { 66, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo md_emlrtRSI = { 74, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo nd_emlrtRSI = { 79, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo od_emlrtRSI = { 93, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo pd_emlrtRSI = { 100, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

static emlrtRSInfo qd_emlrtRSI = { 19, "eml_xnrm2",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xnrm2.m"
};

static emlrtRSInfo sd_emlrtRSI = { 20, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

static emlrtRSInfo td_emlrtRSI = { 41, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

static emlrtRSInfo ud_emlrtRSI = { 53, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

static emlrtRSInfo vd_emlrtRSI = { 68, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

static emlrtRSInfo wd_emlrtRSI = { 71, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

static emlrtRSInfo xd_emlrtRSI = { 81, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

static emlrtRSInfo be_emlrtRSI = { 75, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo ce_emlrtRSI = { 68, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo de_emlrtRSI = { 50, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo ee_emlrtRSI = { 103, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo fe_emlrtRSI = { 52, "eml_xgemv",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemv.m"
};

static emlrtRSInfo he_emlrtRSI = { 41, "eml_xgerc",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgerc.m"
};

static emlrtMCInfo p_emlrtMCI = { 1, 1, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtMCInfo s_emlrtMCI = { 29, 23, "eml_flt2str",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

static emlrtMCInfo t_emlrtMCI = { 29, 15, "eml_flt2str",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 1, 2, "mldivide",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRTEInfo v_emlrtRTEI = { 1, 19, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 1, 24, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 106, 5, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 99, 5, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRSInfo rf_emlrtRSI = { 29, "eml_flt2str",
  "D:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

/* Function Declarations */
static void b_eml_lusolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], real_T B_data[]);
static void b_eml_qrsolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], real_T B_data[], real_T Y_data[], int32_T Y_size[1]);
static real_T b_eml_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static int32_T eml_ixamax(int32_T n, const real_T x_data[], int32_T ix0);
static void eml_lusolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], const emxArray_real_T *B, emxArray_real_T *X);
static void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T
  iv0, real_T tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
static void eml_qrsolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], emxArray_real_T *B, emxArray_real_T *Y);
static real_T eml_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
static void eml_xscal(int32_T n, real_T a, real_T x_data[], int32_T ix0);
static void eml_xswap(const emlrtStack *sp, int32_T n, real_T x_data[], int32_T
                      ix0, int32_T iy0);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf,
  const char_T *identifier, char_T y[14]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static void warn_singular(const emlrtStack *sp);

/* Function Definitions */
static void b_eml_lusolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], real_T B_data[])
{
  int32_T n;
  int32_T iy;
  int32_T k;
  real_T b_A_data[100];
  int32_T ipiv_size[2];
  int32_T ipiv_data[10];
  int32_T info;
  int32_T b;
  int32_T j;
  int32_T mmj;
  int32_T c;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  int32_T ix;
  real_T temp;
  ptrdiff_t m_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Aiy0_t;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = A_size[1];
  iy = A_size[0] * A_size[1];
  for (k = 0; k < iy; k++) {
    b_A_data[k] = A_data[k];
  }

  eml_signed_integer_colon(muIntScalarMin_sint32(A_size[1], A_size[1]),
    ipiv_data, ipiv_size);
  info = 0;
  if (A_size[1] < 1) {
  } else {
    iy = A_size[1] - 1;
    b = muIntScalarMin_sint32(iy, A_size[1]);
    for (j = 1; j <= b; j++) {
      mmj = n - j;
      c = (j - 1) * (n + 1);
      if (mmj + 1 < 1) {
        iy = -1;
      } else {
        n_t = (ptrdiff_t)(mmj + 1);
        incx_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&b_A_data[c]);
        incx_t = idamax(&n_t, xix0_t, &incx_t);
        iy = (int32_T)incx_t - 1;
      }

      if (b_A_data[c + iy] != 0.0) {
        if (iy != 0) {
          ipiv_data[j - 1] = j + iy;
          ix = j - 1;
          iy = (j + iy) - 1;
          for (k = 1; k <= n; k++) {
            temp = b_A_data[ix];
            b_A_data[ix] = b_A_data[iy];
            b_A_data[iy] = temp;
            ix += n;
            iy += n;
          }
        }

        iy = (c + mmj) + 1;
        for (k = c + 1; k + 1 <= iy; k++) {
          b_A_data[k] /= b_A_data[c];
        }
      } else {
        info = j;
      }

      iy = n - j;
      if ((mmj < 1) || (iy < 1)) {
      } else {
        temp = -1.0;
        m_t = (ptrdiff_t)(mmj);
        n_t = (ptrdiff_t)(iy);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(n);
        lda_t = (ptrdiff_t)(n);
        alpha1_t = (double *)(&temp);
        Aia0_t = (double *)(&b_A_data[(c + n) + 1]);
        xix0_t = (double *)(&b_A_data[c + 1]);
        Aiy0_t = (double *)(&b_A_data[c + n]);
        dger(&m_t, &n_t, alpha1_t, xix0_t, &incx_t, Aiy0_t, &incy_t, Aia0_t,
             &lda_t);
      }
    }

    if ((info == 0) && (!(b_A_data[(A_size[1] + A_size[0] * (A_size[1] - 1)) - 1]
                          != 0.0))) {
      info = A_size[1];
    }
  }

  if (info > 0) {
    b_st.site = &ac_emlrtRSI;
    warn_singular(&b_st);
  }

  for (iy = 0; iy + 1 < n; iy++) {
    if (ipiv_data[iy] != iy + 1) {
      temp = B_data[iy];
      B_data[iy] = B_data[ipiv_data[iy] - 1];
      B_data[ipiv_data[iy] - 1] = temp;
    }
  }

  if (A_size[1] < 1) {
  } else {
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'L';
    m_t = (ptrdiff_t)(A_size[1]);
    n_t = (ptrdiff_t)(1);
    lda_t = (ptrdiff_t)(A_size[1]);
    incx_t = (ptrdiff_t)(A_size[1]);
    Aia0_t = (double *)(&b_A_data[0]);
    xix0_t = (double *)(&B_data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  if (A_size[1] < 1) {
  } else {
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    m_t = (ptrdiff_t)(A_size[1]);
    n_t = (ptrdiff_t)(1);
    lda_t = (ptrdiff_t)(A_size[1]);
    incx_t = (ptrdiff_t)(A_size[1]);
    Aia0_t = (double *)(&b_A_data[0]);
    xix0_t = (double *)(&B_data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }
}

static void b_eml_qrsolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], real_T B_data[], real_T Y_data[], int32_T Y_size[1])
{
  int32_T m;
  int32_T mn;
  int32_T A_size_idx_0;
  int32_T k;
  int32_T itemp;
  real_T b_A_data[100];
  int32_T b_m;
  int32_T n;
  int32_T b_mn;
  real_T tau_data[10];
  int32_T jpvt_size[2];
  int32_T jpvt_data[10];
  real_T work_data[10];
  real_T TOL3Z;
  real_T vn1_data[10];
  real_T vn2_data[10];
  int32_T knt;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  real_T atmp;
  real_T d1;
  real_T xnorm;
  real_T beta1;
  boolean_T b6;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv36[2] = { 1, 8 };

  const mxArray *m16;
  char_T cv41[8];
  static const char_T cv42[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv43[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  m = A_size[0] - 2;
  mn = (int32_T)muDoubleScalarMin(A_size[0], A_size[1]);
  st.site = &yc_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  A_size_idx_0 = A_size[0];
  k = A_size[0] * A_size[1];
  for (itemp = 0; itemp < k; itemp++) {
    b_A_data[itemp] = A_data[itemp];
  }

  b_m = A_size[0];
  n = A_size[1];
  b_mn = muIntScalarMin_sint32(A_size[0], A_size[1]);
  eml_signed_integer_colon(A_size[1], jpvt_data, jpvt_size);
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
  } else {
    k = (int8_T)A_size[1];
    for (itemp = 0; itemp < k; itemp++) {
      work_data[itemp] = 0.0;
    }

    TOL3Z = 2.2204460492503131E-16;
    d_st.site = &ed_emlrtRSI;
    b_sqrt(&d_st, &TOL3Z);
    k = 1;
    d_st.site = &fd_emlrtRSI;
    for (knt = 0; knt + 1 <= n; knt++) {
      d_st.site = &gd_emlrtRSI;
      vn1_data[knt] = eml_xnrm2(b_m, A_data, k);
      vn2_data[knt] = vn1_data[knt];
      k += b_m;
    }

    d_st.site = &hd_emlrtRSI;
    for (i = 1; i <= b_mn; i++) {
      i_i = (i + (i - 1) * b_m) - 1;
      nmi = n - i;
      mmi = b_m - i;
      d_st.site = &id_emlrtRSI;
      k = eml_ixamax(1 + nmi, vn1_data, i);
      k = (i + k) - 2;
      if (k + 1 != i) {
        d_st.site = &jd_emlrtRSI;
        eml_xswap(&d_st, b_m, b_A_data, 1 + b_m * k, 1 + b_m * (i - 1));
        itemp = jpvt_data[k];
        jpvt_data[k] = jpvt_data[i - 1];
        jpvt_data[i - 1] = itemp;
        vn1_data[k] = vn1_data[i - 1];
        vn2_data[k] = vn2_data[i - 1];
      }

      if (i < b_m) {
        d_st.site = &kd_emlrtRSI;
        atmp = b_A_data[i_i];
        d1 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          e_st.site = &sd_emlrtRSI;
          xnorm = b_eml_xnrm2(mmi, b_A_data, i_i + 2);
          if (xnorm != 0.0) {
            beta1 = muDoubleScalarHypot(b_A_data[i_i], xnorm);
            if (b_A_data[i_i] >= 0.0) {
              beta1 = -beta1;
            }

            if (muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) {
              knt = 0;
              do {
                knt++;
                e_st.site = &td_emlrtRSI;
                eml_xscal(mmi, 9.9792015476736E+291, b_A_data, i_i + 2);
                beta1 *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(beta1) >= 1.0020841800044864E-292));

              e_st.site = &ud_emlrtRSI;
              xnorm = b_eml_xnrm2(mmi, b_A_data, i_i + 2);
              beta1 = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                beta1 = -beta1;
              }

              d1 = (beta1 - atmp) / beta1;
              e_st.site = &vd_emlrtRSI;
              eml_xscal(mmi, 1.0 / (atmp - beta1), b_A_data, i_i + 2);
              e_st.site = &wd_emlrtRSI;
              if (1 > knt) {
                b6 = false;
              } else {
                b6 = (knt > 2147483646);
              }

              if (b6) {
                f_st.site = &l_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= knt; k++) {
                beta1 *= 1.0020841800044864E-292;
              }

              atmp = beta1;
            } else {
              d1 = (beta1 - b_A_data[i_i]) / beta1;
              e_st.site = &xd_emlrtRSI;
              eml_xscal(mmi, 1.0 / (b_A_data[i_i] - beta1), b_A_data, i_i + 2);
              atmp = beta1;
            }
          }
        }

        tau_data[i - 1] = d1;
      } else {
        d_st.site = &ld_emlrtRSI;
        xnorm = b_A_data[i_i];
        atmp = b_A_data[i_i];
        b_A_data[i_i] = xnorm;
        tau_data[i - 1] = 0.0;
      }

      b_A_data[i_i] = atmp;
      if (i < n) {
        atmp = b_A_data[i_i];
        b_A_data[i_i] = 1.0;
        d_st.site = &md_emlrtRSI;
        eml_matlab_zlarf(&d_st, 1 + mmi, nmi, i_i + 1, tau_data[i - 1], b_A_data,
                         i + i * b_m, b_m, work_data);
        b_A_data[i_i] = atmp;
      }

      d_st.site = &nd_emlrtRSI;
      for (knt = i; knt + 1 <= n; knt++) {
        if (vn1_data[knt] != 0.0) {
          xnorm = muDoubleScalarAbs(b_A_data[(i + A_size_idx_0 * knt) - 1]) /
            vn1_data[knt];
          xnorm = 1.0 - xnorm * xnorm;
          if (xnorm < 0.0) {
            xnorm = 0.0;
          }

          beta1 = vn1_data[knt] / vn2_data[knt];
          beta1 = xnorm * (beta1 * beta1);
          if (beta1 <= TOL3Z) {
            if (i < b_m) {
              d_st.site = &od_emlrtRSI;
              e_st.site = &qd_emlrtRSI;
              if (mmi < 1) {
                xnorm = 0.0;
              } else {
                n_t = (ptrdiff_t)(mmi);
                incx_t = (ptrdiff_t)(1);
                xix0_t = (double *)(&b_A_data[i + b_m * knt]);
                xnorm = dnrm2(&n_t, xix0_t, &incx_t);
              }

              vn1_data[knt] = xnorm;
              vn2_data[knt] = vn1_data[knt];
            } else {
              vn1_data[knt] = 0.0;
              vn2_data[knt] = 0.0;
            }
          } else {
            d_st.site = &pd_emlrtRSI;
            vn1_data[knt] *= muDoubleScalarSqrt(xnorm);
          }
        }
      }
    }
  }

  beta1 = 0.0;
  if (mn > 0) {
    xnorm = muDoubleScalarMax(A_size[0], A_size[1]) * muDoubleScalarAbs
      (b_A_data[0]) * 2.2204460492503131E-16;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= mn - 1)) {
      if (muDoubleScalarAbs(b_A_data[k + A_size_idx_0 * k]) <= xnorm) {
        st.site = &ad_emlrtRSI;
        y = NULL;
        m16 = emlrtCreateCharArray(2, iv36);
        for (i = 0; i < 8; i++) {
          cv41[i] = cv42[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m16, cv41);
        emlrtAssign(&y, m16);
        b_st.site = &rf_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &s_emlrtMCI),
          emlrt_marshallOut(xnorm), &t_emlrtMCI), "sprintf", cv43);
        st.site = &bd_emlrtRSI;
        b_eml_warning(&st, beta1, cv43);
        exitg1 = true;
      } else {
        beta1++;
        k++;
      }
    }
  }

  Y_size[0] = (int8_T)A_size[1];
  k = (int8_T)A_size[1];
  for (itemp = 0; itemp < k; itemp++) {
    Y_data[itemp] = 0.0;
  }

  for (knt = 0; knt < mn; knt++) {
    if (tau_data[knt] != 0.0) {
      xnorm = B_data[knt];
      itemp = m - knt;
      for (i = 0; i <= itemp; i++) {
        k = (knt + i) + 1;
        xnorm += b_A_data[k + A_size_idx_0 * knt] * B_data[k];
      }

      xnorm *= tau_data[knt];
      if (xnorm != 0.0) {
        B_data[knt] -= xnorm;
        itemp = m - knt;
        for (i = 0; i <= itemp; i++) {
          k = (knt + i) + 1;
          B_data[k] -= b_A_data[k + A_size_idx_0 * knt] * xnorm;
        }
      }
    }
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, beta1, mxDOUBLE_CLASS, (int32_T)beta1,
    &ub_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)beta1; i++) {
    Y_data[jpvt_data[i] - 1] = B_data[i];
  }

  emlrtForLoopVectorCheckR2012b(beta1, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-(1.0
    + (-1.0 - beta1)), &tb_emlrtRTEI, sp);
  for (knt = 0; knt < (int32_T)-(1.0 + (-1.0 - beta1)); knt++) {
    xnorm = beta1 + -(real_T)knt;
    Y_data[jpvt_data[(int32_T)xnorm - 1] - 1] /= b_A_data[((int32_T)xnorm +
      A_size_idx_0 * ((int32_T)xnorm - 1)) - 1];
    for (i = 0; i < (int32_T)(xnorm - 1.0); i++) {
      Y_data[jpvt_data[i] - 1] -= Y_data[jpvt_data[(int32_T)xnorm - 1] - 1] *
        b_A_data[i + A_size_idx_0 * ((int32_T)xnorm - 1)];
    }
  }
}

static real_T b_eml_xnrm2(int32_T n, const real_T x_data[], int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  if (n < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x_data[ix0 - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m26;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m26, 3, pArrays, "sprintf", true,
    location);
}

static const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m27;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m27, 2, pArrays, "sprintf", true,
    location);
}

static int32_T eml_ixamax(int32_T n, const real_T x_data[], int32_T ix0)
{
  int32_T idxmax;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  if (n < 1) {
    idxmax = 0;
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x_data[ix0 - 1]);
    n_t = idamax(&n_t, xix0_t, &incx_t);
    idxmax = (int32_T)n_t;
  }

  return idxmax;
}

static void eml_lusolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], const emxArray_real_T *B, emxArray_real_T *X)
{
  int32_T n;
  int32_T iy;
  int32_T i;
  real_T b_A_data[100];
  int32_T ipiv_size[2];
  int32_T ipiv_data[10];
  int32_T info;
  int32_T b;
  int32_T j;
  int32_T mmj;
  int32_T c;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  int32_T ix;
  int32_T ip;
  real_T temp;
  ptrdiff_t m_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Aiy0_t;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = A_size[1];
  iy = A_size[0] * A_size[1];
  for (i = 0; i < iy; i++) {
    b_A_data[i] = A_data[i];
  }

  eml_signed_integer_colon(muIntScalarMin_sint32(A_size[1], A_size[1]),
    ipiv_data, ipiv_size);
  info = 0;
  if (A_size[1] < 1) {
  } else {
    iy = A_size[1] - 1;
    b = muIntScalarMin_sint32(iy, A_size[1]);
    for (j = 1; j <= b; j++) {
      mmj = n - j;
      c = (j - 1) * (n + 1);
      if (mmj + 1 < 1) {
        iy = -1;
      } else {
        n_t = (ptrdiff_t)(mmj + 1);
        incx_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&b_A_data[c]);
        incx_t = idamax(&n_t, xix0_t, &incx_t);
        iy = (int32_T)incx_t - 1;
      }

      if (b_A_data[c + iy] != 0.0) {
        if (iy != 0) {
          ipiv_data[j - 1] = j + iy;
          ix = j - 1;
          iy = (j + iy) - 1;
          for (ip = 1; ip <= n; ip++) {
            temp = b_A_data[ix];
            b_A_data[ix] = b_A_data[iy];
            b_A_data[iy] = temp;
            ix += n;
            iy += n;
          }
        }

        iy = (c + mmj) + 1;
        for (i = c + 1; i + 1 <= iy; i++) {
          b_A_data[i] /= b_A_data[c];
        }
      } else {
        info = j;
      }

      iy = n - j;
      if ((mmj < 1) || (iy < 1)) {
      } else {
        temp = -1.0;
        m_t = (ptrdiff_t)(mmj);
        n_t = (ptrdiff_t)(iy);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(n);
        lda_t = (ptrdiff_t)(n);
        alpha1_t = (double *)(&temp);
        Aia0_t = (double *)(&b_A_data[(c + n) + 1]);
        xix0_t = (double *)(&b_A_data[c + 1]);
        Aiy0_t = (double *)(&b_A_data[c + n]);
        dger(&m_t, &n_t, alpha1_t, xix0_t, &incx_t, Aiy0_t, &incy_t, Aia0_t,
             &lda_t);
      }
    }

    if ((info == 0) && (!(b_A_data[(A_size[1] + A_size[0] * (A_size[1] - 1)) - 1]
                          != 0.0))) {
      info = A_size[1];
    }
  }

  if (info > 0) {
    b_st.site = &ac_emlrtRSI;
    warn_singular(&b_st);
  }

  i = X->size[0] * X->size[1];
  X->size[0] = B->size[0];
  X->size[1] = B->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)X, i, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  iy = B->size[0] * B->size[1];
  for (i = 0; i < iy; i++) {
    X->data[i] = B->data[i];
  }

  iy = B->size[1];
  for (i = 0; i + 1 < n; i++) {
    if (ipiv_data[i] != i + 1) {
      ip = ipiv_data[i] - 1;
      for (ix = 0; ix + 1 <= iy; ix++) {
        temp = X->data[i + X->size[0] * ix];
        X->data[i + X->size[0] * ix] = X->data[ip + X->size[0] * ix];
        X->data[ip + X->size[0] * ix] = temp;
      }
    }
  }

  if ((A_size[1] < 1) || (B->size[1] < 1)) {
  } else {
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'L';
    m_t = (ptrdiff_t)(A_size[1]);
    n_t = (ptrdiff_t)(B->size[1]);
    lda_t = (ptrdiff_t)(A_size[1]);
    incx_t = (ptrdiff_t)(A_size[1]);
    Aia0_t = (double *)(&b_A_data[0]);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  if ((A_size[1] < 1) || (B->size[1] < 1)) {
  } else {
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    m_t = (ptrdiff_t)(A_size[1]);
    n_t = (ptrdiff_t)(B->size[1]);
    lda_t = (ptrdiff_t)(A_size[1]);
    incx_t = (ptrdiff_t)(A_size[1]);
    Aia0_t = (double *)(&b_A_data[0]);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }
}

static void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T
  iv0, real_T tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[])
{
  int32_T lastv;
  int32_T lastc;
  boolean_T exitg2;
  int32_T coltop;
  int32_T colbottom;
  boolean_T b_coltop;
  int32_T exitg1;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * alpha1_t;
  double * beta1_t;
  double * yiy0_t;
  double * Aia0_t;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C_data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    st.site = &de_emlrtRSI;
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      coltop = ic0 + (lastc - 1) * ldc;
      colbottom = (coltop + lastv) - 1;
      b_st.site = &ee_emlrtRSI;
      if (coltop > colbottom) {
        b_coltop = false;
      } else {
        b_coltop = (colbottom > 2147483646);
      }

      if (b_coltop) {
        c_st.site = &l_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      do {
        exitg1 = 0;
        if (coltop <= colbottom) {
          if (C_data[coltop - 1] != 0.0) {
            exitg1 = 1;
          } else {
            coltop++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    st.site = &ce_emlrtRSI;
    b_st.site = &fe_emlrtRSI;
    if (lastc < 1) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSA = 'C';
      m_t = (ptrdiff_t)(lastv);
      n_t = (ptrdiff_t)(lastc);
      lda_t = (ptrdiff_t)(ldc);
      incx_t = (ptrdiff_t)(1);
      incy_t = (ptrdiff_t)(1);
      alpha1_t = (double *)(&alpha1);
      beta1_t = (double *)(&beta1);
      yiy0_t = (double *)(&work_data[0]);
      Aia0_t = (double *)(&C_data[ic0 - 1]);
      xix0_t = (double *)(&C_data[iv0 - 1]);
      dgemv(&TRANSA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t, xix0_t, &incx_t,
            beta1_t, yiy0_t, &incy_t);
    }

    st.site = &be_emlrtRSI;
    alpha1 = -tau;
    b_st.site = &he_emlrtRSI;
    if (lastc < 1) {
    } else {
      m_t = (ptrdiff_t)(lastv);
      n_t = (ptrdiff_t)(lastc);
      incx_t = (ptrdiff_t)(1);
      incy_t = (ptrdiff_t)(1);
      lda_t = (ptrdiff_t)(ldc);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&C_data[ic0 - 1]);
      beta1_t = (double *)(&C_data[iv0 - 1]);
      yiy0_t = (double *)(&work_data[0]);
      dger(&m_t, &n_t, alpha1_t, beta1_t, &incx_t, yiy0_t, &incy_t, Aia0_t,
           &lda_t);
    }
  }
}

static void eml_qrsolve(const emlrtStack *sp, const real_T A_data[], const
  int32_T A_size[2], emxArray_real_T *B, emxArray_real_T *Y)
{
  int32_T m;
  int32_T nb;
  int32_T mn;
  int32_T A_size_idx_0;
  int32_T pvt;
  int32_T itemp;
  real_T b_A_data[100];
  int32_T b_m;
  int32_T n;
  int32_T b_mn;
  real_T tau_data[10];
  int32_T jpvt_size[2];
  int32_T jpvt_data[10];
  real_T work_data[10];
  real_T TOL3Z;
  real_T vn1_data[10];
  real_T vn2_data[10];
  int32_T k;
  int32_T knt;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  real_T atmp;
  real_T d0;
  real_T xnorm;
  real_T beta1;
  boolean_T b3;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv16[2] = { 1, 8 };

  const mxArray *m11;
  char_T cv26[8];
  static const char_T cv27[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv28[14];
  int16_T unnamed_idx_1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  m = A_size[0] - 2;
  nb = B->size[1] - 1;
  mn = (int32_T)muDoubleScalarMin(A_size[0], A_size[1]);
  st.site = &yc_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  A_size_idx_0 = A_size[0];
  pvt = A_size[0] * A_size[1];
  for (itemp = 0; itemp < pvt; itemp++) {
    b_A_data[itemp] = A_data[itemp];
  }

  b_m = A_size[0];
  n = A_size[1];
  b_mn = muIntScalarMin_sint32(A_size[0], A_size[1]);
  eml_signed_integer_colon(A_size[1], jpvt_data, jpvt_size);
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
  } else {
    pvt = (int8_T)A_size[1];
    for (itemp = 0; itemp < pvt; itemp++) {
      work_data[itemp] = 0.0;
    }

    TOL3Z = 2.2204460492503131E-16;
    d_st.site = &ed_emlrtRSI;
    b_sqrt(&d_st, &TOL3Z);
    k = 1;
    d_st.site = &fd_emlrtRSI;
    for (knt = 0; knt + 1 <= n; knt++) {
      d_st.site = &gd_emlrtRSI;
      vn1_data[knt] = eml_xnrm2(b_m, A_data, k);
      vn2_data[knt] = vn1_data[knt];
      k += b_m;
    }

    d_st.site = &hd_emlrtRSI;
    for (i = 1; i <= b_mn; i++) {
      i_i = (i + (i - 1) * b_m) - 1;
      nmi = n - i;
      mmi = b_m - i;
      d_st.site = &id_emlrtRSI;
      pvt = eml_ixamax(1 + nmi, vn1_data, i);
      pvt = (i + pvt) - 2;
      if (pvt + 1 != i) {
        d_st.site = &jd_emlrtRSI;
        eml_xswap(&d_st, b_m, b_A_data, 1 + b_m * pvt, 1 + b_m * (i - 1));
        itemp = jpvt_data[pvt];
        jpvt_data[pvt] = jpvt_data[i - 1];
        jpvt_data[i - 1] = itemp;
        vn1_data[pvt] = vn1_data[i - 1];
        vn2_data[pvt] = vn2_data[i - 1];
      }

      if (i < b_m) {
        d_st.site = &kd_emlrtRSI;
        atmp = b_A_data[i_i];
        d0 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          e_st.site = &sd_emlrtRSI;
          xnorm = b_eml_xnrm2(mmi, b_A_data, i_i + 2);
          if (xnorm != 0.0) {
            beta1 = muDoubleScalarHypot(b_A_data[i_i], xnorm);
            if (b_A_data[i_i] >= 0.0) {
              beta1 = -beta1;
            }

            if (muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) {
              knt = 0;
              do {
                knt++;
                e_st.site = &td_emlrtRSI;
                eml_xscal(mmi, 9.9792015476736E+291, b_A_data, i_i + 2);
                beta1 *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(beta1) >= 1.0020841800044864E-292));

              e_st.site = &ud_emlrtRSI;
              xnorm = b_eml_xnrm2(mmi, b_A_data, i_i + 2);
              beta1 = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                beta1 = -beta1;
              }

              d0 = (beta1 - atmp) / beta1;
              e_st.site = &vd_emlrtRSI;
              eml_xscal(mmi, 1.0 / (atmp - beta1), b_A_data, i_i + 2);
              e_st.site = &wd_emlrtRSI;
              if (1 > knt) {
                b3 = false;
              } else {
                b3 = (knt > 2147483646);
              }

              if (b3) {
                f_st.site = &l_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= knt; k++) {
                beta1 *= 1.0020841800044864E-292;
              }

              atmp = beta1;
            } else {
              d0 = (beta1 - b_A_data[i_i]) / beta1;
              e_st.site = &xd_emlrtRSI;
              eml_xscal(mmi, 1.0 / (b_A_data[i_i] - beta1), b_A_data, i_i + 2);
              atmp = beta1;
            }
          }
        }

        tau_data[i - 1] = d0;
      } else {
        d_st.site = &ld_emlrtRSI;
        xnorm = b_A_data[i_i];
        atmp = b_A_data[i_i];
        b_A_data[i_i] = xnorm;
        tau_data[i - 1] = 0.0;
      }

      b_A_data[i_i] = atmp;
      if (i < n) {
        atmp = b_A_data[i_i];
        b_A_data[i_i] = 1.0;
        d_st.site = &md_emlrtRSI;
        eml_matlab_zlarf(&d_st, 1 + mmi, nmi, i_i + 1, tau_data[i - 1], b_A_data,
                         i + i * b_m, b_m, work_data);
        b_A_data[i_i] = atmp;
      }

      d_st.site = &nd_emlrtRSI;
      for (knt = i; knt + 1 <= n; knt++) {
        if (vn1_data[knt] != 0.0) {
          xnorm = muDoubleScalarAbs(b_A_data[(i + A_size_idx_0 * knt) - 1]) /
            vn1_data[knt];
          xnorm = 1.0 - xnorm * xnorm;
          if (xnorm < 0.0) {
            xnorm = 0.0;
          }

          beta1 = vn1_data[knt] / vn2_data[knt];
          beta1 = xnorm * (beta1 * beta1);
          if (beta1 <= TOL3Z) {
            if (i < b_m) {
              d_st.site = &od_emlrtRSI;
              e_st.site = &qd_emlrtRSI;
              if (mmi < 1) {
                xnorm = 0.0;
              } else {
                n_t = (ptrdiff_t)(mmi);
                incx_t = (ptrdiff_t)(1);
                xix0_t = (double *)(&b_A_data[i + b_m * knt]);
                xnorm = dnrm2(&n_t, xix0_t, &incx_t);
              }

              vn1_data[knt] = xnorm;
              vn2_data[knt] = vn1_data[knt];
            } else {
              vn1_data[knt] = 0.0;
              vn2_data[knt] = 0.0;
            }
          } else {
            d_st.site = &pd_emlrtRSI;
            vn1_data[knt] *= muDoubleScalarSqrt(xnorm);
          }
        }
      }
    }
  }

  beta1 = 0.0;
  if (mn > 0) {
    xnorm = muDoubleScalarMax(A_size[0], A_size[1]) * muDoubleScalarAbs
      (b_A_data[0]) * 2.2204460492503131E-16;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= mn - 1)) {
      if (muDoubleScalarAbs(b_A_data[k + A_size_idx_0 * k]) <= xnorm) {
        st.site = &ad_emlrtRSI;
        y = NULL;
        m11 = emlrtCreateCharArray(2, iv16);
        for (i = 0; i < 8; i++) {
          cv26[i] = cv27[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m11, cv26);
        emlrtAssign(&y, m11);
        b_st.site = &rf_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &s_emlrtMCI),
          emlrt_marshallOut(xnorm), &t_emlrtMCI), "sprintf", cv28);
        st.site = &bd_emlrtRSI;
        b_eml_warning(&st, beta1, cv28);
        exitg1 = true;
      } else {
        beta1++;
        k++;
      }
    }
  }

  unnamed_idx_1 = (int16_T)B->size[1];
  itemp = Y->size[0] * Y->size[1];
  Y->size[0] = (int16_T)A_size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, itemp, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  itemp = Y->size[0] * Y->size[1];
  Y->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)Y, itemp, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  pvt = (int16_T)A_size[1] * unnamed_idx_1;
  for (itemp = 0; itemp < pvt; itemp++) {
    Y->data[itemp] = 0.0;
  }

  for (knt = 0; knt < mn; knt++) {
    if (tau_data[knt] != 0.0) {
      for (k = 0; k <= nb; k++) {
        xnorm = B->data[knt + B->size[0] * k];
        itemp = m - knt;
        for (i = 0; i <= itemp; i++) {
          pvt = (knt + i) + 1;
          xnorm += b_A_data[pvt + A_size_idx_0 * knt] * B->data[pvt + B->size[0]
            * k];
        }

        xnorm *= tau_data[knt];
        if (xnorm != 0.0) {
          B->data[knt + B->size[0] * k] -= xnorm;
          itemp = m - knt;
          for (i = 0; i <= itemp; i++) {
            pvt = (knt + i) + 1;
            B->data[pvt + B->size[0] * k] -= b_A_data[pvt + A_size_idx_0 * knt] *
              xnorm;
          }
        }
      }
    }
  }

  for (k = 0; k <= nb; k++) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, beta1, mxDOUBLE_CLASS, (int32_T)
      beta1, &ub_emlrtRTEI, sp);
    for (i = 0; i < (int32_T)beta1; i++) {
      Y->data[(jpvt_data[i] + Y->size[0] * k) - 1] = B->data[i + B->size[0] * k];
    }

    emlrtForLoopVectorCheckR2012b(beta1, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)
      -(1.0 + (-1.0 - beta1)), &tb_emlrtRTEI, sp);
    for (knt = 0; knt < (int32_T)-(1.0 + (-1.0 - beta1)); knt++) {
      xnorm = beta1 + -(real_T)knt;
      Y->data[(jpvt_data[(int32_T)xnorm - 1] + Y->size[0] * k) - 1] /= b_A_data
        [((int32_T)xnorm + A_size_idx_0 * ((int32_T)xnorm - 1)) - 1];
      for (i = 0; i < (int32_T)(xnorm - 1.0); i++) {
        Y->data[(jpvt_data[i] + Y->size[0] * k) - 1] -= Y->data[(jpvt_data
          [(int32_T)xnorm - 1] + Y->size[0] * k) - 1] * b_A_data[i +
          A_size_idx_0 * ((int32_T)xnorm - 1)];
      }
    }
  }
}

static real_T eml_xnrm2(int32_T n, const real_T x_data[], int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  if (n < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x_data[ix0 - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

static void eml_xscal(int32_T n, real_T a, real_T x_data[], int32_T ix0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  double * a_t;
  if (n < 1) {
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x_data[ix0 - 1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

static void eml_xswap(const emlrtStack *sp, int32_T n, real_T x_data[], int32_T
                      ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  boolean_T b7;
  int32_T k;
  real_T temp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &qc_emlrtRSI;
  ix = ix0 - 1;
  iy = iy0 - 1;
  c_st.site = &rc_emlrtRSI;
  if (1 > n) {
    b7 = false;
  } else {
    b7 = (n > 2147483646);
  }

  if (b7) {
    d_st.site = &l_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= n; k++) {
    temp = x_data[ix];
    x_data[ix] = x_data[iy];
    x_data[iy] = temp;
    ix++;
    iy++;
  }
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(d_sprintf), &thisId, y);
  emlrtDestroyArray(&d_sprintf);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  int32_T iv50[2];
  int32_T i14;
  for (i14 = 0; i14 < 2; i14++) {
    iv50[i14] = 1 + 13 * i14;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv50);
  emlrtImportCharArrayR2014b(sp, src, ret, 14);
  emlrtDestroyArray(&src);
}

static void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vc_emlrtRSI;
  eml_warning(&st);
}

void b_mldivide(const emlrtStack *sp, const real_T A_data[], const int32_T
                A_size[2], const real_T B_data[], const int32_T B_size[1],
                real_T Y_data[], int32_T Y_size[1])
{
  const mxArray *y;
  static const int32_T iv35[2] = { 1, 21 };

  const mxArray *m15;
  char_T cv39[21];
  int32_T i;
  static const char_T cv40[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T i12;
  real_T b_B_data[1200];
  int32_T tmp_size[1];
  real_T tmp_data[10];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (B_size[0] == A_size[0]) {
  } else {
    y = NULL;
    m15 = emlrtCreateCharArray(2, iv35);
    for (i = 0; i < 21; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m15, cv39);
    emlrtAssign(&y, m15);
    st.site = &xb_emlrtRSI;
    error(&st, b_message(&st, y, &p_emlrtMCI), &p_emlrtMCI);
  }

  if ((A_size[0] == 0) || (A_size[1] == 0) || (B_size[0] == 0)) {
    Y_size[0] = (int8_T)A_size[1];
    i = (int8_T)A_size[1];
    for (i12 = 0; i12 < i; i12++) {
      Y_data[i12] = 0.0;
    }
  } else if (A_size[0] == A_size[1]) {
    Y_size[0] = B_size[0];
    i = B_size[0];
    for (i12 = 0; i12 < i; i12++) {
      Y_data[i12] = B_data[i12];
    }

    st.site = &xb_emlrtRSI;
    b_eml_lusolve(&st, A_data, A_size, Y_data);
  } else {
    i = B_size[0];
    for (i12 = 0; i12 < i; i12++) {
      b_B_data[i12] = B_data[i12];
    }

    st.site = &xb_emlrtRSI;
    b_eml_qrsolve(&st, A_data, A_size, b_B_data, tmp_data, tmp_size);
    Y_size[0] = tmp_size[0];
    i = tmp_size[0];
    for (i12 = 0; i12 < i; i12++) {
      Y_data[i12] = tmp_data[i12];
    }
  }
}

void mldivide(const emlrtStack *sp, const real_T A_data[], const int32_T A_size
              [2], const emxArray_real_T *B, emxArray_real_T *Y)
{
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 21 };

  const mxArray *m9;
  char_T cv22[21];
  int32_T i;
  static const char_T cv23[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_B;
  int16_T unnamed_idx_1;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[0] == A_size[0]) {
  } else {
    y = NULL;
    m9 = emlrtCreateCharArray(2, iv14);
    for (i = 0; i < 21; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m9, cv22);
    emlrtAssign(&y, m9);
    st.site = &xb_emlrtRSI;
    error(&st, b_message(&st, y, &p_emlrtMCI), &p_emlrtMCI);
  }

  emxInit_real_T(sp, &b_B, 2, &u_emlrtRTEI, true);
  if ((A_size[0] == 0) || (A_size[1] == 0) || ((B->size[0] == 0) || (B->size[1] ==
        0))) {
    unnamed_idx_1 = (int16_T)B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = (int16_T)A_size[1];
    emxEnsureCapacity(sp, (emxArray__common *)Y, i, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    i = Y->size[0] * Y->size[1];
    Y->size[1] = unnamed_idx_1;
    emxEnsureCapacity(sp, (emxArray__common *)Y, i, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = (int16_T)A_size[1] * unnamed_idx_1;
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A_size[0] == A_size[1]) {
    st.site = &xb_emlrtRSI;
    eml_lusolve(&st, A_data, A_size, B, Y);
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_B, i, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B->data[i] = B->data[i];
    }

    st.site = &xb_emlrtRSI;
    eml_qrsolve(&st, A_data, A_size, b_B, Y);
  }

  emxFree_real_T(&b_B);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mldivide.c) */
