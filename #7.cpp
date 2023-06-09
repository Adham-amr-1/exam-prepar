#include <iostream>
using namespace std;

int main() {
	int a, b, c, i, n;
	cin >> n;
	a = b = 1;
	for (i = 2; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	cout << c;

	return 0;
}
