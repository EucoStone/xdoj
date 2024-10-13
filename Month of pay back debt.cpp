#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	double d, p, r;
	//d --> sum of money that one has borrowed
	//p --> money that one dicide to pay back each month
	//r --> interest rate of each month
	cin >> d >> p >> r;
	cout << setiosflags(ios::fixed) << setprecision(2) << (log(p) - log(p - d * r)) / log(1 + r);
	return 0;
}
