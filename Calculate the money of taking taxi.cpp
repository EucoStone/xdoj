#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double mileage;
	int time_wait;
	cin >> mileage >> time_wait;
	double money = 0;
	if (mileage <= 3) {
		money += 10;
	} else if (mileage > 3 && mileage <= 10) {
		money += 10 + (mileage - 3) * 2;
	} else if (mileage > 10) {
		money += 10 + (10 - 3) * 2 + (mileage - 10) * 3;
	}
	money += (time_wait / 5) * 2;
	cout << round(money);
	return 0;
}
