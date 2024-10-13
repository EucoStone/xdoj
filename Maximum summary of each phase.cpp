#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x;
	int sum = 0;//record summary of phase now
	int ans = 0;//finally answer
	int mem;//record number of last phase
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (i == 0) {
			mem = x;
		}
		if (x != mem) {
			ans = max(ans, sum);
			sum = 0;
			mem = x;
		}
		sum += x;
		if (i == n - 1) {
			ans = max(ans, sum);
		}
	}
	cout << ans;
	return 0;
}
