//
// Created by 31933 on 24-10-18.
//
#include<iostream>
using namespace std;
const int MAXN = 1005;
int arr[MAXN];
int ans = 0;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int mem = arr[0];
  ans++;
  for (int i = 1; i < n; i++) {
    if(arr[i] == mem) {
      continue;
    }
    if(arr[i] != mem) {
      ans++;
      mem = arr[i];
    }
  }
  cout << ans;
}