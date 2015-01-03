#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int divide_and_count(string n) {
  int count = 0;
  int num = atoi(n.c_str());
  for (int i = 0; i < n.length(); i++) {
  	int j = n[i] - '0';
  	if (j != 0 && (num % j == 0)) {
  		count++;
  	}
  }
  return count;
}

int main() {
	int t;
	string n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << divide_and_count(n) <<endl;
	}
  return 0;
}