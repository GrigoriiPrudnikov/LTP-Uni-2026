#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double a, x, y;
  cin >> a >> x >> y;
  if (fabs(x) < a / 2 && fabs(y) < a / 2) {
    cout << "in square";
  } else if (((x > -(a / 2)) && (x < a / 2) &&
              ((y == a / 2) || (y == -(a / 2)))) ||
             ((y < a / 2) && (y > -(a / 2)) &&
              ((x == a / 2) || (x == -(a / 2)))) ||
             ((abs(x) == abs(a / 2)) && (abs(y) == abs(a / 2)))) {
    cout << "on square";
  } else {
    cout << "out square";
  }
}
