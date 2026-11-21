#include <iostream>

using namespace std;

int main() {
  const int N = 100;
  int n[N], A, B, m, s, x[N], y = 0;
  cin >> m;

  for (int a = 0; a < m; a++) {
    cin >> n[a];
  }
  for (int a = 0; a < m; a++) {
    s = s * A + n[a];
  }

  while (s > 0) {
    x[y] = s % B;
    s /= B;
    y++;
  }

  for (int k = 0; k < y / 2; k++) {
    int tmp = x[k];
    x[k] = x[y - 1 - k];
    x[y - k] = tmp;
  }
}
