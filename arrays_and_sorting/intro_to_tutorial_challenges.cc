#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int v, n, i;
	cin >> v;
	cin >> n;
	int* a = new int[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		if (v == a[i]) {
			cout << i << endl;
		}
	}
	return 0;
}