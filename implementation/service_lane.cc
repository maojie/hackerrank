#include <iostream>
using namespace std;

int main() {
  int N, T, i, j, k;
  cin >> N >> T;
  int a[N];
  for (k = 0; k < N; k++) {
    cin >> a[k];
  }
  while (T--) {
    cin >> i >> j;
    int res = a[i];
    for (k = i; k <= j; k++) {
      res = min(res, a[k]);
    }
    cout << res << endl;
  }
  return 0;
}
