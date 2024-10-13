#include<iostream>
using namespace std;
int main() {
	int money;
	cin >> money;
	cout << money / 100 << " ";
	money %= 100;
	cout << money / 50 << " ";
	money %= 50;
	cout << money / 20 << " ";
	money %= 20;
	cout << money / 10 << " ";
	money %= 10;
	cout << money / 5 << " ";
	money %= 5;
	cout << money / 1 << " ";
	return 0;
}
