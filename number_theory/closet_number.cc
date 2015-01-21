#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  long long a, b, x, res;
  cin >> t;
  while (t--) {
    cin >> a >> b >> x;
    res = pow(a, b);
    cout << (abs(int(res / x) * x - res) <= abs((int(res / x) + 1) * x - res) ?
	    int(res / x) * x : (int(res / x) + 1) * x) << endl;
  }
  return 0;
}
