#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, a;
	map<int, int> s;
	cin >> n;
	while (n--) {
		cin >> a;
		s[a]++;
	}
	for(map<int, int>::iterator iter = s.begin(); iter != s.end(); iter++) {
		if (iter->second == 1) {
			cout << iter->first << endl;
			break;
		}
	}
	return 0;
}