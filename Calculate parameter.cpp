#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	cout << setiosflags(ios::fixed) << setprecision(2);
	int a, b;
	cin >> a >> b;
	double CL, tD, SP;
	CL = a + sqrt(a * b + 1);
	cout << "CL=" << CL << " ";
	tD = a * pow((CL + b), 2);
	cout << "tD=" << tD << " ";
	SP = tD * CL + pow(b, 2);
	cout << "SP=" << SP;
	return 0;
}
