#include <iostream>
using namespace std;
int a, b;
void addten(int*, int*);
int main() {
	cin >> a >> b;
	addten(&a,&b);
	cout << a << " " << b;
	return 0;
}
void addten(int*a ,int*b){
	*a += 10;
	*b += 10;
}
