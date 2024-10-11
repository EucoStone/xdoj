#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float f_tem;
	cin >> f_tem;
//	scanf("%f", &f_tem);
//	printf("%.2f", (f_tem - 32) * (5.0 / 9));
	cout << setiosflags(ios::fixed) << setprecision(2) << (f_tem - 32) * (5.0 / 9);
	return 0;
}
