#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	int l = s.size();
	for (int i = 0; i < l; i++) {
		if (s[i] == '-') {
			continue;
		}
		cout << s[i] << " ";
	}
	cout << endl;
	for (int i = l - 1; i >= 0; i--) {
		if (s[i] == '-') {
			continue;
		}
		cout << s[i] << " ";
	}
	return 0;
}
