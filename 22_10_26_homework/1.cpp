#include <iostream>

using namespace std;

int main() {
  double x0, E, a, sum = 0;
  cin >> x0 >> E;
  int m = 2;
  a = x0;

  while (fabs(a) >= E) {
    sum += a;
    a *= -(x0 * x0) / (3 * m * (m + 1));
    m += 2;
  }
  cout << sum << endl;
}
