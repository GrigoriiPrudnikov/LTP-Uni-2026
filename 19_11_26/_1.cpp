#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  int n = s.length() - 1;
  for (int i = 0; i < n; i++) {
    if (s[i] == ' ' && s[i + 1] == ' ') {
      for (int j = i; j < n; j++) {
        s[j] = s[j + 1];
      }
      s.pop_back();
      n--;
      i--;
    }
  }

  cout << s << endl;
}
