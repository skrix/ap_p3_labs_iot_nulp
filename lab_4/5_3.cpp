#include <iostream>
#include <cmath>
#include <iomanip>

double y(double x) {
  return ((std::exp(x) - std::exp(-x)) / 2.0);
}

double factorial(int t) {
  return (t == 1) ? 1 : factorial(t - 1) * t;
}

double term(double x, int k) {
  return (pow(x, (2.0 * k + 1.0)) / factorial(2.0 * k + 1.0));
}

double sum1(float x, int n) {
  double f = 0.;

  for (int k = 0; k <= n; k++) {
    f += term(x, k);
  }

  return f;
}

double sum2(float x, float eps) {
  double f = 0., ak = 1.;
  int k = 0;

  while (fabs(ak) > eps) {
    ak = term(x, k);
    f += ak;
    k++;
  }

  return f;
}

int main() {
  double a = 0., b = 1.0, n = 5, k = 10;
  double eps = 0.0001;
  double h = (b - a)/(k - 1.0);

  std::cout << std::setw(8) << "x"
            << std::setw(15) << "Sn(x)"
            << std::setw(15) << "Se(x)"
            << std::setw(15) << "y(x)" << std::endl;

  for (int i = 0; i < k; i++) {
    double x = a + i * h;

    std::cout << std::setw(8) << x
              << std::setw(15) << sum1(x, n)
              << std::setw(15) << sum2(x, eps)
              << std::setw(15) << y(x)
              << std::endl;
  }

  return 0;
}
