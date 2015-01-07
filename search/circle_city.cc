#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;
  long long r, k, a, b;
  while (t--) {
    cin >> r >> k;
    int count = 0;
    for (a = 0; a * a < r; a++) {
      b = (long long)sqrt(r - a * a);
      if (a * a + b * b == r) {
        count += 4;
      }
    }
    if (count <= k) {
      cout << "possible" << endl;
    } else {
      cout << "impossible" << endl;
    }
  }
  return 0;
}
