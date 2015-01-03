#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int operations(string s) {
	int count = 0;
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] > s[s.length() - 1 -i]) {
			count = count + s[i] - s[s.length() - 1 -i];
		} else if (s[i] < s[s.length() - 1 -i]) {
			count = count + s[s.length() - 1 -i] - s[i];
		} else {
			continue;
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
		cout << operations(s) << endl;
	}
	return 0;
}