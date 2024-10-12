#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << setiosflags(ios::fixed) << setprecision(2) << (double)((a + b + c) / 3.0);
	return 0;
}
