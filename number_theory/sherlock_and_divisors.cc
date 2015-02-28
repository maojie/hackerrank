#include <cmath>
#include <iostream>
using namespace std;

__int64_t divisors(__int64_t n) {
  __int64_t count = 0;
  for (__int64_t i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (i % 2 == 0) {
        count++;
      }
      if (n / i != i && (n / i) % 2 == 0) {
        count++;
      }
    }
  }
  return count;
}

int main() {
  int t;
  __int64_t n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << divisors(n) << endl;
  }
  return 0;
}
