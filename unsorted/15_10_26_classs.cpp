#include <cmath>
#include <iostream>

using namespace std;

int main() {
  // double x0, E, a, sum;
  // cin >> x0 >> E;
  // int m = 4;
  // a = -x0 / 6;
  //
  // while (fabs(a) >= E) {
  //   sum += a;
  //   a *= -(x0 * x0) / (m * (m - 1));
  //   m += 2;
  // }
  //
  // cout << sum << endl;

  // const int n = 100;
  // int power;
  // cin >> power;
  // double P[n], x, S;
  // for (int a = 0; a <= power; a++) {
  //   cin >> P[a];
  // }
  // cin >> x;
  // S = P[0] * x + P[1];
  //
  // for (int a = 2; a < power; a++) {
  //   S = S * x + P[a];
  // }
  // cout << S;

  const int n = 10, m = 5, q = 17;
  int X[n], Y[m];
  for (int i = 0; i < n; i++) {
    cin >> X[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> Y[i];
  }
  int minDiff = 1000;
  int besti = -1, bestj = -1;
  int i = 0, j = m - 1;
  while (i < n && j >= 0) {
    int s = X[i] + Y[j];
    if (s == q) {
      minDiff = 0;
      besti = i;
      bestj = j;
      break;
    }
    if (fabs(s - q) < minDiff) {
      minDiff = fabs(s - q);
      besti = i;
      bestj = j;
    }
    if (s < q) {
      i++;
    } else {
      j--;
    }
  }

  cout << "diff - " << minDiff << endl;
  cout << "best i - " << besti << endl;
  cout << "best j - " << bestj << endl;

  return 0;
}
