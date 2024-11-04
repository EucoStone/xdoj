//
// Created by 31933 on 24-10-31.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  cout << setiosflags(ios::fixed) << setprecision(2);
  int n;
  cin >> n;
  int first, second, third, fourth, fifth, sixth;
  first = 0;
  second = 0;
  third = 0;
  fourth = 0;
  fifth = 0;
  sixth = 0;
  double PM_value;
  double total = 0;
  for (int i = 0; i < n; i++) {
    cin >> PM_value;
    if (PM_value >= 0 && PM_value <= 50) {
      first++;
    } else if (PM_value <= 100) {
      second++;
    } else if (PM_value <= 150) {
      third++;
    } else if (PM_value <= 200) {
      fourth++;
    } else if (PM_value <= 300) {
      fifth++;
    } else {
      sixth++;
    }
    total += PM_value;
  }
  cout << total / n << endl;
  cout << first <<" " << second << " " << third << " " << fourth << " " << fifth << " " << sixth;
  return 0;
}