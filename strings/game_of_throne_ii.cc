#include <iostream>
#include <string>
#include <map>
using namespace std;

#define MOD 1000000007

long long factorial(long long n) {
  long long res = 1;
  for (long long i = 1; i <= n; i++) {
    res = (res * i) % MOD;
  }
  return res;
}

// http://rosettacode.org/wiki/Modular_inverse
long long modularInverse(long long a, long long b) {
  long long b0 = b, t, q;
  long long x0 = 0, x1 = 1;
  if (b == 1) return 1;
  while (a > 1) {
    q = a / b;
    t = b, b = a % b, a = t;
    t = x0, x0 = x1 - q * x0, x1 = t;
  }
  if (x1 < 0) x1 += b0;
  return x1;
}

int main() {
  string s;
  cin >> s;
  long long a = factorial(s.length() / 2);
  map<char, int> records;
  for (int i = 0; i < s.length(); i++) {
    records[s[i]]++;
  }
  long long b = 1;
  for (map<char, int>::iterator iter = records.begin();
       iter != records.end(); iter++) {
    if (iter->second % 2 == 0) {
      b = (b * factorial(iter->second / 2)) % MOD;
    }
  }
  cout << (a * modularInverse(b, MOD)) % MOD << endl;
  return 0;
}
