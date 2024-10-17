#include<iostream>
using namespace std;;
int main() {
	int m;
	cin >> m;
	int day, hour, minutes, seconds;
	day = m / (24 * 3600);
	hour = (m % (24 * 3600)) / 3600;
	minutes = (m % 3600) / 60;
	seconds = (m % 3600) % 60;
	cout << day << " " << hour << " " << minutes << " " << seconds;
	return 0;
}
