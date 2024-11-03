//
// Created by 31933 on 24-10-28.
//
#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
int trans(string s) {
  stringstream ss;
  ss << s;
  int d;
  ss >> d;
  return d;
}
int main() {
  string s;
  cin >> s;
  int l = s.size();
  int poi = 0;
  for (int i = 0; i < l; i++) {
    if (s[i] == '-') {
      continue;
    }
    if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
      poi = i;
      break;
    }
  }
  int a = trans(s.substr(0, poi));
  int b = trans(s.substr(poi + 1, l - poi - 1));
  cout << s << "=";
  if (s[poi] == '+') {
    cout << a + b;
  }
  if (s[poi] == '-') {
    cout << a - b;
  }
  if (s[poi] == '*') {
    cout << a * b;
  }
  if (s[poi] == '/') {
    cout << a / b;
  }
  if (s[poi] == '%') {
    cout << a % b;
  }
  return 0;
}
