#include <iostream>
#include <map>
using namespace std;

void solve(map<int, int> a, map<int, int> b) {
  for (map<int, int>::iterator iter = b.begin(); iter != b.end(); iter++) {
    if (a[iter->first] != iter->second) {
      cout << iter->first << " ";
    }
  }
  cout << endl;
}

int main() {
  int n, m, i, ele;
  cin >> n;
  map<int, int> a;
  map<int, int> b;
  for (i = 0; i < n; i++) {
    cin >> ele;
    a[ele]++;
  }
  cin >> m;
  for (i = 0; i < m; i++) {
    cin >> ele;
    b[ele]++;
  }
  if (n >= m) {
    solve(b, a);
  } else {
    solve(a, b);
  }
  return 0;
}
