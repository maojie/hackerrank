#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int parent, T, ans = 0;
map<int, vector<int> > edges;

void dfs(int point) {
  for (int i = 0; i < edges[point].size(); i++) {
    int next = edges[point][i];
    if (abs(parent - next) <= T) {
      ans++;
    }
    dfs(next);
  }
}

int main() {
  int n, i, x, y;
  cin >> n >> T;
  for (i = 0; i < n - 1; i++) {
    cin >> x >> y;
    edges[x].push_back(y);
  }
  for (map<int, vector<int> >::iterator iter = edges.begin();
       iter != edges.end(); iter++) {
    parent = iter->first;
    dfs(parent);
  }
  cout << ans << endl;
  return 0;
}
