// http://en.wikipedia.org/wiki/Least_common_multiple
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

int main() {
  int t, n, i;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << a[0] << " ";
    for (i = 1; i < n; i++) {
      cout << lcm(a[i - 1], a[i]) << " ";
    }
    cout << a[n - 1] << endl;
  }
  return 0;
}
