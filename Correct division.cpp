#include<iostream>
using namespace std;
int main() {
	int m, n, q, r;
	cin >> m >> n >> q >> r;
	if (m / n == q && m % n == r) {
		cout << "yes";
	} else {
		cout << m / n << " " << m % n;
	}
	return 0;
}
