#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool flag = true;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << "No";
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "Yes";
	}
	return 0;
}
