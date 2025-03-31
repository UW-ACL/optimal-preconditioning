/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * locBsearch.c
 *
 * Code generation for function 'locBsearch'
 *
 */

/* Include files */
#include "locBsearch.h"
#include "hypersphere_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
int32_T sparse_locBsearch(const emxArray_int32_T *x, int32_T xi, int32_T xstart,
                          int32_T xend, boolean_T *found)
{
  const int32_T *x_data;
  int32_T n;
  x_data = x->data;
  if (xstart < xend) {
    if (xi < x_data[xstart - 1]) {
      n = xstart - 1;
      *found = false;
    } else {
      int32_T high_i;
      int32_T low_ip1;
      high_i = xend;
      n = xstart;
      low_ip1 = xstart;
      while (high_i > low_ip1 + 1) {
        int32_T mid_i;
        mid_i = (n >> 1) + (high_i >> 1);
        if (((n & 1) == 1) && ((high_i & 1) == 1)) {
          mid_i++;
        }
        if (xi >= x_data[mid_i - 1]) {
          n = mid_i;
          low_ip1 = mid_i;
        } else {
          high_i = mid_i;
        }
      }
      *found = (x_data[n - 1] == xi);
    }
  } else if (xstart == xend) {
    n = xstart - 1;
    *found = false;
  } else {
    n = 0;
    *found = false;
  }
  return n;
}

/* End of code generation (locBsearch.c) */
