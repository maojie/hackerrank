#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int deletions(string s) {
  int count = 0;
  for (int i = 0; i < s.length() - 1; i++) {
  	if (s[i] == s[i + 1]) {
  		count++;
  	}
  }
  return count;
}

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		cout << deletions(s) << endl; 
	}
  return 0;
}