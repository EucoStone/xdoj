#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	double pi = 3.1415926;
	double iron, gold;
	float rou_iron = 7.86;
	float rou_gold = 19.3;
	cin >> iron >> gold;
	iron /= 2.0 * 10;
	gold /= 2.0 * 10;
//	double ans_i = (4.0 / 3) * pi * pow(iron, 3) * rou_iron;
//	double ans_g = (4.0 / 3) * pi * pow(gold, 3) * rou_gold;
	cout << setiosflags(ios::fixed) << setprecision(3);
	cout << (4.0 / 3) * pi * pow(iron, 3) * rou_iron << " " << (4.0 / 3) * pi * pow(gold, 3) * rou_gold;
	return 0;
}
