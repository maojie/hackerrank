#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int* a = new int[n - 1];
    int sum = 1;
    for (int i = 0; i < n - 1; i++) {
      cin >> a[i];
      sum = (sum * a[i]) % 1234567;
    }
    cout << sum << endl;
  }
  return 0;
}