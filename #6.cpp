#include <iostream>
using namespace std;

int fact(int);
int main() {
	int arr[100], n, i;
	cin >> n;
	arr[0] = 1;
	arr[1] = 1;
	for (i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[n - 1];
	return 0;
}
