#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int t;
  long long a, b, i, tmp;
  map<long long, int> pre;
  for (i = 1; i <= (int)sqrt(1000000000); i++) {
    pre[i * i] = 1;
  }
  cin >> t;
  while (t--) {
    long long int count = 0;
    cin >> a >> b;
    for (map<long long, int>::iterator iter = pre.begin();
         iter != pre.end() && iter->first <= b; iter++) {
      if (iter->first >= a && iter->second == 1) {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}