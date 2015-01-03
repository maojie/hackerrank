#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maximum_contiguos_subarray(int n, int a[], int b[]) {
  int max = a[0];
  b[0] = a[0];
  for (int i = 1; i < n; i++) {
    b[i] = (b[i - 1] + a[i]) > a[i] ? (b[i - 1] + a[i]) : a[i];
    if (max < b[i]) {
      max = b[i];
    }
  }
  return max;
}

int maximum_non_contiguos_subarray(int n, int a[]) {
  sort(a, a + n);
  int max = a[n - 1];
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > 0) {
      max = max + a[i];
    }
  }
  return max;
}

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    /**
     * 遇到一个奇怪的问题，这种打印方式是不行的，sort会影响a的顺序
     */
    cout << maximum_contiguos_subarray(n, a, b) << " "
         << maximum_non_contiguos_subarray(n, a) << endl;
    delete [] b;
    b = NULL;
    delete [] a;
    a = NULL;
  }
  return 0;
}