#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t, n, i, j;
  cin >> t;
  while (t--) {
    cin >> n;
    bool flag = false;
    for (i = n; i >= 0; i--) {
      if (i % 3 == 0 && (n - i) % 5 == 0) {
        flag = true;
        for (j = 0; j < i; j++) {
          cout << "5";
        }
        for (j = 0; j < n - i; j++) {
          cout << "3";
        }
        cout << endl;
        break;
      }
    }
    if (!flag) {
      cout << "-1" << endl;
    }
  }
  return 0;
}