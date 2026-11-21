#include <iostream>

using namespace std;

const int N = 1000;

bool checkAutomorph(int n) {
  int t = n;
  int power = 0;
  while (t > 0) {
    t /= 10;
    if (power == 0) {
      power = 10;
    } else {
      power *= 10;
    }
  }

  if ((n * n) % power == n) {
    return true;
  }
  return false;
}

int main() {
  int a, n, k = 0, res[N];
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> n;
    if (checkAutomorph(n)) {
      res[k++] = n;
    }
  }

  for (int i = 0; i < k; i++) {
    cout << res[i] << " ";
  }
}
