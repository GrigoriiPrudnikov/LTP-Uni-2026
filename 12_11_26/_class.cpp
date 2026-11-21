#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  int l = 0, maxLen = 0;
  int lastSeen[256];
  int idx;

  for (int i = 0; i < 256; i++) {
    lastSeen[i] = -1;
  }

  for (int r = 0; r < s.length(); r++) {
    char c = s[r];
    if (lastSeen[c] >= l) {
      idx = l;
      l = lastSeen[c] + 1;
    }
    lastSeen[c] = r;
    maxLen = max(maxLen, r - l + 1);
  }

  cout << maxLen << endl;
  cout << s.substr(idx, maxLen);
}
