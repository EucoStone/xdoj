#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	double length;
	cin >> length;
	/*if(length <= 0)
	{

	}*/
	double vol = pow(length, 3);
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << vol * 19.32 << endl << vol * 10.53 << endl << vol * 8.9;
	return 0;
}
