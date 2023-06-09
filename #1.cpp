#include <iostream>
using namespace std;

int max(int, int);
int main() {
	int a, b, c = 100, d = 200;
	cin >> a >> b;
	cout << max(a, b);
	cout << max(c, d);
	return 0;
}
int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
