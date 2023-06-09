#include <iostream>
using namespace std;
int a, b;
int main() {
	int n, i;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "reverse: " << endl;
	for (i = (n - 1); i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}
