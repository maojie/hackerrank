#include <iostream>
using namespace std;

void print(int arr[], int arr_size) {
  int i = 0;
  for (i = 0; i < arr_size - 1; i++) {
    cout << arr[i] << " ";
  }
  cout << arr[i] << endl;
}

void insertion_sort(int arr[], int arr_size) {
  for (int i = 1; i < arr_size; i++) {
    if (arr[i] < arr[i - 1]) {
      int j = i;
      int curr = arr[i];
      while (j > 0 && arr[j - 1] > curr) {
        arr[j] = arr[j - 1];
        j--;
        print(arr, arr_size);
      }
      arr[j] = curr;
      print(arr, arr_size);
    }
  }
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