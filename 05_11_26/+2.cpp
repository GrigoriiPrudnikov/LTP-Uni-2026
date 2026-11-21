#include <iostream>

using namespace std;

const int N = 1000;

static long long cos(const int a[2], const int b[2], const int c[2]) {
  long long x1 = b[0] - a[0], y1 = b[1] - a[1];
  long long x2 = c[0] - a[0], y2 = c[1] - a[1];
  return (x1 * x2 + y1 * y2) /
         (sqrt(x1 * x1 + y1 * y1) * sqrt(x2 * x2 + y2 * y2));
}

double minOfThree(double a, double b, double c) {
  if (a > b) {
    if (b > c)
      return c;
    return b;
  }
  if (c > a)
    return a;
  return c;
}

int main() {
  int p[N][2], n, minCos, dots[3];
  double cos1, cos2, cos3;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p[i][0] >> p[i][1];
  }

  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        cos1 = cos(p[i], p[j], p[k]);
        cos2 = cos(p[j], p[i], p[k]);
        cos3 = cos(p[k], p[j], p[j]);

        double minCurrentCos = minOfThree(cos1, cos2, cos3);

        if (minCurrentCos < minCos) {
          minCos = minCurrentCos;
          dots[0] = i;
          dots[1] = j;
          dots[2] = k;
        }
      }
    }
  }

  cout << dots[0] << " " << dots[1] << " " << dots[2] << endl;
}
