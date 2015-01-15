#include <iostream>
#include <string>
using namespace std;

string G[1001], g[1001];

int main() {
  int t, R, C, r, c, i, j, k;
  cin >> t;
  while (t--) {
    cin >> R >> C;
    for (i = 0; i < R; i++) {
      cin >> G[i];
    }
    cin >> r >> c;
    for (i = 0; i < r; i++) {
      cin >> g[i];
    }

    bool found = false;
    for (i = 0; i < R; i++) {
      if (G[i].find(g[0]) != string::npos) {
        k = i + 1;
        for (j = 1; j < r; j++, k++) {
          if (g[j] != G[k].substr(G[i].find(g[0]), g[0].length())) {
            break;
          }
          if (j == r - 1) {
            found = true;
          }
        }
      }
    }
    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
