#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define MAX 2000
vector<int> v(MAX);

int main() {
  int t, n, k, e, i, j, res;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    v.resize(n);
    v.clear();
    for (i = 0; i < n; i++) {
      cin >> e;
      v.push_back(e);
    }
    sort(v.begin(), v.end());
    res = 0;
    for (i = v.size() - 1; i >= 0; i--) {
      if (k % v[i] == 0) {
        res = k;
      } else {
        if (binary_search(v.begin(), v.end(), k % v[i])) {
          res = k;
        } else {
          if (k != k % v[i]) res = max(res, v[i]);
          for (j = (k % v[i]) * v[i]; j > 0; j--) {
            if (binary_search(v.begin(), v.end(), j)) {
              if (v[i] + j < k) res = max(res, v[i] + j);
              break;
            }
          }
        }
      }
    }
    cout << res << endl;
  }
  return 0;
}
