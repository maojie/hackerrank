#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

const int MAX = 100001;
long long int a[MAX];

void median(int size) {
  double sum = 0;
  if (size % 2 == 0) {
    sum = (a[size / 2] + a[size / 2 - 1]) / 2.0;
  } else {
    sum = a[size / 2];
  }
  if (ceil(sum) == sum) {
    printf("%.0lf\n", sum);
  } else {
    printf("%.1lf\n", sum);
  }
}

void remove(int elem, int& size) {
  if (size == 0) {
    cout << "Wrong!" << endl;
  } else {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
      int mid = (start + end) / 2;
      if (a[mid] > elem) {
        end = mid - 1;
      } else if (a[mid] == elem) {
        for (int i = mid; i < size - 1; i++) {
          a[i] = a[i + 1];
        }
        size--;
        if (size == 0) {
          cout << "Wrong!" << endl;
          return;
        } else {
          median(size);
          return;
        }
      } else {
        start = mid + 1;
      }
    }
    cout << "Wrong!" << endl;
  }
}

void insert(int elem, int& size) {
  if (size == 0) {
    a[0] = elem;
  } else {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
      int mid = (start + end) / 2;
      if (a[mid] >= elem) end = mid - 1;
      else start = mid + 1;
    }
    for (int i = size; i > start; i--) {
      a[i] = a[i - 1];
    }
    a[start] = elem;
  }
  size++;
  median(size);
}

int main() {
  int N, i, elem, size = 0;
  char op;
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> op >> elem;
    switch (op) {
    case 'a':
      insert(elem, size);
      break;
    case 'r':
      remove(elem, size);
      break;
    }
  }
  return 0;
}
