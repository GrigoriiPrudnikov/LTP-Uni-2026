#include <iostream>

using namespace std;

int main() {
  int N, a, x, y, z, f = 0;
  x = y = z = 0;
  for (N = 2; f != 1; N += 1) {
    a = N;
    if (a % 3 != 0 && a > 0) {
      a -= 1;
      x = a / 3;
      a -= a / 3;
      if (a % 3 != 0 && a > 0) {
        a -= 1;
        y = a / 3;
        a -= a / 3;
        if (a % 3 != 0 && a > 0) {
          a -= 1;
          z = a / 3;
          a -= a / 3;
          if (x != 0 && y != 0 && z != 0) {
            f = 1;
            cout << N << " ---------- ";
          }
        }
      }
    }
  }
  cout << x << " " << y << " " << z;
}
