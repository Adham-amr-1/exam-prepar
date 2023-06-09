#include <iostream>
using namespace std;

int fact(int);
int sum(int);
int main() {
	int a, b, c, d, res;
	cin >> a >> b >> c >> d;
	res = (fact(a) + fact(b)) / (sum(c) * sum(d));
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
int sum(int x) {
	int i, res = 0;
	for (i = x; i > 0; i--) {
		res += i;
	}
	return res;
}
