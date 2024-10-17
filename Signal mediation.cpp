#include<iostream>
#include<cmath>
using namespace std;
struct signal_source {
	int x, y;
};
signal_source arr[45];
int signal(int x, int y) {
	int dis1 = pow((x - 4), 2) + pow((y - 4), 2);
	int dis2 = pow((x + 4), 2) + pow((y + 4), 2);
	if (dis1 < dis2) {
		return 1;
	} else {
		return 2;
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}
	for (int i = 1; i <= n; i++) {
		cout << signal(arr[i].x, arr[i].y) << " ";
	}
	return 0;
}
