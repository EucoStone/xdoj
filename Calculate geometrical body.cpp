#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const double pi = 3.1415926;
const double oil_p = 0.785;
int main() {
	double r1, h1, r2, h2;
	cout << setiosflags(ios::fixed) << setprecision(1);
	cin >> r1 >> h1 >> r2 >> h2;
	r1 /= 2;
	r2 /= 2;
	double vol = pi * pow(r1, 2) * h1 - pi * pow(r2, 2) * h2 * (1.0 / 3);
	cout << vol << " " << vol * oil_p;
	return 0;
}
