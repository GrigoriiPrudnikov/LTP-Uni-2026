#include <iostream>

using namespace std;

int **create(int rows, int cols) {
  int **a = new int *[rows];
  for (int i = 0; i < rows; i++)
    a[i] = new int[cols]();
  return a;
}

void destroy(int **a, int rows) {
  for (int i = 0; i < rows; i++)
    delete[] a[i];
  delete[] a;
}

int main() {
  int n, m;
  cin >> n >> m;

  int **m1 = create(n, m);
  int **m2 = create(n, m);
  int **res = create(n, m);

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> m1[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> m2[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      res[i][j] = m1[i][j] + m2[i][j];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cout << res[i][j] << " ";
    cout << endl;
  }

  destroy(m1, n);
  destroy(m2, n);
  destroy(res, n);
}
