#include <iostream>
using namespace std;

void hashs();
int main() {
	hashs();
	cout << "Hello" << endl;
	hashs();
	cout << "Byebye" << endl;
	hashs();
	return 0;
}
void hashs() {
	int i, k;
	for (i = 0; i < 4; i++) {
		for (k = 0; k < 4; k++) {
			cout << "#";
		}
		cout << endl;
	}
}
