#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, i, base;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  while (a[n - 1] != 0) {
    int res = 0;
    for (i = 0; i < n; i++) {
      if (a[i] != 0) {
        base = a[i];
        break;
      }
    }
    for (i = 0; i < n; i++) {
      if (a[i] != 0) {
        a[i] = a[i] - base;
        res++;
      }
    }
    cout << res << endl;
  }
  return 0;
}