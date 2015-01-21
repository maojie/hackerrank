#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  int t, l, b, g;
  cin >> t;
  while (t--) {
    cin >> l >> b;
    g = gcd(l, b);
    cout << l / g * b / g << endl;
  }
  return 0;
}
