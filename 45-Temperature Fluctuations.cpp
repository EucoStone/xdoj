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
  double temperature;
  double reg = 0;
  double maxTempDis = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temperature;
    if (!i) {
      reg = temperature;
      continue;
    }
    maxTempDis = max(maxTempDis, abs(temperature - reg));
    reg = temperature;
  }
  cout << maxTempDis;
  return 0;
}