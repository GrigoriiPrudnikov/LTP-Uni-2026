#include <iostream>

using namespace std;

int main() {
  int a, b, s1, s2;
  s1 = s2 = 0;
  cin >> a >> b;
  for (int i = 1; i < a / 2 + 1; i++) {
    if (a % i == 0) {
      s1 += i;
    }
  }
  for (int i = 1; i < b / 2 + 1; i++) {
    if (b % i == 0) {
      s2 += i;
    }
  }
  if ((a == s2) && (b == s1)) {
    cout << "yes";
  } else {
    cout << "no";
  }
  return 0;
}
