#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << setiosflags(ios::fixed) << setprecision(1);
	bool VIP;
	int money;
	cin >> VIP >> money;
	if (VIP) {
		cout << "yes ";
		cout << (double)money << " ";
		if (money >= 500) {
			cout << money * 0.8 << " " << money * 0.2;
		} else if (money < 500 && money >= 350) {
			cout << money * 0.85 << " " << money * 0.15;
		} else if (money < 350 && money >= 200) {
			cout << money * 0.9 << " " << money * 0.1;
		} else {
			cout << (double)money << " " << "0.0";
		}
	} else {
		cout << "no ";
		cout << (double)money << " ";
		if (money >= 500) {
			cout << money * 0.9 << " " << money * 0.1;
		} else if (money < 500 && money >= 350) {
			cout << money * 0.95 << " " << money * 0.05;
		} else {
			cout << (double)money << " " << "0.0";
		}
	}
	return 0;
}
