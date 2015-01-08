#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, i, a;
  vector<int> v;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }
  nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
  cout << v[v.size() / 2] << endl;
  return 0;
}
