//
// Created by 31933 on 24-11-4.
//
#include <iostream>
using namespace std;
int main() {
  char ch;
  cin >> ch;
  if (ch >= 'A' && ch <= 'Z') {
    cout << (char)(ch - 'A' + 'a');
  } else if (ch >= 'a' && ch <= 'z') {
    cout << (char)(ch - 'a' + 'A');
  } else {
    cout << ch;
  }
  return 0;
}