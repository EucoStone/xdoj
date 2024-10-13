#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double p = (a + b + c) / 2;
	cout << setiosflags(ios::fixed) << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c));
	return 0;
}
