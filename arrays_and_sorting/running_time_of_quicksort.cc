#include <iostream>
using namespace std;

int insertion_sort(int a[], int n) {
  int shifts = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      int j = i;
      int curr = a[i];
      while (j > 0 && a[j - 1] > curr) {
        a[j] = a[j - 1];
        shifts++;
        j--;
      }
      a[j] = curr;
    }
  }
  return shifts;
}

int swaps = 0;

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
  int t;
  for (int j = begin; j < end -1; j++) {
    if (a[j] < pivot) {
      swap(a[i], a[j]);
      swaps++;
      i++;
    }
  }
  swap(a[i], a[end - 1]);
  swaps++;
  quick_sort(a, begin, i);
  quick_sort(a, i + 1, end);
}

int main() {
  int n;
  cin >> n;
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  int shifts = insertion_sort(a, n);
  quick_sort(b, 0, n);
  cout << shifts - swaps << endl;
  return 0;
}
