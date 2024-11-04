//
// Created by 31933 on 24-11-4.
//
#include<iostream>
#include<cmath>
using namespace std;
int main() {
  int maxNum;
  int reg;
  for (int i = 0; i < 4; i++) {
    cin >> reg;
    if (i == 0) {
      maxNum = reg;
      continue;
    }
    maxNum = max(maxNum, reg);
  }
  cout << maxNum;
}