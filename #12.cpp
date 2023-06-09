#include <iostream>
using namespace std;
void add7(int*, int);
int main() {
	int i, arr[5];
	for (i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	add7(arr, 5);
	for (i = 0; i < 5; i++) {
		cout << arr[i]<<" ";
	}
	return 0;
}
void add7(int* arr, int sz) {
	int i;
	for (i = 0; i < sz; i++) {
		arr[i] += 7;
	}
}
