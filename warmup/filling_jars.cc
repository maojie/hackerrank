#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long int num_of_jars, operations, from_a, to_b, k_candies, i;
  cin >> num_of_jars >> operations;
  long long int total_candies = 0;  // Initial value.
  for (i = 0; i < operations; i++) {
    cin >> from_a >> to_b >> k_candies;
    total_candies += (to_b - from_a + 1) * k_candies;
  }
  cout << (long long int)total_candies / num_of_jars << endl;
  return 0;
}