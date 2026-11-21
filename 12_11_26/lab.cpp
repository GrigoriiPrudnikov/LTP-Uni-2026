#include <fstream>

using namespace std;

int main() {
  string n;
  ofstream out("out.txt");
  ifstream in("in.txt");

  if (!in.is_open()) {
    return 1;
  }

  in >> n;
}
