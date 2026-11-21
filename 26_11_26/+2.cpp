#include <cstdlib>
#include <iostream>

int factorial(int n) {
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

int C(int n, int k) { return factorial(n) / (factorial(k) * factorial(n - k)); }

using namespace std;

int main() {
  int n;
  cin >> n;

  int **matrix = new int *[n];
  for (int i = 0; i < n; i++) {
    matrix[i] = new int[n + 1]();
  }

  for (int i = 0; i < n; i++) {
    for (int k = 0; k <= i; k++) {
      matrix[i][k] = C(i, k);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int k = 0; k <= i; k++) {
      cout << matrix[i][k] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
    delete[] matrix[i];
  delete[] matrix;
}
