#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define ISFIBO "IsFibo"
#define ISNOTFIBO "IsNotFibo"

map<long, long> mark_fibo; 

/*
 * Failed from testcase #6 to #9
string is_fibo(long long n) {
  if (sqrt(5 * n * n + 4) == int(sqrt(5 * n * n + 4)) ||
  	  sqrt(5 * n * n - 4) == int(sqrt(5 * n * n - 4))) {
  	return ISFIBO;
  }
  return ISNOTFIBO;
}*/

int main() {
  int t;
  long long n;
  long long prev = 0;
  long long curr = 1;
  mark_fibo[0] = 1;
  for (; prev + curr <= 10000000000;) {
  	mark_fibo[prev + curr] = 1;
  	int tmp = prev;
  	prev = curr;
  	curr = tmp + prev;
  }
  cin >> t;
  for (int i = 0; i < t; i++) {
  	cin >> n;
  	if (mark_fibo[n]) {
  		cout << ISFIBO << endl;
  	} else {
  		cout << ISNOTFIBO << endl;
  	}
  }
  return 0;
}