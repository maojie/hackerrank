#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t, n, c, m, res, tmp;
  cin >> t;
  while (t--) {
    cin >> n >> c >> m;
    int bought = n / c;
    int exchanged = bought / m;
    int exchanged_left = bought % m;
    if (exchanged == 0) {
        cout << bought << endl;
    } else {
        res = bought + exchanged;
        while (exchanged + exchanged_left >= m) {
            res = res + (exchanged + exchanged_left) / m;
            tmp = (exchanged + exchanged_left) % m;
            exchanged = (exchanged + exchanged_left) / m;
            exchanged_left = tmp;
        }
        cout << res << endl;
    }
  }
  return 0;
}