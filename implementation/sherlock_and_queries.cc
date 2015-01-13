#include <iostream>
#include <map>
using namespace std;

#define MOD 1000000007

int main() {
  int n, m, i, j;
  cin >> n >> m;
  int a[n], b[m], c[m];
  map<int, int> records;
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (i = 0; i < m; i++) {
    cin >> b[i];
  }
  for (i = 0; i < m; i++) {
    cin >> c[i];
  }
  for (i = 0; i < m; i++) {
    if (records.count(b[i]) == 0) {
      records[b[i]] = c[i];
    } else {
      records[b[i]] = (1LL * records[b[i]] * c[i]) % MOD;
    }
  }
  for (map<int, int>::iterator iter = records.begin();
       iter != records.end(); iter++) {
    for (i = iter->first - 1; i < n; i += iter->first) {
      a[i] = (1LL * a[i] * iter->second) % MOD;
    }
  }
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
