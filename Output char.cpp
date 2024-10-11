#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	int l = s.size();
	for (int i = 0; i < l; i++) {
		if (s[i] != '|') {
			cout << (char)(s[i] + 32);
		}
	}
	cout << '!';
}
