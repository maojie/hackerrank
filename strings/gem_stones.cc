#include <iostream>
#include <string>
#include <map>
using namespace std;

const int MAX = 26;

int main() {
  int n, i, j;
  cin >> n;
  string s;
  map<int, int> records;
  int count[MAX] = { 0 };
  for (i = 0; i < n; i++) {
    cin >> s;
    records.clear();
    for (j = 0; j < s.length(); j++) {
      records[s[j] - 'a'] = true;
    }
    for (j = 0; j < MAX; j++) {
      if (records[j]) {
        count[j]++;
      }
    }
  }
  int res = 0;
  for (i = 0; i < MAX; i++) {
    if (count[i] == n) {
      res++;
    }
  }
  cout << res << endl;
  return 0;
}
