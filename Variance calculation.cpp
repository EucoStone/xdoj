#include<iostream>
#include<cmath>
using namespace std;
int n;
const int MAXN = 35;
int arr[MAXN];
int variance = 0;
int main() {
	cin >> n;
	int aver = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		aver += arr[i];
	}
	aver /= n;
	for (int i = 1; i <= n; i++) {
		variance += pow((arr[i] - aver), 2);
	}
	cout << variance / n;
	return 0;
}
