#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class prediction {
 public:
  prediction(int key) : key_(key) {
  }

  bool operator()(int curr) {
    return curr < key_;
  }

 private:
  int key_;
};

void quick_sort(vector<int>::iterator begin, vector<int>::iterator end) {
  int length = distance(begin, end);
  if (length == 0 || length == 1) {
    return;
  }
  vector<int>::iterator key = stable_partition(begin, end, prediction(*begin));
  quick_sort(begin, key);
  quick_sort(key + 1, end);

  while (begin != end) {
    cout << *begin++ << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr;
  int size, i, ele;
  cin >> size;
  for (i = 0; i < size; i++) {
    cin >> ele;
    arr.push_back(ele);
  }
  quick_sort(arr.begin(), arr.end());
  return 0;
}