#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, K, i;
	cin >> N >> K;
	int C[N];
	for (i = 0; i < N; i++) {
		cin >> C[i];
	}
	sort(C, C + N, greater<int>());
	long long int pay = 0;
	int count = 0;
	for (i = 0; i < N; i++) {
		pay = pay + C[i] * (count / K + 1);
		count++;
	}
	cout << pay << endl;
	return 0;
}