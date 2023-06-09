#include <iostream>
using namespace std;

int fact(int);
int main() {
	cout << fact(3);
	return 0;
}
int fact(int x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	else {
		return x * fact(x - 1);
	}
}
