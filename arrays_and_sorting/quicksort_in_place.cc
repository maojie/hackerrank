#include <iostream>
using namespace std;

int n;

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void quick_sort(int a[], int begin, int end) {
  if (end - begin < 2) {
    return;
  }
  int pivot = a[end - 1];
  int i = begin;
  for (int j = begin; j < end -1; j++) {
    if (a[j] < pivot) {
      swap(a[i], a[j]);
      i++;
    }
  }
  swap(a[i], a[end - 1]);
  for (int k = 0; k < n; k++) {
    cout << a[k] << " ";
  }
  cout << endl;
  quick_sort(a, begin, i);
  quick_sort(a, i + 1, end);
}

int main() {
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  quick_sort(a, 0, n);
  return 0;
}