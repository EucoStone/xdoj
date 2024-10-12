#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	int l = s.size();
	for (int i = 0; i < l; i++) {
		cout << s[i] << " ";
	}
	return 0;
}
