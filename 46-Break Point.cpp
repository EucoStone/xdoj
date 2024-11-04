//
// Created by 31933 on 24-10-31.
//
#include <iostream>
using namespace std;
const int MAXN = 105;
int arr[MAXN];
int main() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    if (!i || i == n - 1) {
      continue;
    }
    if (arr[i] <= arr[i - 1] && arr[i] <= arr[i + 1]) {
      cnt++;
    } else if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}