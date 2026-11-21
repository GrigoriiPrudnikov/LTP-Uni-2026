#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // int max1 = -1;
  // int min = 100;
  // int c1, c2 = 0;
  //
  // int n = 9102026;
  //
  // while (n) {
  //   int a = n % 10;
  //   n %= 10;
  //   if (a > max1) {
  //     c1 = 1;
  //   } else if (a < min) {
  //     c2 = 1;
  //   } else if (a == max1) {
  //     c1++;
  //   } else if (a == min) {
  //     c2++;
  //   }
  // }
  //
  // // ======================================================================
  // int c = 0;
  //
  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 10; j++) {
  //     for (int k = 0; k < 10; k++) {
  //       int x = i * 100 + j * 10 + k;
  //       if (i + j + k >= 1 && i + j + k <= 27) {
  //         c++;
  //       }
  //     }
  //   }
  // }
  //
  // std::cout << c << std::endl;
  // return 0;
  //
  // // =====================================================================
  // string s = "";
  // c = 0;
  // bool flag = true;
  // int len = s.length();
  //
  // for (int i = 0; s[i] && c >= 0; i++) {
  //   if (s[i] == '(') {
  //     c++;
  //   }
  //   if (s[i] == ')') {
  //     c--;
  //   }
  // }
  // if (c == 0) {
  //   cout << "YES" << endl;
  // } else {
  //   cout << "NO" << endl;
  // }
  //
  // // ===================================================================
  // double num = 13;
  // flag = true;
  // int d;
  //
  // for (d = 2; d * d < n; d++) {
  //   if (n % d == 0) {
  //     break;
  //   }
  // }
  //
  // if (d * d > n) {
  //   cout << "YES" << endl;
  // } else {
  //   cout << "NO" << endl;
  // }
  //
  // // ===================================================================
  // double A, E, Xn;
  // Xn = A / 2;
  //
  // for (; fabs(Xn * Xn - A) > E; Xn = Xn / 2 + A / (Xn * 2))
  //   ;
  //
  // cout << Xn << endl;

  int n;
  cin >> n;

  int c = 0;
  for (int d = 1; d * d < n; d++) {
    if (d * d == n) {
      c += d;
      continue;
    }
    if (n % d == 0) {
      c += d;
      c += n / d;
    }
  }

  if (c == n) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
