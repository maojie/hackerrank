#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 100001

int n, T;

// Binary Indexed Tree
class BIT {
 public:
  BIT() {
    memset(a, 0, sizeof(a));
  }

  void update(int i, int val) {
    while (i <= n) {
      a[i] += val;
      i += lowbit(i);
    }
  }

  int query(int i) {
    int sum = 0;
    while (i > 0) {
      sum += a[i];
      i -= lowbit(i);
    }
    return sum;
  }

 private:
  int lowbit(int i) {
    return i & (-i);
  }

  int a[MAX];
};  // class BIT

long long ans = 0;
map<int, vector<int> > edges;
bool records[MAX];
BIT bit;

void dfs(int node) {
  ans += bit.query(min(n, node + T)) - bit.query(max(1, node - T) - 1);
  bit.update(node, 1);
  for (int i = 0; i < edges[node].size(); i++) {
    dfs(edges[node][i]);
  }
  bit.update(node, -1);
}

int main() {
  int i, root, parent, child;
  cin >> n >> T;
  memset(records, false, sizeof(records));
  for (i = 0; i < n - 1; i++) {
    cin >> parent >> child;
    edges[parent].push_back(child);
    records[child] = true;
  }
  for (i = 1; i <= n; i++) {
    if (!records[i]) {
      root = i;
      break;
    }
  }
  dfs(root);
  cout << ans << endl;
  return 0;
}
