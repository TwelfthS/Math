#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

/////////////// wellpetr

START_TEST(sin_test) { ck_assert_ldouble_nan(s21_sin(S21_INFINITY)); }
END_TEST

START_TEST(sin_test2) { ck_assert_ldouble_nan(s21_sin(S21_NAN)); }
END_TEST

START_TEST(sin_test3) {
  int success = 0;
  if (abs(s21_sin(-543) - sin(-543)) <= S21_EPS) {
    success = 1;
  }
  ck_assert_int_eq(success, 1);
}
END_TEST

START_TEST(sin_test4) {
  int success = 0;
  if (abs(s21_sin(45654) - sin(45654)) <= S21_EPS) {
    success = 1;
  }
  ck_assert_int_eq(success, 1);
}
END_TEST

START_TEST(cos_test) {
  int success = 0;
  if (abs(s21_cos(46575) - cos(46575)) <= S21_EPS) {
    success = 1;
  }
  ck_assert_int_eq(success, 1);
}
END_TEST

START_TEST(cos_test2) { ck_assert_ldouble_nan(s21_cos(S21_INFINITY)); }
END_TEST

START_TEST(cos_test3) {
  int success = 0;
  if (abs(s21_cos(-46575) - cos(-46575)) <= S21_EPS) {
    success = 1;
  }
  ck_assert_int_eq(success, 1);
}
END_TEST

START_TEST(tan_test) {
  int success = 0;
  if (abs(s21_tan(56) - tan(56)) <= S21_EPS) {
    success = 1;
  }
  ck_assert_int_eq(success, 1);
}
END_TEST

START_TEST(tan_test2) { ck_assert_ldouble_nan(s21_tan(S21_INFINITY)); }
END_TEST

START_TEST(tan_test3) {
  int success = 0;
  if (abs(s21_tan(-56) - tan(-56)) <= S21_EPS) {
    success = 1;
  }
  ck_assert_int_eq(success, 1);
}
END_TEST

START_TEST(tan_test4) {
  int success = 0;
  if (abs(s21_tan(3.14159265358979323846264338327950288 / 2) -
          tan(3.14159265358979323846264338327950288 / 2)) <= S21_EPS) {
    success = 1;
  }
  ck_assert_int_eq(success, 1);
}
END_TEST

//////////// dorothai

START_TEST(log1) {
  ck_assert_ldouble_eq_tol(log(1.5e-8), s21_log(1.5e-8), 1e-6);
}
END_TEST

START_TEST(log32) {
  ck_assert_ldouble_eq_tol(log(1.1e-80), s21_log(1.1e-80), 1e-6);
}
END_TEST

START_TEST(log3) {
  ck_assert_ldouble_eq_tol(log(1.12e-22), s21_log(1.12e-22), 1e-6);
}
END_TEST

START_TEST(log4) {
  ck_assert_ldouble_eq_tol(log(1.1e-5), s21_log(1.1e-5), 1e-6);
}
END_TEST

START_TEST(log5) {
  ck_assert_ldouble_eq_tol(log(1.6e-13), s21_log(1.6e-13), 1e-6);
}
END_TEST

START_TEST(log6) {
  ck_assert_ldouble_eq_tol(log(1.44e-10), s21_log(1.44e-10), 1e-6);
}
END_TEST

START_TEST(log7) {
  ck_assert_ldouble_eq_tol(log(1.7e-7), s21_log(1.7e-7), 1e-6);
}
END_TEST

START_TEST(log8) {
  ck_assert_ldouble_eq_tol(log(1.1e-31), s21_log(1.1e-31), 1e-6);
}
END_TEST

START_TEST(log9) {
  ck_assert_ldouble_infinite(log(0));
  ck_assert_ldouble_infinite(s21_log(0));
}
END_TEST

START_TEST(log33) {
  ck_assert_ldouble_eq_tol(log(567234123.675e-25), s21_log(567234123.675e-25),
                           1e-6);
}
END_TEST

START_TEST(log11) {
  ck_assert_ldouble_eq_tol(log(32145.675e-13), s21_log(32145.675e-13), 1e-6);
}
END_TEST

START_TEST(log12) {
  ck_assert_ldouble_eq_tol(log(1.3e-4), s21_log(1.3e-4), 1e-6);
}
END_TEST

START_TEST(log13) {
  ck_assert_ldouble_eq_tol(log(2.1e-33), s21_log(2.1e-33), 1e-6);
}
END_TEST

START_TEST(log14) {
  ck_assert_ldouble_eq_tol(log(2.6e-12), s21_log(2.6e-12), 1e-6);
}
END_TEST

START_TEST(log15) {
  ck_assert_ldouble_eq_tol(log(1.1e-18), s21_log(1.1e-18), 1e-6);
}
END_TEST

START_TEST(log16) {
  ck_assert_ldouble_eq_tol(log(45632178.000034), s21_log(45632178.000034),
                           1e-6);
}
END_TEST

START_TEST(log17) {
  ck_assert_ldouble_eq_tol(log(5.5768465e4), s21_log(5.5768465e4), 1e-6);
}
END_TEST

START_TEST(log18) {
  ck_assert_ldouble_eq_tol(log(5.5768465e-4), s21_log(5.5768465e-4), 1e-6);
}
END_TEST

START_TEST(log19) { ck_assert_ldouble_eq_tol(log(0.4), s21_log(0.4), 1e-6); }
END_TEST

START_TEST(log20) { ck_assert_ldouble_eq_tol(log(1.0), s21_log(1.0), 1e-6); }
END_TEST

START_TEST(log21) {
  ck_assert_ldouble_eq_tol(log(S21_PI), s21_log(S21_PI), 1e-6);
}
END_TEST

START_TEST(log22) {
  ck_assert_ldouble_eq_tol(log(S21_PI / 6), s21_log(S21_PI / 6), 1e-6);
}
END_TEST

START_TEST(log23) { ck_assert_ldouble_eq_tol(log(50), s21_log(50), 1e-6); }
END_TEST

START_TEST(log24) { ck_assert_ldouble_eq_tol(log(99), s21_log(99), 1e-6); }
END_TEST

START_TEST(log25) {
  ck_assert_ldouble_eq_tol(log(DBL_MAX), s21_log(DBL_MAX), 1e-6);
}
END_TEST

START_TEST(log26) {
  ck_assert_ldouble_nan(s21_log(NAN));
  ck_assert_ldouble_nan(log(NAN));
}
END_TEST

START_TEST(log27) {
  ck_assert_ldouble_infinite(s21_log(INFINITY));
  ck_assert_ldouble_infinite(log(INFINITY));
}
END_TEST

START_TEST(log28) {
  ck_assert_ldouble_nan(s21_log(-INFINITY));
  ck_assert_ldouble_nan(log(-INFINITY));
}
END_TEST

START_TEST(log29) {
  double value = INFINITY;
  long double s21_res = s21_log(value);
  long double math_res = log(value);
  int success = 0;
  if (isinf(s21_res) && isinf(math_res)) success = 1;
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(log30) {
  double value = -INFINITY;
  long double s21_res = s21_log(value);
  long double math_res = log(value);
  int success = 0;
  if (isnan(s21_res) && isnan(math_res)) success = 1;
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(log31) {
  double value = NAN;
  long double s21_res = s21_log(value);
  long double math_res = log(value);
  int success = 0;
  if (isnan(s21_res) && isnan(math_res)) success = 1;
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(fmod1) {
  ck_assert_ldouble_eq(fmod(10.55, 3.4), s21_fmod(10.55, 3.4));
}
END_TEST

START_TEST(fmod2) {
  ck_assert_ldouble_eq(fmod(-10.55, 3.4), s21_fmod(-10.55, 3.4));
}
END_TEST

START_TEST(fmod3) {
  ck_assert_ldouble_eq(fmod(10.55, -3.4), s21_fmod(10.55, -3.4));
}
END_TEST

START_TEST(fmod4) {
  ck_assert_ldouble_eq(fmod(-10.55, -3.4), s21_fmod(-10.55, -3.4));
}
END_TEST

START_TEST(fmod5) {
  ck_assert_ldouble_eq(fmod(24.88, 6.78), s21_fmod(24.88, 6.78));
}
END_TEST

START_TEST(fmod6) {
  ck_assert_ldouble_eq(fmod(-7.4, 1.2), s21_fmod(-7.4, 1.2));
}
END_TEST

START_TEST(fmod7) {
  ck_assert_ldouble_eq(fmod(13.123, -5.23), s21_fmod(13.123, -5.23));
}
END_TEST

START_TEST(fmod8) {
  ck_assert_ldouble_eq(fmod(-6.6, -0.5), s21_fmod(-6.6, -0.5));
}
END_TEST

START_TEST(fmod9) { ck_assert_ldouble_eq(fmod(20, 10), s21_fmod(20, 10)); }
END_TEST

START_TEST(fmod10) { ck_assert_ldouble_eq(fmod(-30, -15), s21_fmod(-30, 15)); }
END_TEST

START_TEST(fmod11) {
  ck_assert_ldouble_eq(fmod(10000, 16), s21_fmod(10000, 16));
}
END_TEST

START_TEST(fmod12) {
  ck_assert_ldouble_eq(fmod(-10000, -16), s21_fmod(-10000, -16));
}
END_TEST

START_TEST(fmod13) {
  ck_assert_ldouble_eq(fmod(-16, -10000), s21_fmod(-16, -10000));
}
END_TEST

START_TEST(fmod14) { ck_assert_ldouble_eq(fmod(0, 10), s21_fmod(0, 10)); }
END_TEST

START_TEST(fmod15) {
  ck_assert_ldouble_nan(fmod(10.55, 0));
  ck_assert_ldouble_nan(s21_fmod(10.55, 0));
}
END_TEST

START_TEST(fmod16) {
  ck_assert_ldouble_nan(fmod(0, 0));
  ck_assert_ldouble_nan(s21_fmod(0, 0));
}
END_TEST

START_TEST(fmod17) {
  ck_assert_ldouble_nan(fmod(NAN, NAN));
  ck_assert_ldouble_nan(s21_fmod(NAN, NAN));
}
END_TEST

START_TEST(fmod18) {
  ck_assert_ldouble_nan(fmod(9.5, NAN));
  ck_assert_ldouble_nan(s21_fmod(9.5, NAN));
}
END_TEST

START_TEST(fmod19) {
  ck_assert_ldouble_nan(fmod(NAN, 9.5));
  ck_assert_ldouble_nan(s21_fmod(NAN, 9.5));
}
END_TEST

START_TEST(fmod20) {
  ck_assert_ldouble_nan(fmod(INFINITY, INFINITY));
  ck_assert_ldouble_nan(s21_fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(fmod21) {
  ck_assert_ldouble_nan(fmod(INFINITY, 0));
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 0));
}
END_TEST

START_TEST(fmod22) {
  ck_assert_ldouble_nan(fmod(-INFINITY, 0));
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, 0));
}
END_TEST

START_TEST(fmod23) {
  ck_assert_ldouble_eq(fmod(10, INFINITY), s21_fmod(10, INFINITY));
}
END_TEST

START_TEST(fmod24) {
  ck_assert_ldouble_eq(fmod(10, -INFINITY), s21_fmod(10, -INFINITY));
}
END_TEST

START_TEST(fmod25) {
  ck_assert_ldouble_nan(s21_fmod(S21_INFINITY, S21_INFINITY));
}
END_TEST

START_TEST(floor1) { ck_assert_ldouble_eq(floor(10.4), s21_floor(10.5)); }
END_TEST

START_TEST(floor2) { ck_assert_ldouble_eq(floor(8.98), s21_floor(8.98)); }
END_TEST

START_TEST(floor3) { ck_assert_ldouble_eq(floor(1.11), s21_floor(1.11)); }
END_TEST

START_TEST(floor4) { ck_assert_ldouble_eq(floor(0), s21_floor(0)); }
END_TEST

START_TEST(floor5) { ck_assert_ldouble_eq(floor(+0), s21_floor(+0)); }
END_TEST

START_TEST(floor6) { ck_assert_ldouble_eq(floor(-0), s21_floor(-0)); }
END_TEST

START_TEST(floor7) { ck_assert_ldouble_eq(floor(-23.58), s21_floor(-23.58)); }
END_TEST

START_TEST(floor8) { ck_assert_ldouble_eq(floor(-34.78), s21_floor(-34.78)); }
END_TEST

START_TEST(floor9) { ck_assert_ldouble_eq(floor(-1.01), s21_floor(-1.01)); }
END_TEST

START_TEST(floor10) {
  ck_assert_ldouble_eq(floor(INFINITY), s21_floor(INFINITY));
}
END_TEST

START_TEST(floor11) {
  ck_assert_ldouble_eq(floor(-INFINITY), s21_floor(-INFINITY));
}
END_TEST

START_TEST(floor12) {
  ck_assert_ldouble_nan(floor(NAN));
  ck_assert_ldouble_nan(s21_floor(NAN));
}
END_TEST

START_TEST(floor13) {
  ck_assert_ldouble_infinite(floor(INFINITY));
  ck_assert_ldouble_infinite(s21_floor(INFINITY));
}
END_TEST

START_TEST(abs1) { ck_assert_int_eq(abs(10), s21_abs(10)); }
END_TEST

START_TEST(abs2) { ck_assert_int_eq(abs(-10), s21_abs(-10)); }
END_TEST

START_TEST(abs3) { ck_assert_int_eq(abs(12345678), s21_abs(12345678)); }
END_TEST

START_TEST(abs4) { ck_assert_int_eq(abs(-12345678), s21_abs(-12345678)); }
END_TEST

START_TEST(abs5) { ck_assert_int_eq(abs(0), s21_abs(0)); }
END_TEST

START_TEST(abs6) { ck_assert_int_eq(abs(+0), s21_abs(+0)); }
END_TEST

START_TEST(abs7) { ck_assert_int_eq(abs(-0), s21_abs(-0)); }
END_TEST

START_TEST(abs8) { ck_assert_int_eq(abs((int)S21_NAN), s21_abs((int)S21_NAN)); }
END_TEST

START_TEST(abs9) {
  ck_assert_int_eq(abs((int)S21_INFINITY), s21_abs((int)S21_INFINITY));
}
END_TEST

START_TEST(abs10) {
  ck_assert_int_eq(abs((int)-S21_INFINITY), s21_abs((int)-S21_INFINITY));
}
END_TEST

//////////////////// jeremiam

START_TEST(exp1) { ck_assert_int_eq(exp(9), s21_exp(9)); }
END_TEST

START_TEST(exp2_2) { ck_assert_ldouble_infinite(exp((double)S21_INFINITY)); }
END_TEST

START_TEST(exp3) { ck_assert_ldouble_nan(exp((double)S21_NAN)); }
END_TEST

START_TEST(exp4) { ck_assert_int_eq(exp(458645695486), s21_exp(458645695486)); }

START_TEST(exp5) { ck_assert_double_eq(exp(-18), s21_exp(-18)); }
END_TEST

START_TEST(exp6) { ck_assert_double_eq(exp(87.9), s21_exp(87.9)); }
END_TEST

START_TEST(pow1) {
  int success = 0;
  if (abs(pow(6, 387) - s21_pow(6, 387)) < S21_EPS) success = 1;
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(pow2) { ck_assert_ldouble_nan(s21_pow(S21_NAN, 387)); }
END_TEST

START_TEST(pow3) {
  ck_assert_double_eq(pow(6, S21_INFINITY), s21_pow(6, S21_INFINITY));
}
END_TEST

START_TEST(pow4) { ck_assert_ldouble_nan(s21_pow(S21_INFINITY, S21_NAN)); }
END_TEST

START_TEST(pow5) { ck_assert_double_eq(pow(-9, 387), s21_pow(-9, 387)); }
END_TEST

START_TEST(pow6) { ck_assert_ldouble_nan(s21_pow(S21_NAN, S21_INFINITY)); }
END_TEST

START_TEST(pow7) {
  ck_assert_double_eq(pow(17, S21_MIN_INFINITY), s21_pow(17, S21_MIN_INFINITY));
}
END_TEST

START_TEST(pow8) {
  ck_assert_double_eq(pow(S21_MIN_INFINITY, 17), s21_pow(S21_MIN_INFINITY, 17));
}
END_TEST

START_TEST(pow9) {
  ck_assert_double_eq(pow(1, S21_MIN_INFINITY), s21_pow(1, S21_MIN_INFINITY));
}
END_TEST

START_TEST(pow10) {
  ck_assert_double_eq(pow(0.3, S21_MIN_INFINITY),
                      s21_pow(0.3, S21_MIN_INFINITY));
}
END_TEST

START_TEST(pow11) {
  ck_assert_double_eq(pow(S21_MIN_INFINITY, -17),
                      s21_pow(S21_MIN_INFINITY, -17));
}
END_TEST

START_TEST(pow12) { ck_assert_double_eq(pow(0, 3), s21_pow(0, 3)); }
END_TEST

START_TEST(pow13) { ck_assert_double_eq(pow(0, -3), s21_pow(0, -3)); }
END_TEST

START_TEST(pow14) {
  ck_assert_double_eq(pow(S21_INFINITY, S21_INFINITY),
                      s21_pow(S21_INFINITY, S21_INFINITY));
}
END_TEST

START_TEST(pow15) {
  ck_assert_double_eq(pow(1, S21_INFINITY), s21_pow(1, S21_INFINITY));
}
END_TEST

START_TEST(pow16) {
  ck_assert_double_eq(pow(0.3, S21_INFINITY), s21_pow(0.3, S21_INFINITY));
}
END_TEST

START_TEST(pow17) { ck_assert_double_eq(pow(1, S21_NAN), s21_pow(1, S21_NAN)); }
END_TEST

START_TEST(pow18) {
  ck_assert_double_eq(pow(S21_MIN_INFINITY, S21_INFINITY),
                      s21_pow(S21_MIN_INFINITY, S21_INFINITY));
}
END_TEST

START_TEST(pow19) {
  ck_assert_double_eq(pow(S21_MIN_INFINITY, 0), s21_pow(S21_MIN_INFINITY, 0));
}
END_TEST

START_TEST(pow20) { ck_assert_double_eq(pow(0, 0), s21_pow(0, 0)); }
END_TEST

START_TEST(pow21) { ck_assert_ldouble_nan(s21_pow(S21_NAN, S21_NAN)); }
END_TEST

START_TEST(pow22) { ck_assert_double_eq(pow(0, -1), s21_pow(0, -1)); }
END_TEST

START_TEST(pow23) { ck_assert_ldouble_nan(s21_pow(S21_NAN, -1)); }
END_TEST

START_TEST(sqrt1) {
  int success = 0;
  if (abs(sqrt(16.876) - s21_sqrt(16.876)) < S21_EPS) success = 1;
  ck_assert_ldouble_eq(1, success);
}
END_TEST

START_TEST(sqrt2) { ck_assert_ldouble_nan(s21_sqrt(-16.876)); }
END_TEST

START_TEST(sqrt3) { ck_assert_ldouble_infinite(s21_sqrt(S21_INFINITY)); }
END_TEST

START_TEST(sqrt4) { ck_assert_ldouble_nan(s21_sqrt(S21_NAN)); }
END_TEST

//////////// sigridva

START_TEST(asin1) {
  int success = 0;
  if (abs(asin(0.564) - s21_asin(0.564)) < S21_EPS) success = 1;
  ck_assert_ldouble_eq(1, success);
}
END_TEST

START_TEST(asin2) { ck_assert_ldouble_nan(s21_asin(16)); }
END_TEST

START_TEST(asin3) { ck_assert_ldouble_nan(s21_asin(S21_INFINITY)); }
END_TEST

START_TEST(asin4) {
  int success = 0;
  if (abs(asin(-0.564) - s21_asin(-0.564)) < S21_EPS) success = 1;
  ck_assert_ldouble_eq(1, success);
}
END_TEST

START_TEST(asin5) { ck_assert_double_eq(asin(1), s21_asin(1)); }
END_TEST

START_TEST(asin6) { ck_assert_double_eq(asin(-1), s21_asin(-1)); }
END_TEST

START_TEST(asin7) { ck_assert_ldouble_nan(s21_asin(-18888888)); }
END_TEST

START_TEST(acos1) {
  int success = 0;
  if (abs(acos(0.564) - s21_acos(0.564)) < S21_EPS) success = 1;
  ck_assert_ldouble_eq(1, success);
}
END_TEST

START_TEST(acos2) { ck_assert_ldouble_nan(s21_acos(16)); }
END_TEST

START_TEST(acos3) { ck_assert_ldouble_nan(s21_acos(S21_INFINITY)); }
END_TEST

START_TEST(acos4) {
  int success = 0;
  if (abs(acos(-0.564) - s21_acos(-0.564)) < S21_EPS) success = 1;
  ck_assert_ldouble_eq(1, success);
}
END_TEST

START_TEST(acos5) {
  for (float k = -1; k <= 1; k += 0.1) {
    double a = s21_acos(k);
    double b = acos(k);
    int success = 0;
    if (abs(acos(a) - s21_acos(b)) < S21_EPS) success = 1;
    ck_assert_ldouble_eq(1, success);
  }
}
END_TEST

START_TEST(acos6) { ck_assert_double_eq(acos(-1), s21_acos(-1)); }
END_TEST

START_TEST(acos7) { ck_assert_double_eq(acos(1), s21_acos(1)); }
END_TEST

START_TEST(acos8) { ck_assert_double_eq(acos(0), s21_acos(0)); }
END_TEST

START_TEST(atan1) {
  int success = 0;
  if (abs(atan(0.564) - s21_atan(0.564)) < S21_EPS) success = 1;
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(atan2_2) {
  int success = 0;
  if (abs(atan(16) - s21_atan(16)) < S21_EPS) success = 1;
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(atan3) {
  ck_assert_ldouble_eq(atan(S21_INFINITY), s21_atan(S21_INFINITY));
}
END_TEST

START_TEST(atan4) { ck_assert_int_eq(atan(-0.564), s21_atan(-0.564)); }
END_TEST

START_TEST(atan5) { ck_assert_int_eq(atan(-0), s21_atan(-0)); }
END_TEST

START_TEST(atan6) { ck_assert_int_eq(atan(-767.6), s21_atan(-767.6)); }
END_TEST

START_TEST(atan7) { ck_assert_int_eq(atan(-7000.6), s21_atan(-7000.6)); }
END_TEST

START_TEST(ceil1) {
  ck_assert_double_eq_tol(s21_ceil(-0.1), ceil(-0.1), 0.000001);
}
END_TEST

START_TEST(ceil2) {
  ck_assert_double_eq_tol(s21_ceil(-213.3), ceil(-213.3), 0.000001);
}
END_TEST

START_TEST(ceil3) { ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY)); }
END_TEST

START_TEST(ceil4) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(ceil5) { ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY)); }
END_TEST

START_TEST(ceil6) { ck_assert_double_eq_tol(s21_ceil(50), ceil(50), 0.000001); }
END_TEST

START_TEST(ceil7) {
  ck_assert_double_eq_tol(s21_ceil(-50), ceil(-50), 0.000001);
}
END_TEST

Suite *test_suite(void) {
  Suite *s = suite_create("Library tests");

  ////////// wellpetr

  TCase *tc_wp = tcase_create("wellpetr");
  suite_add_tcase(s, tc_wp);

  tcase_add_test(tc_wp, sin_test);
  tcase_add_test(tc_wp, cos_test);
  tcase_add_test(tc_wp, tan_test);
  tcase_add_test(tc_wp, sin_test2);
  tcase_add_test(tc_wp, cos_test2);
  tcase_add_test(tc_wp, tan_test2);
  tcase_add_test(tc_wp, sin_test3);
  tcase_add_test(tc_wp, cos_test3);
  tcase_add_test(tc_wp, tan_test3);
  tcase_add_test(tc_wp, sin_test4);
  tcase_add_test(tc_wp, tan_test4);

  ///////////// dorothai

  TCase *tc1_1 = tcase_create("dorothai");
  suite_add_tcase(s, tc1_1);
  tcase_add_test(tc1_1, log1);
  tcase_add_test(tc1_1, log32);
  tcase_add_test(tc1_1, log3);
  tcase_add_test(tc1_1, log4);
  tcase_add_test(tc1_1, log5);
  tcase_add_test(tc1_1, log6);
  tcase_add_test(tc1_1, log7);
  tcase_add_test(tc1_1, log8);
  tcase_add_test(tc1_1, log9);
  tcase_add_test(tc1_1, log33);
  tcase_add_test(tc1_1, log11);
  tcase_add_test(tc1_1, log12);
  tcase_add_test(tc1_1, log13);
  tcase_add_test(tc1_1, log14);
  tcase_add_test(tc1_1, log15);
  tcase_add_test(tc1_1, log16);
  tcase_add_test(tc1_1, log17);
  tcase_add_test(tc1_1, log18);
  tcase_add_test(tc1_1, log19);
  tcase_add_test(tc1_1, log20);
  tcase_add_test(tc1_1, log21);
  tcase_add_test(tc1_1, log22);
  tcase_add_test(tc1_1, log23);
  tcase_add_test(tc1_1, log24);
  tcase_add_test(tc1_1, log25);
  tcase_add_test(tc1_1, log26);
  tcase_add_test(tc1_1, log27);
  tcase_add_test(tc1_1, log28);
  tcase_add_test(tc1_1, log29);
  tcase_add_test(tc1_1, log30);
  tcase_add_test(tc1_1, log31);
  tcase_add_test(tc1_1, fmod1);
  tcase_add_test(tc1_1, fmod2);
  tcase_add_test(tc1_1, fmod3);
  tcase_add_test(tc1_1, fmod4);
  tcase_add_test(tc1_1, fmod5);
  tcase_add_test(tc1_1, fmod6);
  tcase_add_test(tc1_1, fmod7);
  tcase_add_test(tc1_1, fmod8);
  tcase_add_test(tc1_1, fmod9);
  tcase_add_test(tc1_1, fmod10);
  tcase_add_test(tc1_1, fmod11);
  tcase_add_test(tc1_1, fmod12);
  tcase_add_test(tc1_1, fmod13);
  tcase_add_test(tc1_1, fmod14);
  tcase_add_test(tc1_1, fmod15);
  tcase_add_test(tc1_1, fmod16);
  tcase_add_test(tc1_1, fmod17);
  tcase_add_test(tc1_1, fmod18);
  tcase_add_test(tc1_1, fmod19);
  tcase_add_test(tc1_1, fmod20);
  tcase_add_test(tc1_1, fmod21);
  tcase_add_test(tc1_1, fmod22);
  tcase_add_test(tc1_1, fmod23);
  tcase_add_test(tc1_1, fmod24);
  tcase_add_test(tc1_1, fmod25);
  tcase_add_test(tc1_1, floor1);
  tcase_add_test(tc1_1, floor2);
  tcase_add_test(tc1_1, floor3);
  tcase_add_test(tc1_1, floor4);
  tcase_add_test(tc1_1, floor5);
  tcase_add_test(tc1_1, floor6);
  tcase_add_test(tc1_1, floor7);
  tcase_add_test(tc1_1, floor8);
  tcase_add_test(tc1_1, floor9);
  tcase_add_test(tc1_1, floor10);
  tcase_add_test(tc1_1, floor11);
  tcase_add_test(tc1_1, floor12);
  tcase_add_test(tc1_1, floor13);
  tcase_add_test(tc1_1, abs1);
  tcase_add_test(tc1_1, abs2);
  tcase_add_test(tc1_1, abs3);
  tcase_add_test(tc1_1, abs4);
  tcase_add_test(tc1_1, abs5);
  tcase_add_test(tc1_1, abs6);
  tcase_add_test(tc1_1, abs7);
  tcase_add_test(tc1_1, abs8);
  tcase_add_test(tc1_1, abs9);
  tcase_add_test(tc1_1, abs10);

  //////// jeremiam

  TCase *tc2 = tcase_create("jeremiam");
  suite_add_tcase(s, tc2);
  tcase_add_test(tc2, exp1);
  tcase_add_test(tc2, exp2_2);
  tcase_add_test(tc2, exp3);
  tcase_add_test(tc2, exp4);
  tcase_add_test(tc2, exp5);
  tcase_add_test(tc2, exp6);
  tcase_add_test(tc2, pow1);
  tcase_add_test(tc2, pow2);
  tcase_add_test(tc2, pow3);
  tcase_add_test(tc2, pow4);
  tcase_add_test(tc2, pow5);
  tcase_add_test(tc2, pow6);
  tcase_add_test(tc2, pow7);
  tcase_add_test(tc2, pow8);
  tcase_add_test(tc2, pow9);
  tcase_add_test(tc2, pow10);
  tcase_add_test(tc2, pow11);
  tcase_add_test(tc2, pow12);
  tcase_add_test(tc2, pow13);
  tcase_add_test(tc2, pow14);
  tcase_add_test(tc2, pow15);
  tcase_add_test(tc2, pow17);
  tcase_add_test(tc2, pow18);
  tcase_add_test(tc2, pow19);
  tcase_add_test(tc2, pow20);
  tcase_add_test(tc2, pow21);
  tcase_add_test(tc2, pow22);
  tcase_add_test(tc2, pow23);
  tcase_add_test(tc2, pow16);
  tcase_add_test(tc2, sqrt1);
  tcase_add_test(tc2, sqrt2);
  tcase_add_test(tc2, sqrt3);
  tcase_add_test(tc2, sqrt4);

  ///////// sigridva

  TCase *tc3 = tcase_create("sigridva");
  suite_add_tcase(s, tc3);
  tcase_add_test(tc3, asin1);
  tcase_add_test(tc3, asin2);
  tcase_add_test(tc3, asin3);
  tcase_add_test(tc3, asin4);
  tcase_add_test(tc3, asin5);
  tcase_add_test(tc3, asin6);
  tcase_add_test(tc3, asin7);
  tcase_add_test(tc3, acos1);
  tcase_add_test(tc3, acos2);
  tcase_add_test(tc3, acos3);
  tcase_add_test(tc3, acos4);
  tcase_add_test(tc3, acos5);
  tcase_add_test(tc3, acos6);
  tcase_add_test(tc3, acos7);
  tcase_add_test(tc3, acos8);
  tcase_add_test(tc3, atan1);
  tcase_add_test(tc3, atan2_2);
  tcase_add_test(tc3, atan3);
  tcase_add_test(tc3, atan4);
  tcase_add_test(tc3, atan5);
  tcase_add_test(tc3, atan6);
  tcase_add_test(tc3, atan7);
  tcase_add_test(tc3, ceil1);
  tcase_add_test(tc3, ceil2);
  tcase_add_test(tc3, ceil3);
  tcase_add_test(tc3, ceil4);
  tcase_add_test(tc3, ceil5);
  tcase_add_test(tc3, ceil6);
  tcase_add_test(tc3, ceil7);

  return s;
}

int main() {
  int success = 0;
  Suite *s;
  SRunner *runner;
  s = test_suite();
  runner = srunner_create(s);
  srunner_run_all(runner, CK_NORMAL);
  success = srunner_ntests_failed(runner);
  srunner_free(runner);
  if (success == 0) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}
