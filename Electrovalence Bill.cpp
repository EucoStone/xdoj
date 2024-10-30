//
// Created by 31933 on 24-10-30.
//
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
  cout << setiosflags(ios::fixed) << setprecision(2);
  double electric;
  cin >> electric;
  if (electric <= 110) {
    cout << electric * 0.5;
    return 0;
  }
  electric -= 110;
  if (electric > 0 && electric <= 100) {
    cout << electric * 0.55 + 110 * 0.5;
    return 0;
  }
  electric -= 100;
  if (electric > 0) {
    cout << electric * 0.7 + 100 * 0.55 + 110 * 0.5;
  }
  return 0;
}