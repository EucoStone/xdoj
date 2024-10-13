#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[2 * n + 1];
	int length = n * 2;
	for (int i = 0; i < length; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		swap(arr[i], arr[n + i]);
	}
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
