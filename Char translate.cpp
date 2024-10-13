#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char c;
	c = getchar();//if use cin,a space can not be detected
	cout << c << " ";
	if (c >= 'a' && c <= 'w') {
		cout << (char)(c + 3);
	} else if (c >= 'x' && c <= 'z') {
		cout << (char)('a' + (c - 'x'));
	} else if (c >= 'C' && c <= 'Z') {
		cout << (char)(c - 2);
	} else if (c >= 'A' && c <= 'B') {
		cout << (char)('Y' + (c - 'A'));
	} else if (c >= '0' && c <= '9') {
		cout << 9 - (c - '0');
	} else if (c == ' ') {
		cout << '*';
	} else {
		cout << '#';
	}
	return 0;
}
