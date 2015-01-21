#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] != s[s.length() - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int t, i, j;
  cin >> t;
  string s;
  while (t--) {
    cin >> s;
    i = 0;
    j = s.length() - 1;
    while (i < j) {
      if (s[i] == s[j]) {
        i++;
        j--;
      } else if (s[i + 1] == s[j] || s[i] == s[j - 1]) {
        if (isPalindrome(s.substr(i + 1, j - i))) {
          cout << i << endl;
          break;
        }
        if (isPalindrome(s.substr(i, j - i))) {
          cout << j << endl;
          break;
        }
      }
    }
    if (i >= j) {
      cout << "-1" << endl;
    }
  }
  return 0;
}
