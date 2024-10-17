#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int n;
	double x;
	double ans = 0;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		int factorial = 1;
		for (int j = i * 2 - 1; j >= 2; j--) {
			factorial *= j;
		}
		ans += pow(-1, i + 1) * pow(x, i * 2 - 1) / factorial;
	}
	cout << setiosflags(ios::fixed) << setprecision(4);
	cout << ans;
	return 0;
}
