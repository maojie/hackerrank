#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

map<char, int> char_map;

int main() {
	string s;
	cin >> s;

  for (int i = 0; i < s.length(); i++) {
  	char_map[s[i]]++;
  }

  int count_odd_char = 0;
  for (map<char, int>::iterator iter = char_map.begin();
  	   iter != char_map.end(); iter++) {
  	if (iter->second % 2 != 0) {
  		count_odd_char++;
  	}
  }
  if (count_odd_char > 1) {
  	cout << "NO" << endl;
  } else {
  	cout << "YES" << endl;
  }
  return 0;
}