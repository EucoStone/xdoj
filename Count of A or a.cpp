#include<iostream>
using namespace std;
int main() {
	char c;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> c;
		if (c == 'a' || c == 'A') {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
