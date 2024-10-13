#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	double r, n;
	cin >> r >> n;
	cout << setiosflags(ios::fixed) << setprecision(2) << pow((r + 1), n);
	return 0;
}
