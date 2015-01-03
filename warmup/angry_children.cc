#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N, K, i;
  long long unfairness = 1000000000;
  cin >> N >> K;
  long long candies[N];
  for (i = 0; i < N; i++) {
    cin >> candies[i];
  }
  sort(candies, candies + N);
  for (i = 0; i <= N - K; i++) {
    unfairness = (candies[i + K - 1] - candies[i]) < unfairness ? (candies[i + K - 1] - candies[i]) : unfairness;
  }
  cout << unfairness << endl;
  return 0;
}