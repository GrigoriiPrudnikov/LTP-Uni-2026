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
    for (int j = 0; j < n; j++) {
      if (arr[i] == arr[j] && i != j) {
        cout << "Found" << endl;
        return 1;
      }
    }
  }

  cout << "Not Found" << endl;
  return 0;
}
