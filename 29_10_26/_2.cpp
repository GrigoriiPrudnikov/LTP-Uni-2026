#include <iostream>

using namespace std;

const int N = 1000;

int firstDigit(unsigned long long n) {
  while (n >= 10) {
    n /= 10;
  }
  return n;
}

int main() {
  int n, arr[N];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int i = 0, j = 1, curLen = 1, maxLen = curLen;

  while (i + 1 < n) {
    if (arr[i] % 10 == firstDigit(arr[i + 1])) {
      curLen++;
    } else {
      maxLen = maxLen > curLen ? maxLen : curLen;
    }
    i++;
  }

  maxLen = maxLen > curLen ? maxLen : curLen;
  cout << maxLen << endl;
}
