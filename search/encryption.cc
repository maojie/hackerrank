#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a = floor(sqrt(s.length()));
  int b = ceil(sqrt(s.length()));
  for (int i = a; i <= b; i++) {
    for (int j = a; j <= b; j++) {
      if (i * j >= s.length()) {
        for (int k = 0; k < j; k++) {
          for (int l = k; l < s.length(); l += j) {
            cout << s[l];
          }
          cout << " ";
        }
        cout << endl;
        return 0;
      }
    }
  }
  return 0;
}