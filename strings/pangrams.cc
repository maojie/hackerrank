#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	char c;
	map<char, int> alphabet;
	for (c = 'a'; c <= 'z'; c++) {
		alphabet[c] = 0;
	}

	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		alphabet[tolower(s[i])]++;
	}

	for (c = 'a'; c <= 'z'; c++) {
	  if (alphabet[c] == 0) {
	  	cout << "not pangram" << endl;
	  	return 0;
	  }
	}
	cout << "pangram" << endl;
	return 0;
}
