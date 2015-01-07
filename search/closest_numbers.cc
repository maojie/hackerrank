#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main() {
  int n, i;
  cin >> n;
  long long int arr[n];
  multimap<int, pair<long long int, long long int>, less<int> > records;
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (i = 0; i < n - 1; i++) {
    records.insert(
        make_pair(abs(arr[i] - arr[i + 1]), make_pair(arr[i], arr[i + 1])));
  }
  multimap<int, pair<long long int, long long int> >::iterator found =
      records.find((records.begin())->first);
  for (i = 0; i < records.count((records.begin())->first); i++) {
    cout << (found->second).first << " " << (found->second).second << " ";
    found++;
  }
  cout << endl;
  return 0;
}