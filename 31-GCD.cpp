//
// Created by 31933 on 24-10-30.
//
#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}
int main() {
  int a, b;
  cin >> a >> b;
  if (a == 0 || b == 0) {
    cout << max(a, b);
  } else {
    if (a < b) {
      swap(a, b);
    }
    cout << gcd(a, b);
  }
  return 0;
}
