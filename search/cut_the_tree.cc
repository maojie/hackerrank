#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <limits>
using namespace std;

const int MAX = 100001;
int a[MAX];
int b[MAX];
bool visited[MAX];
vector<vector<int> > edges;

int dfs(int point) {
  int count = 0;
  visited[point] = true;
  for (int i = 0; i < edges[point].size(); i++) {
    int next = edges[point][i];
    if (!visited[next]) {
      count += dfs(next);
    }
  }
  b[point] = a[point] + count;
  return b[point];
}

int main() {
  int N, i, x, y, sum = 0;
  cin >> N;
  for (i = 1; i <= N; i++) {
    cin >> a[i];
    sum += a[i];
  }
  edges.resize(N + 1);
  for (i = 0; i < N - 1; i++) {
    cin >> x >> y;
    edges[x].push_back(y);
    edges[y].push_back(x);
  }
  dfs(1);
  int ans = numeric_limits<int>::max();
  for (i = 1; i <= N; i++) {
    ans = min(ans, abs(sum - 2 * b[i]));
  }
  cout << ans << endl;
  return 0;
}
