#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

#define MAX 5001

int res[MAX][MAX];

int main() {
  int i, j;
  string a, b;
  cin >> a >> b;
  memset(res, 0, sizeof(res));
  res[0][0] = 1;
  for (i = 1; i <= a.length(); i++) {
    for (j = 1; j <= b.length(); j++) {
      if (a[i - 1] == b[j - 1]) {
        res[i][j] = res[i - 1][j - 1] + 1;
      } else {
        res[i][j] = max(res[i - 1][j], res[i][j - 1]);
      }
    }
  }
  cout << res[a.length()][b.length()] << endl;
  return 0;
}
