#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
  int max = -1;
  for (int i = l; i <= r; i++) {
    for (int j = l; j <= r; j++) {
      if (int(i ^ j) >= max) {
        max = int(i ^ j);
      }
    }
  }
  return max;
}

int main() {
  int res;
  int _l;
  cin >> _l;
  
  int _r;
  cin >> _r;
  
  cout << maxXor(_l, _r) << endl;

  return 0;
}