#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	int length = s.size();
	bool flag = false;
	for (int i = 0, j = length - 1; i <= j; i++, j--) {
		if (s[i] != s[j]) {
			cout << "No";
			flag = true;
			break;
		}
	}
	if (!flag) {
		cout << "Yes";
	}
	return 0;
}
