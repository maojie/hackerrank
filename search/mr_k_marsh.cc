#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 500;
char path[MAX][MAX];
int max_perimeter = 0, m, n;

bool hasNoMarshes(int j, int i, int y, int x) {
  for (int k = j; k <= y; k++) {
    if (path[i][k] == 'x' || path[x][k] == 'x') {
      return false;
    }
  }
  for (int k = i; k <= x; k++) {
    if (path[k][j] == 'x' || path[k][y] == 'x') {
      return false;
    }
  }
  return true;
}

void search(int i, int j) {
  for (int x = 1; i + x < m && path[i + x][j] == '.'; x++) {
    for (int y = 1; j + y < n && path[i + x][j + y] == '.' && path[i][j + y] == '.'; y++) {
      if (hasNoMarshes(j, i, j + y, i + x)) {
        max_perimeter = max(max_perimeter, (x + y) * 2);
      }
    }
  }
}

int main() {
  int i, j;
  cin >> m >> n;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cin >> path[i][j];
    }
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (path[i][j] == '.') {
        search(i, j);
      }
    }
  }
  if (max_perimeter == 0) {
    cout << "impossible" << endl;
  } else {
    cout << max_perimeter << endl;
  }
  return 0;
}
