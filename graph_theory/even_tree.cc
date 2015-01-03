#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int, int> edges_map;
vector<int> vertices_leafs(101, 0);

int main() {
  int vertices, edges, ui, vi;
  cin >> vertices >> edges;

  while (edges--) {
    cin >> ui >> vi;
    edges_map.insert(pair<int, int>(ui, vi));
  }

  for (map<int, int>::iterator iter = edges_map.begin();
       iter != edges_map.end(); iter++) {
    map<int, int>::iterator elem = iter;
    while (elem != edges_map.end()) {
      vertices_leafs[elem->second]++;
      elem = edges_map.find(elem->second);
    }
  }

  int count = 0;
  for (int i = 1; i < vertices_leafs.size(); i++) {
    if (vertices_leafs[i] > 0 && (vertices_leafs[i] + 1) % 2 == 0) {
      count++;
    }
  }
  cout << (count - 1) << endl;
  return 0;
}