#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int steps;
  cin >> steps;
  long long sum = 0, num;
  while (steps--) {
    cin >> num;
    sum += num;
  }
  printf("%.1f\n", sum / 2.0);
  return 0;
}
