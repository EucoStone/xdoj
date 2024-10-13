#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double t;
	cin >> t;
	double way_1, way_2;
	way_1 = 0.6 * t;
	way_2 = 0.4 * t + 50;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << way_1 << endl << way_2 << endl;
	cout << (way_1 < way_2 ? 'A' : 'B');
	return 0;
}
