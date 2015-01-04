#include <iostream>
using namespace std;

void insertion_sort(int arr[], int arr_size) {
  int shifts = 0;
  for (int i = 1; i < arr_size; i++) {
    if (arr[i] < arr[i - 1]) {
      int j = i;
      int curr = arr[i];
      while (j > 0 && arr[j - 1] > curr) {
        arr[j] = arr[j - 1];
        shifts++;
        j--;
      }
      arr[j] = curr;
    }
  }
  cout << shifts << endl;
}

int main() {
  int arr_size;
  cin >> arr_size;
  int arr[arr_size];
  for (int i = 0; i < arr_size; i++) {
    cin >> arr[i];
  }
  insertion_sort(arr, arr_size);
  return 0;
}