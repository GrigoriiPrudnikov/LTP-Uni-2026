#include <iostream>

using namespace std;

const int N = 1000;

int main() {
  int n;
  cin >> n;

  int arr[N];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  bool ok = true;
  for (int i = 1; i < n; i++) {
    if (arr[i] <= arr[i - 1]) {
      ok = false;
      break;
    }
  }

  cout << (ok ? "Верно" : "Неверно") << endl;
  return 0;
}
