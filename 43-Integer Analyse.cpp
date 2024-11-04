#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main() {
	string s;
	cin >> s;
	int l = s.size();
	int maxn = 0;
	int minn = 100;
	for (int i = 0; i < l; i++) {
		int num = s[i] - '0';
		maxn = max(maxn, num);
		minn = min(minn, num);
	}
	cout << l << " " << maxn << " " << minn;
	return 0;
}
