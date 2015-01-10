#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, a, i, j;
  string s;
  cin >> n;
  vector<vector<string> > v(100);
  for (i = 0; i < n; i++) {
    cin >> a >> s;
    if (i < n / 2) {
      v[a].push_back("-");
    } else {
      v[a].push_back(s);
    }
  }
  for (i = 0; i < 100; i++) {
    for (j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
  }
  cout << endl;
  return 0;
}