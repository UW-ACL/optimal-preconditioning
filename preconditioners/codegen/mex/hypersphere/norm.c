/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "norm.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bd_emlrtRSI = {
    43,     /* lineNo */
    "norm", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/norm.m" /* pathName
                                                                            */
};

static emlrtRSInfo cd_emlrtRSI = {
    51,     /* lineNo */
    "norm", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/norm.m" /* pathName
                                                                            */
};

static emlrtRSInfo dd_emlrtRSI = {
    24,                     /* lineNo */
    "matchStringParameter", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/matchStringParameter.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI =
    {
        91,       /* lineNo */
        "strcmp", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "strcmp.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI =
    {
        167,          /* lineNo */
        "loc_strcmp", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "strcmp.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI =
    {
        240,       /* lineNo */
        "charcmp", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "strcmp.m" /* pathName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    15,                      /* lineNo */
    9,                       /* colNo */
    "assertSupportedString", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "assertSupportedString.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    137,    /* lineNo */
    23,     /* colNo */
    "norm", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/norm.m" /* pName
                                                                            */
};

/* Function Definitions */
real_T b_norm(const emlrtStack *sp, const real_T x[298], const char_T P[3])
{
  static const char_T b_cv[128] = {
      '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\a',   '\b',
      '\t',   '\n',   '\v',   '\f',   '\r',   '\x0e', '\x0f', '\x10', '\x11',
      '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
      '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',    '!',    '\"',   '#',
      '$',    '%',    '&',    '\'',   '(',    ')',    '*',    '+',    ',',
      '-',    '.',    '/',    '0',    '1',    '2',    '3',    '4',    '5',
      '6',    '7',    '8',    '9',    ':',    ';',    '<',    '=',    '>',
      '?',    '@',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
      'h',    'i',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
      'q',    'r',    's',    't',    'u',    'v',    'w',    'x',    'y',
      'z',    '[',    '\\',   ']',    '^',    '_',    '`',    'a',    'b',
      'c',    'd',    'e',    'f',    'g',    'h',    'i',    'j',    'k',
      'l',    'm',    'n',    'o',    'p',    'q',    'r',    's',    't',
      'u',    'v',    'w',    'x',    'y',    'z',    '{',    '|',    '}',
      '~',    '\x7f'};
  static const char_T cv1[3] = {'f', 'r', 'o'};
  static const char_T cv2[3] = {'i', 'n', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T absx;
  real_T y;
  int32_T exitg1;
  int32_T i;
  int32_T kstr;
  int32_T p;
  boolean_T P_IS_VALID;
  boolean_T VECTOR_INPUT_AND_P_IS_NUMERIC;
  boolean_T b_p;
  boolean_T guard1 = false;
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
  VECTOR_INPUT_AND_P_IS_NUMERIC = false;
  P_IS_VALID = false;
  p = 0;
  st.site = &bd_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  c_st.site = &ed_emlrtRSI;
  d_st.site = &fd_emlrtRSI;
  b_p = false;
  kstr = 0;
  do {
    exitg1 = 0;
    if (kstr < 3) {
      e_st.site = &gd_emlrtRSI;
      i = (uint8_T)P[kstr];
      if (i > 127) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &h_emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (b_cv[i] != b_cv[(int32_T)cv1[kstr]]) {
        exitg1 = 1;
      } else {
        kstr++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  guard1 = false;
  if (b_p) {
    P_IS_VALID = true;
    p = 2;
    VECTOR_INPUT_AND_P_IS_NUMERIC = true;
    guard1 = true;
  } else {
    st.site = &cd_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    c_st.site = &ed_emlrtRSI;
    d_st.site = &fd_emlrtRSI;
    b_p = false;
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        e_st.site = &gd_emlrtRSI;
        i = (uint8_T)P[kstr];
        if (i > 127) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &h_emlrtRTEI, "Coder:toolbox:unsupportedString",
              "Coder:toolbox:unsupportedString", 2, 12, 127);
        }
        if (b_cv[i] != b_cv[(int32_T)cv2[kstr]]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    if (b_p) {
      P_IS_VALID = true;
      y = 0.0;
      for (p = 0; p < 298; p++) {
        absx = muDoubleScalarAbs(x[p]);
        if (muDoubleScalarIsNaN(absx) || (absx > y)) {
          y = absx;
        }
      }
    } else {
      guard1 = true;
    }
  }
  if (guard1) {
    if (VECTOR_INPUT_AND_P_IS_NUMERIC) {
      if (p == 2) {
        y = 0.0;
        absx = 3.3121686421112381E-170;
        for (p = 0; p < 298; p++) {
          real_T absxk;
          absxk = muDoubleScalarAbs(x[p]);
          if (absxk > absx) {
            real_T t;
            t = absx / absxk;
            y = y * t * t + 1.0;
            absx = absxk;
          } else {
            real_T t;
            t = absxk / absx;
            y += t * t;
          }
        }
        y = absx * muDoubleScalarSqrt(y);
      } else if (p == 1) {
        y = 0.0;
        for (p = 0; p < 298; p++) {
          y += muDoubleScalarAbs(x[p]);
        }
      } else {
        y = rtNaN;
      }
    } else {
      y = rtNaN;
    }
  }
  if (!P_IS_VALID) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI, "MATLAB:norm:unknownNorm",
                                  "MATLAB:norm:unknownNorm", 0);
  }
  return y;
}

real_T c_norm(const real_T x[196])
{
  real_T scale;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 196; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

/* End of code generation (norm.c) */
