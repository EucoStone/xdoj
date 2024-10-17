#include<iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	long long n_2 = n * n;
	cout << n << " ";
	int cnt = 1;
	int reg = n;
	while (reg) {
		cnt *= 10;
		reg /= 10;
	}
	if (n == (n_2 % cnt)) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
