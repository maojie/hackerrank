#include <iostream>
#include <map>
using namespace std;

int main() {
  int t, m, n, i, p;
  cin >> t;
  while (t--) {
    cin >> m >> n;
    multimap<int/*price*/, int/*index*/> price_map;
    for (i = 1; i <= n; i++) {
      cin >> p;
      price_map.insert(make_pair(p, i));
    }
    for (multimap<int, int>::iterator iter = price_map.begin();
         iter != price_map.end(); iter++) {
      if (price_map.count(m - (iter->first)) == 1) {
        multimap<int, int>::iterator it = price_map.find(m - (iter->first));
        if (iter->second > (*it).second) {
          cout << (*it).second << " " << iter->second << endl;
        } else {
          cout << iter->second << " " << (*it).second << endl;
        }
        break;
      }
      if (price_map.count(m - (iter->first)) == 2) {
        multimap<int, int>::iterator it = price_map.find(m - (iter->first));
        cout << it->second << " ";
        it++;
        cout << it->second << endl;
        break;
      }
    }
  }
}