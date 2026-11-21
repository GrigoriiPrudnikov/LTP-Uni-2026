#include <iostream>

using namespace std;

const int N = 1000;

void getDigits(long long n, int digits[10]) {
  while (n > 0) {
    digits[n % 10] = 1;
    n /= 10;
  }
}

int main() {
  int n, s, k = 0, mx, arr[N];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;

    int digits[10] = {};
    getDigits(s, digits);

    for (int j = 1; j < 10; j++) {
      if (digits[j] != 0 && s % j == 0) {
        arr[k++] = s;
        if (s > mx) {
          mx = s;
        }
        break;
      }
    }
  }

  cout << "\n";
  for (int i = 0; i < k; i++) {
    cout << arr[i] << endl;
  }
  cout << "max is " << mx << endl;
}
