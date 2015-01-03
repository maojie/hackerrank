#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

int main() {
  int num_of_people, num_of_topics;
  cin >> num_of_people >> num_of_topics;
  vector<bitset<500> > v;
  bitset<500> topics;
  for (int i = 0; i < num_of_people; i++) {
    cin >> topics;
    v.push_back(topics);
  }
  int max = 0, count_max = 0;
  for (int i = 0; i  < num_of_people - 1; i++) {
    for (int j = i + 1; j < num_of_people; j++) {
      if ((v[i] | v[j]).count() > max) {
        max = (v[i] | v[j]).count();
        count_max = 1;
      } else if ((v[i] | v[j]).count() == max) {
        count_max++;
      } else {
        continue;
      }
    }
  }
  cout << max << endl;
  cout << count_max << endl;
  return 0;
}