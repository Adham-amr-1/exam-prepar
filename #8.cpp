#include <iostream>
using namespace std;
int calc(int);
int main() {
	int n;
	cin >> n;
	cout << calc(n);
	return 0;
}
int calc(int n){
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return calc(n - 1) + calc(n - 2);
	}
}
