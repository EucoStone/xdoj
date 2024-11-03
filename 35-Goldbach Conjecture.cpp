//
// Created by 31933 on 24-10-30.
//
#include <iostream>
using namespace std;
const int MAXN = 1001;
int arr[MAXN];
void init(int range) {
  for (int i = 2; i <= range; i++) {
    if (arr[i] == 0) {
      for (int j = i + i; j <= range; j += i) {
        arr[j] = 1;
      }
    }
  }
}
int main() {
  int n;
  cin >> n;
  init(n);
  for (int i = 2; i <= n; i++) {
    if (!arr[i] && !arr[n - i]) {
      cout << i << " " << n - i;
      break;
    }
  }
  return 0;
}
