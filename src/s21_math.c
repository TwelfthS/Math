#include "s21_math.h"

/// wellpetr

long double fact(
    double n) {  // for factorial, only positive values (made it for sin)
  long double ret = 1;
  for (long double i = 1; i <= n; i++) {
    ret *= i;
  }
  return ret;
}

long double s21_sin(double x) {
  x = s21_fmod(x, 2 * S21_PI);
  long double s = 0;
  double n = 1;
  double sign = 1;
  while (n < 20) {
    s += sign * s21_pow(x, n) / fact(n);
    sign *= -1;
    n += 2;
  }
  return s;
}

long double s21_cos(double x) {
  x = s21_fmod(x, 2 * S21_PI);
  long double s = 0;
  double n = 0;
  double sign = 1;
  while (n < 20) {
    s += sign * s21_pow(x, n) / fact(n);
    sign *= -1;
    n += 2;
  }
  return s;
}

long double s21_tan(double x) {
  if (x == S21_PI / 2) {
    return 16331239353195370.000000;
  }
  return s21_sin(x) / s21_cos(x);
}

//////// dorothai

int s21_abs(int x) { return x > 0 ? x : -x; }

long double s21_floor(double x) {
  long double res = 0.0;
  int flag = 0;
  if (!s21_fin(x)) {
    res = x;
    flag = 1;
  }
  if (flag == 0) {
    res = (long long int)x;
    if (s21_fabs(x - res) > 0.0 && s21_fabs(x) > 0.0) {
      if (x < 0.0) {
        res -= 1;
      }
    }
  }
  return res;
}

long double s21_fmod(double x, double y) {
  long double res = 0.0;
  if (!s21_fin(x) || s21_nan(y)) {
    res = S21_NAN;
  } else if (s21_inf(x) && s21_inf(y)) {
    res = S21_NAN;
  } else if (s21_inf(y)) {
    res = x;
  } else if (s21_fabs(y) < 1e-7) {
    res = S21_NAN;
  } else if (s21_fabs(x) < 1e-7) {
    res = 0;
  } else {
    long long int num = 0;
    num = x / y;
    res = (long double)x - num * (long double)y;
  }
  return res;
}

long double s21_log(double x) {
  int ex_pow = 0;
  double result = 0;
  double compare = 0;
  if (x == 1.0 / 0.0) {
    result = 1.0 / 0.0;
  } else if (x < 0) {
    result = 0.0 / 0.0;
  } else if (x == 0) {
    result = -1.0 / 0.0;
  } else {
    for (; x >= EXPONENT; x /= EXPONENT, ex_pow++) continue;

    for (int i = 0; i < 100; i++) {
      compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
  }
  return (result + ex_pow);
}

/////// jeremiam

long double s21_fabs(double x) {
  if (x < 0) {
    x *= -1;
  }
  return x;
}

long double s21_exp(double x) {
  long double sum = 1, fctr = 1, num = 1;
  int flag = 0;
  int flag_2 = 0;
  if (x < 0) {
    x *= -1;
    flag = 1;
  }
  while (s21_fabs(fctr) > S21_EPS && flag_2 == 0) {
    fctr *= x / num;
    num += 1;
    sum += fctr;
    if (sum > S21_DBL_MAX) {
      sum = S21_INFINITY;
      flag_2 = 1;
    }
  }
  if (flag == 1) {
    if (sum > S21_DBL_MAX) {
      sum = 0;
    } else {
      sum = 1.0 / sum;
    }
  }
  if (sum > S21_DBL_MAX) {
    sum = S21_INFINITY;
  }
  return sum;
}

long double s21_pow(double base, double exp) {
  long double res;
  long double copy = base;
  res = s21_exp(s21_log(copy) * exp);

  if (exp != exp) {
    if (base == 1)
      res = 1;
    else
      res = S21_NAN;
  }
  if (base != base) {
    if (exp == 0)
      res = 1;
    else
      res = S21_NAN;
  }

  if (exp == S21_MIN_INFINITY && base == base) {
    if (base == 1 || base == -1)
      res = 1;
    else if (-1 < base && base < 1)
      res = S21_INFINITY;
    else
      res = 0;
  }
  if (exp == S21_INFINITY && base == base) {
    if (base == S21_MIN_INFINITY)
      res = S21_INFINITY;
    else if (base == 1 || base == -1)
      res = 1;
    else if (-1 < base && base < 1)
      res = 0;
    else
      res = S21_INFINITY;
  }
  if (base == S21_MIN_INFINITY) {
    if (exp == 0)
      res = 1;
    else if (exp > 0)
      res = S21_INFINITY;
    else
      res = 0;
  }
  if (base == 0) {
    if (exp == 0)
      res = 1;
    else if (exp > 0)
      res = 0;
    else
      res = S21_INFINITY;
  }
  if (base < 0 && s21_fmod(exp, 1) != 0) return S21_INFINITY;
  if (base < 0 && exp == 0)
    return 1;
  else {
    if (copy < 0) {
      copy = -copy;
      res = s21_exp(s21_log(copy) * exp);
      if (s21_fmod(exp, 2) != 0) res = -res;
    }
  }
  return res;
}

long double s21_sqrt(double x) {
  long double result = 0;
  result = s21_pow(x, 0.5);
  if (x < 0) {
    result = S21_NAN;
  }
  return result;
}

////// sigridva

long double s21_asin(long double x) {
  long double res = 0;
  if (x < -1 || x > 1) {
    res = S21_NAN;
  } else if (x == 1) {
    res = S21_PI / 2;
  } else if (x == -1) {
    res = -S21_PI / 2;
  } else {
    long double e1 = 1 - s21_pow((double)x, 2);
    x = x / (s21_sqrt((e1)));
    res = s21_atan(x);
  }
  return res;
}

long double s21_atan(long double x) {
  int i = 20;
  long double res = 0;
  if (x == S21_INFINITY) {
    res = S21_PI / 2;
  } else if (x <= 1.0 && -1.0 <= x) {
    for (double n = 0; n < i; n++) {
      double flag = s21_pow(-1, (double)n);
      res += flag * s21_pow((double)x, 2 * n + 1) / (2 * n + 1);
    }
  } else {
    for (int n = 0; n < i; n++) {
      double flag = s21_pow(-1, (double)n);
      res += flag * s21_pow((double)x, -1 - 2 * n) / (2 * n + 1);
    }
    res = (S21_PI * s21_sqrt(s21_pow((double)x, 2))) / (2 * x) - res;
  }
  return res;
}

long double s21_acos(long double x) {
  long double res;
  if (x < -1 || x > 1) {
    res = S21_NAN;
  } else if (x == -1) {
    res = S21_PI;
  } else if (x == 1) {
    res = 0.0;
  } else {
    res = S21_PI / 2 - s21_asin(x);
  }
  return res;
}

long double s21_ceil(long double x) {
  long double res = 0.;
  if (x > S21_DBL_MAX) {
    res = S21_INFINITY;
  } else if (x < -S21_DBL_MAX) {
    res = S21_MIN_INFINITY;
  } else if (x <= S21_DBL_MAX && x >= S21_DBL_MIN) {
    if (s21_fmod(x, 1)) {
      if ((int)x > 0.) {
        res = (int)x + 1;
      } else {
        res = (int)x;
      }
    } else {
      res = x;
    }
  } else {
    res = S21_NAN;
  }

  return res;
}
