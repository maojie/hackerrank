#include <iostream>
#include <map>
using namespace std;

int main() {
  int n, k, i, count = 0;
  long long a;
  cin >> n >> k;
  map<long long, int> m;
  for (i = 0; i < n; i++) {
    cin >> a;
    m.insert(make_pair(a, 1));
  }
  for (map<long long, int>::iterator iter = m.begin();
       iter != m.end(); iter++) {
    if (m.find(iter->first + k)->second == 1) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
