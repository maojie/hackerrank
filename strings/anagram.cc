#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int t, i, res;
  string s;
  cin >> t;
  while (t--) {
    cin >> s;
    if (s.length() % 2 != 0) {
      cout << "-1" << endl;
    } else {
      map<char, int> records;
      string a = s.substr(0, s.length() / 2);
      string b = s.substr(s.length() / 2);
      int res = a.length();
      for (i = 0; i < a.length(); i++) {
        records[a[i]]++;
      }
      for (i = 0; i < b.length(); i++) {
        if (records[b[i]] > 0) {
          records[b[i]]--;
          res--;
        }
      }
      cout << res << endl;
    }
  }
  return 0;
}
