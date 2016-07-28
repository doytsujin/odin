typedef enum {
  CONSTANT,
  LINEAR,
  SPLINE
} interpolate_type;

typedef struct interpolate_data {
  interpolate_type type;
  size_t n;     // number of points
  size_t ny;    // number of y entries per 'x' point
  size_t i;     // index of last point checked
  double *x;    // x points of interpolation
  double *y;    // y points of interpolation
  double *k;    // knots when using spline interpolation
} interpolate_data;