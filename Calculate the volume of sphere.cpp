#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	double pi = 3.14;
	double r;
	cin >> r;
	cout << setiosflags(ios::fixed) << setprecision(2) << (4.0 / 3)*pi*pow(r, 3);
	return 0;
}
