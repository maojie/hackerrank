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

int main() {
  vector<int> arr;
  int size, i, ele;
  cin >> size;
  for (i = 0; i < size; i++) {
    cin >> ele;
    arr.push_back(ele);
  }
  stable_partition(arr.begin(), arr.end(), prediction(arr[0]));
  for (i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}