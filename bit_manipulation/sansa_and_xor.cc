#include <iostream>
using namespace std;

int main() {
  int t, n, i;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[n];
    int res = 0;
    for (i = 0; i < n; i++) {
      cin >> a[i];
      long long int num = 1LL * (i + 1) * (n - i);
      if (num % 2 != 0) {
        res ^= a[i];
      }
    }
    cout << res << endl;
  }
  return 0;
}
