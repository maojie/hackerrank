#include <iostream>
#include <map>
using namespace std;

int main() {
  int t, n, i, a;
  cin >> t;
  while (t--) {
    cin >> n;
    map<long long int, long long int> m;
    for(i = 0; i < n; i++) {
      cin >> a;
      m[a]++;
    }
    long long int count = 0;
    for (map<long long int, long long int>::iterator iter = m.begin();
         iter != m.end(); iter++) {
      if (iter->second > 1) {
        count += iter->second * (iter->second - 1);
      }
    }
    cout << count << endl;
  }
  return 0;
}
