#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int t, n, a, b;
  cin >> t;
  while (t--) {
    cin >> n >> a >> b;
    map<int, char, less<int> > res;
    for (int i = 0; i <= n - 1; i++) {
      res.insert(make_pair(i * a + (n - i- 1) * b, '0'));
    }
    for (map<int, char>::iterator iter = res.begin();
         iter != res.end(); iter++) {
      cout << iter->first << " ";
    }
    cout << endl;
  }
  return 0;
}