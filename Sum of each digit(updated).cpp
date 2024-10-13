#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	int length = s.size();
	int ans = 0;
	for (int i = 0; i < length; i++) {
		ans += s[i] - '0';
	}
	cout << ans;
	return 0;
}
