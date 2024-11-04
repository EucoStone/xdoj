//
// Created by 31933 on 24-11-4.
//
#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  int c;
  int n;
  cin >> n;
  for (int a = 0; a <= 9; a++) {
    for (int b = 0; b <= 9; b++) {
      for (int c = 0; c <= 9; c++) {
        if (100 * (a + c) + 10 * (b + b) + (a + c) == n)
          cout << a << " " << b << " " << c << endl;
      }
    }
  }
  return 0;
}