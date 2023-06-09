#include <iostream>
using namespace std;
int a, b;
void addten();
int main() {
	cin >> a >> b;
	addten();
	cout << a << " " << b;
	return 0;
}
void addten(){
	a += 10;
	b += 10;
}
