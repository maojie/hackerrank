#include <iostream>
using namespace std;

int main() {
  int t, n, i;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[n];
    int sum = 0;
    for (i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];  // sum of array.
    }
    int found = false;
    int l = 0;
    int r = sum;
    for (i = 0; i < n; i++) {
      r -= a[i];
      if (r == l) {
        found = true;
        break;
      }
      l += a[i];
    }
    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}