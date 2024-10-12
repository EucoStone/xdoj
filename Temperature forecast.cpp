#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	double h, m;
	cin >> h >> m;
	h += m / (60.0);
	double ans = (4 * pow(h, 2)) / (h + 2) - 20;
	cout << setiosflags(ios::fixed) << setprecision(2) << ans;
	return 0;
}
