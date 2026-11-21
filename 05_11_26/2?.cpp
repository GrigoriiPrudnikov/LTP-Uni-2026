#include <iostream>

using namespace std;

const int N = 1000;

void getDigits(long long n, int digits[10]) {
  while (n > 0) {
    digits[n % 10] += 1;
    n /= 10;
  }
}

int main() {
  int n, s, l, arr[N];
  long long k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;

    int digits[10] = {};
    getDigits(s, digits);
    l = 0;

    while (s > 0) {
      l++;
      s /= 10;
    }

    k = 1;
    for (int j = 1; j < l; j++)
      k *= 10;

    s = 0;
    for (int j = 9; j > 0; j--) {
      while (digits[j] > 0) {
        s += j * k;
        digits[j]--;
        k /= 10;
      }
    }
    cout << s << endl;
  }
}
