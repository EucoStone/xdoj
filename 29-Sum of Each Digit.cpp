//
// Created by 31933 on 24-10-30.
//
#include<iostream>
#include<cstring>
using namespace std;
int main() {
  string s;
  cin >> s;
  int sum = 0;
  int l = s.size();
  for (int i = 0; i < l; i++) {
    sum += s[i] - '0';
  }
  cout << sum;
  return 0;
}
