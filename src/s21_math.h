#ifndef S21_MATH_H
#define S21_MATH_H

#define EXPONENT 2.7182818284590452353602874713526624
#define S21_PI 3.14159265358979323846264338327950288
#define S21_NAN 0.0 / 0.0
#define S21_INFINITY 1.0 / 0.0
#define S21_MIN_INFINITY -1.0 / 0.0
#define s21_fin(x) __builtin_isfinite(x)
#define s21_nan(x) __builtin_isnan(x)
#define s21_inf(x) __builtin_isinf(x)
#define S21_EPS 1e-17
#define S21_DBL_MAX 1.7976931348623158e+308
#define S21_DBL_MIN -1.7976931348623158e+308

// wellpetr

long double fact(double n);  // factorial for sine and cosine
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);

// dorothai

int s21_abs(int x);
long double s21_fmod(double x, double y);
long double s21_floor(double x);
long double s21_log(double x);

// jeremiam

long double s21_fabs(double x);
long double s21_exp(double x);
long double s21_pow(double base, double exp);
long double s21_sqrt(double x);

// sigridva

long double s21_asin(long double x);
long double s21_atan(long double x);
long double s21_acos(long double x);
long double s21_ceil(long double x);

#endif
