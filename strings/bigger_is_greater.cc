#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s;
  int t, i;
  cin >> t;
  while (t--) {
    cin >> s;
    if (next_permutation(s.begin(), s.end())) {
      cout << s << endl;
    } else {
      cout << "no answer" << endl;
    }
  }
  return 0;
}
