//
// Created by 31933 on 24-10-31.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
  cout << setiosflags(ios::fixed) << setprecision(0);
  int n;
  cin >> n;
  double n_sqrt = sqrt(n);
  if (n_sqrt - (int)n_sqrt == 0) {
    cout << n_sqrt;
  } else {
    cout << "no";
  }
}