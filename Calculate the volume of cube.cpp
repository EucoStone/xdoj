#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float length, width, height;
	cin >> length >> width >> height;
	cout << setiosflags(ios::fixed) << setprecision(3) << length * width * height;
	return 0;
}
