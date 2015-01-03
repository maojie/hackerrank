#include <iostream>
using namespace std;

int height(int n) {
	int h = 1;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			h = h + 1;
		} else {
			h = h * 2;
		}
	}
  return h;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
  	int n;
  	cin >> n;
  	cout << height(n) << endl;
  }
}