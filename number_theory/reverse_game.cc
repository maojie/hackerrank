/*
 * 0 -> 0
 * 01 -> 10
 * 012 -> 201
 * 0123 -> 3012
 * 01234 -> 40312
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  int t, n, k, res;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    res = k < n / 2 ? (2 * k + 1) : 2 * (n - k - 1);
    cout << res << endl;
  }
  return 0;
}
