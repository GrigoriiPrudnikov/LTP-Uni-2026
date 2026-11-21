#include <iostream>

using namespace std;

const int N = 1000;

int main() {
  int n, m1, m2, m3, num;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> num;

    if (num > m3) {
      m3 = num;
    }
    if (num > m2) {
      m3 = m2;
      m2 = num;
    }
    if (num > m1) {
      m2 = m1;
      m1 = num;
    }
  }

  cout << m1 << " " << m2 << " " << m3 << endl;
}
