#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  unsigned int a;
  while (t--) {
    cin >> a;
    cout << ~a << endl;
  }
  return 0;
}