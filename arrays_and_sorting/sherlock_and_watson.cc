#include <iostream>
using namespace std;

int main() {
  int N, K, Q, i;
  cin >> N >> K >> Q;
  int a[N];
  int b[N];
  int o[Q];
  for (i = 0; i < N; i++) {
    cin >> a[i];
  }
  K = K % N;
  for (i = 0; i < K; i++) {
    b[i] = a[N - K + i];
  }
  for (i = K; i < N; i++) {
    b[i] = a[i - K];
  }
  for (i = 0; i < Q; i++) {
    cin >> o[i];
  }
  for (i = 0; i < Q; i++) {
    cout << b[o[i]] << endl;
  }
  return 0;
}
