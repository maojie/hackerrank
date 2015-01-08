#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, i;
  cin >> n;
  int a[n];
  int s[n];
  vector<int> v;
  for (i = 0; i < n; i++) {
    cin >> a[i];
    s[i] = a[i];
  }
  sort(s, s + n);
  for (i = 0; i < n; i++) {
    if (a[i] != s[i]) {
      v.push_back(i);
    }
  }
  if (v.size() == 0) {
    cout << "yes" << endl;
    return 0;
  }
  if (v.size() == 2) {
    cout << "yes\nswap " << v[0] + 1 << " " << v[1] + 1 << endl;
    return 0;
  } else {
    reverse(a + v[0], a + v.back() + 1);
    int flag = false;
    for (i = 0; i < n; i++) {
      if (a[i] != s[i]) {
        flag = true;
      }
    }
    if (flag) {
      cout << "no" << endl;
    } else {
      cout << "yes\nreverse " << v[0] + 1 << " " << v.back() + 1 << endl;
    }
  }
  return 0;
}
