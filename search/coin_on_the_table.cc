#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int n, m, k;
char board[51][51];
int ans[1000][51][51];

void dfs(int x, int y, int t, int steps) {
  if (x < 0 || x >=n || y < 0 || y >= m || t > k) {
    return;
  }
  if (ans[t][x][y] == -1 || steps < ans[t][x][y]) {
    ans[t][x][y] = steps;
    if (board[x][y] != '*') {
      dfs(x, y + 1, t + 1, steps + (board[x][y] != 'R'));
      dfs(x, y - 1, t + 1, steps + (board[x][y] != 'L'));
      dfs(x - 1, y, t + 1, steps + (board[x][y] != 'U'));
      dfs(x + 1, y, t + 1, steps + (board[x][y] != 'D'));
    } else {
      dfs(x, y, t + 1, steps);
    }
  }
}

int main() {
  int i, j, x, y;
  cin >> n >> m >> k;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> board[i][j];
      if (board[i][j] == '*') {
        x = i; y = j;
      }
    }
  }
  memset(ans, -1, sizeof(ans));
  dfs(0, 0, 0, 0);
  cout << ans[k][x][y] << endl;
  return 0;
}
