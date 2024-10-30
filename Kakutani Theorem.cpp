//
// Created by 31933 on 24-10-30.
//
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int cnt = 0;
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
    cnt++;
  }
  cout << cnt;
  return 0;
}