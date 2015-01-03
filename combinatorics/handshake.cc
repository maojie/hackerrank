#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int handshakes(int n) {
  return n * (n - 1) / 2;
}

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << handshakes(n) << endl;
  }
  return 0;
}