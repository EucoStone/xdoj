//
// Created by 31933 on 24-10-24.
//
#include<iostream>
#include<cstring>
using namespace std;
int main() {
  int day, fog;
  string license;
  cin >> day >> fog >> license;
  int length = license.length();
  int last_num = license[length - 1] - '0';
  cout << last_num;
  if ((day == 6 || day == 7) || (fog < 200)) {
    cout << " no";
  } else {
    if (fog >= 200 && fog < 400) {
      switch (day) {
        case 1: {
          if (last_num == 1 || last_num == 6) {
            cout << " yes";
          } else {
            cout << " no";
          }
          break;
        }
        case 2: {
          if (last_num == 2 || last_num == 7) {
            cout << " yes";
          } else {
            cout << " no";
          }
          break;
        }
        case 3: {
          if (last_num == 3 || last_num == 8) {
            cout << " yes";
          } else {
            cout << " no";
          }
          break;
        }
        case 4: {
          if (last_num == 4 || last_num == 9) {
            cout << " yes";
          } else {
            cout << " no";
          }
          break;
        }
        case 5: {
          if (last_num == 5 || last_num == 0) {
            cout << " yes";
          } else {
            cout << " no";
          }
          break;
        }
      }
    } else if (fog >= 400) {
      if (day == 1 || day == 3 || day == 5) {
        if(last_num == 1 || last_num == 5 || last_num == 7 || last_num == 9) {
          cout << " yes";
        } else {
          cout << " no";
        }
      } else if (day == 2 || day == 4) {
        if (last_num == 0 || last_num == 2 || last_num == 6 || last_num == 8) {
          cout << " yes";
        } else {
          cout << " no";
        }
      }
    }
  }
  return 0;
}