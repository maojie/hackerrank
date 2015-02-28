#include <iostream>
using namespace std;

#define MAX 100001
int a[MAX];

int main() {
  int n, q, x, y, i;
  cin >> n;
  for (i = 1; i <= n; i++) {
    cin >> a[i];
  }
  cin >> q;
  while (q--) {
    cin >> x >> y;
    if (x + 1 <= n && a[x + 1] == 0 && x != y) {
      cout << "Odd" << endl;
    } else {
      cout << (a[x] % 2 == 0 ? "Even" : "Odd") << endl;
    }
  }
  return 0;
}
