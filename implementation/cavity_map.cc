#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cin >> n;
  char a[n][n];
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (i = 1; i < n - 1; i++) {
    for (j = 1; j < n - 1; j++) {
      if (a[i][j] > a[i - 1][j] &&
          a[i][j] > a[i + 1][j] &&
          a[i][j] > a[i][j - 1] &&
          a[i][j] > a[i][j + 1]) {
        a[i][j] = 'X';
      }
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}