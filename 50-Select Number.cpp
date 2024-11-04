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
  int ind = 0;
  int maxNum = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    int reg = arr[i];
    int sum = 0;
    while (reg) {
      sum += reg % 10;
      reg /= 10;
    }
    if (sum > maxNum) {
      maxNum = sum;
      ind = i;
    } else if (sum == maxNum && arr[ind] < arr[i]) {
        ind = i;
    }
  }
  cout << arr[ind];
  return 0;
}