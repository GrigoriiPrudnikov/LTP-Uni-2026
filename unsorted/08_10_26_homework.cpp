#include <iostream>
using namespace std;

int getDevidersNumber(int n, int x, int y) {
  return (n - 1) / x + (n - 1) / y - (n - 1) / (x * y);
}

// a, c - bottom left corner
// b, d - top right corner
int rectanglesIntersection(int a[2], int b[2], int c[2], int d[2]) {
  int left = max(a[0], c[0]);
  int right = min(b[0], d[0]);
  int top = max(a[1], c[1]);
  int bottom = min(b[1], d[1]);
  if (left > right || top < bottom) {
    return 0;
  }
  return (right - left) * (top - bottom);
}

int main() {
  cout << "Choose program to run" << endl;
  cout << "1. Get deviders numbers" << endl;
  cout << "2. Rectangles intersection" << endl;
  int program = 0;
  cin >> program;

  if (program == 1) {
    int n, x, y;
    cout << "Enter n, x, y" << endl;
    cin >> n >> x >> y;

    // Check input values
    if (x <= 0 || y <= 0 || n < 0) {
      cout << "Invalid input" << endl;
      return 0;
    }

    cout << "Result: " << getDevidersNumber(n, x, y) << endl;
  }

  if (program == 2) {
    int a[2], b[2], c[2], d[2];
    cout << "Enter a, b, c, d" << endl;
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1] >> d[0] >> d[1];

    // Check input values
    if (a[0] == b[0] || a[1] == b[1] || c[0] == d[0] || c[1] == d[1]) {
      cout << "Invalid input" << endl;
      return 0;
    }

    cout << "Result: " << rectanglesIntersection(a, b, c, d) << endl;
  }
}
