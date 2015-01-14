#include <iostream>
#include <string.h>
using namespace std;

typedef struct {
  int x;
  int y;
} Point;

const int MAX = 101;
char forest[MAX][MAX];
bool visited[MAX][MAX];
int direction[4][4] = {
  {0, 1},
  {-1, 0},
  {0, -1},
  {1, 0}
};
int n, m, k, count = 0;

bool dfs(Point point) {
  if (forest[point.x][point.y] == '*') {
    return true;
  }
  int branch = 0;
  bool go = false;
  for (int i = 0; i < 4; i++) {
    Point next;
    next.x = point.x + direction[i][0];
    next.y = point.y + direction[i][1];

    if ((next.x >= 0 && next.y >= 0 && next.x < n && next.y < m) &&
        visited[next.x][next.y] == false && forest[next.x][next.y] != 'X') {
      visited[next.x][next.y] = true;
      if (dfs(next)) {
        go = true;
      }
      branch++;
    }
  }
  if (branch > 1 && go) {
    count++;
  }
  return go;
}

int main() {
  int t, i, j;
  Point start;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    memset(visited, false, sizeof(visited));
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        cin >> forest[i][j];
        if (forest[i][j] == 'M') {
          start.x = i;
          start.y = j;
          visited[i][j] = true;
        }
      }
    }
    cin >> k;
    count = 0;
    dfs(start);
    if (count == k) {
      cout << "Impressed" << endl;
    } else {
      cout << "Oops!" << endl;
    }
  }
  return 0;
}
