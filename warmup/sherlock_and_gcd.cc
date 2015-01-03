#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int b, a = 0;
    while (n--) {
      cin >> b;
      a = gcd(a, b);
    }
    if (a == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}