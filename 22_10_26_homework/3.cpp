#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b; // 0 < a < b < 100000

  vector<int> pos(b, -1); // позиция, на которой встретился остаток
  string digits;
  int r = a;

  while (r != 0 && pos[r] == -1) {
    pos[r] = digits.size();
    r *= 10;
    digits += char('0' + r / b);
    r %= b;
  }

  if (r == 0) {
    cout << "0." << digits << endl;
  } else {
    cout << "0." << digits.substr(0, pos[r]) << "(" << digits.substr(pos[r])
         << ")" << endl;
  }
  return 0;
}
