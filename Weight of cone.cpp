#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	double pi = 3.1415926;
	double D,H;
	float rou_iron = 7.86;
	float rou_gold = 19.3;
	cin >> D >> H;
	D /= 2.0;
	double volume = (1.0 / 3) * pi * pow(D, 2) * H / 1000;
	cout << setiosflags(ios::fixed) << setprecision(3);
	cout << volume * rou_iron << " " << volume * rou_gold;
	return 0;
}
