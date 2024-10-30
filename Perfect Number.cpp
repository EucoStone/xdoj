//
// Created by 31933 on 24-10-30.
//
//perfect numbers are so popular that you can find it easily by baidu.com ,so let's make a form to preprocessing
#include<iostream>
using namespace std;
const int MAXN = 10001;
int arr[MAXN];
void initialize(int l, int r) {
  for (int i = l; i <= r; i++) {
    int sum = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (sum / 2 == i) {
      arr[i] = 1;
    }
  }
}
int main() {
  int a, b;
  cin >> a >> b;
  initialize(a, b);
  for (int i = a; i < b; i++) {
    if (arr[i] == 1) {
      cout << i << endl;
    }
  }
  return 0;
}