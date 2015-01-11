#include <iostream>
using namespace std;

int main() {
  int t, i, j;
  long long int n;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long res = n * (n - 1) / 2;
    int c[1000002] = { 0 };
    for (i = 0; i < n; i++) {
      for (j = a[i]; j > 0; j -= j & -j) {
        res -= c[j];
      }
      for (j = a[i]; j < 1000002; j += j & -j) {
        c[j]++;
      }
    }
    cout << res << endl;
  }
  return 0;
}