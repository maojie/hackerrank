#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int i;
  string a, b;
  cin >> a >> b;
  int count[26];
  memset(count, 0, sizeof(count));
  for (i = 0; i < a.length(); i++) {
    count[a[i] - 97]++;
  }
  for (i = 0; i < b.length(); i++) {
    count[b[i] - 97]--;
  }
  int res = 0;
  for (i = 0; i < 26; i++) {
    res += abs(count[i]);
  }
  cout << res << endl;
  return 0;
}
