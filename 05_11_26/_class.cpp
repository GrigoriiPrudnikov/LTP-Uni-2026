#include <iostream>

using namespace std;

const int N = 1000;

int main() {
  int n, arr[N];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    bool f = true;
    for (int j = 0; j < n; j++) {
      if (arr[j] % arr[i] != 0) {
        f = false;
        break;
      }
    }
    if (f) {
      cout << arr[i] << " ";
    }
  }
}
