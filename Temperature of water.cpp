#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int minute, second;
	cin >> minute >> second;
	double ti = minute + second / 60.0;
	double temperature = 0;
	if (ti >= 0 && ti <= 10) {
		temperature = 100 - ti * 5;
	} else if (ti > 10 && ti <= 30) {
		temperature = 50 - (ti - 10);
	} else if (ti > 30 && ti <= 50) {
		temperature = 30 - (ti - 30) / 2.0;
	} else if (ti > 50) {
		temperature = 20;
	}
	cout << setiosflags(ios::fixed) << setprecision(1) << temperature;
	return 0;
}
