#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[1000];
  int x = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    x = x * 10 + a[i];
  }

  int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

  string roman[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                    "XL", "X",  "IX", "V",  "IV", "I"};

  for (int i = 0; i < 13; i++) {
    while (x >= values[i]) {
      cout << roman[i];
      x -= values[i];
    }
  }

  return 0;
}
