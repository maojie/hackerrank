#include <iostream>
using namespace std;

int main() {
  int t;
  long long int k;
  cin >> t;
  while (t--) {
    cin >> k;
    cout << (k / 2) * (k - k / 2) << endl;
  }
}
