#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long n, k, i;
  cin >> n >> k;
  long long a[n];
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (i = 0; i < n; i++) {
    if ((k -= a[i]) < 0) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
