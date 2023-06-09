#include <iostream>
using namespace std;

void hashs(int, int);
int main() {
	hashs(4, 4);
	cout << "Hello" << endl;
	hashs(3, 4);
	cout << "Byebye" << endl;
	hashs(4, 4);
	return 0;
}
void hashs(int row, int col) {
	int i, k;
	for (i = 0; i < row; i++) {
		for (k = 0; k < col; k++) {
			cout << "#";
		}
		cout << endl;
	}
}
