#include <iostream>

using namespace std;

const int N = 1000;

int main() {
  int a, arr1[N], arr2[N];
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> arr1[i];
  }
  for (int i = 0; i < a; i++) {
    cin >> arr2[i];
  }

  // reverse arr2
  for (int i = 0; i < a / 2; i++) {
    int temp = arr2[i];
    arr2[i] = arr2[a - i - 1];
    arr2[a - i - 1] = temp;
  }

  // reverse each number in arr2
  for (int i = 0; i < a; i++) {
    int reversed = 0;
    int temp = arr2[i];
    while (temp > 0) {
      reversed = reversed * 10 + temp % 10;
      temp /= 10;
    }
    arr2[i] = reversed;
  }

  for (int i = 0; i < a; i++) {
    if (arr1[i] != arr2[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
