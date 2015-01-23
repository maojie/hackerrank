#include <algorithm>
#include <iostream>
using namespace std;

#define MAX 1000001

int main() {
  int n;
  long min_a = MAX, min_b = MAX, a, b, i;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a >> b;
    min_a = min(min_a, a);
    min_b = min(min_b, b);
  }
  cout << min_a * min_b << endl;
  return 0;
}