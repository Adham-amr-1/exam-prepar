#include <iostream>
using namespace std;

int fact(int);
int main() {
	int a, b, c, res;
	cin >> a >> b >> c;
	res = fact(a) + fact(b) - fact(c);
	cout << res;
	return 0;
}
int fact(int x) {
	int i, res = 1;
	for (i = x; i > 0; i--) {
		res *= i;
	}
	return res;
}
