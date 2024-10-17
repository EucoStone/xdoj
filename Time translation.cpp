#include<iostream>
using namespace std;;
int main() {
	int m;
	cin >> m;
	int hour, minutes, seconds;
	hour = m / 3600;
	minutes = (m % 3600) / 60;
	seconds = (m % 3600) % 60;
	if (hour < 10) {
		cout << "0" << hour;
	} else {
		cout << hour;
	}
	cout << ":";
	if (minutes < 10) {
		cout << "0" << minutes;
	} else {
		cout << minutes;
	}
	cout << ":";
	if (seconds < 10) {
		cout << "0" << seconds;
	} else {
		cout << seconds;
	}
	if (m > 43200) {
		cout << " pm";
	} else if (m <= 43200) {
		cout << " am";
	}
	return 0;
}
