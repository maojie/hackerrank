#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

#define MAX 100000

int b[MAX];
int res[MAX][2];

int main() {
  int t, n, i;
  cin >> t;
  while (t--) {
    cin >> n;
    memset(res, 0, sizeof(res));
    for (i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (i = 0; i < n - 1; i++) {
      res[i + 1][0] = max(res[i][0], res[i][1] + abs(b[i] - 1));
      res[i + 1][1] = max(res[i][0] + abs(b[i + 1] - 1), res[i][1] + abs(b[i + 1] - b[i]));
    }
    cout << max(res[n - 1][0], res[n - 1][1]) << endl;
  }
  return 0;
}
