#include <iostream>
using namespace std;
struct student {
	int id;
	char gender;
	float score;
};
student readData() {
	student st;
	cout << "Enter ID: ";
	cin >> st.id;
	cout << "Enter Gender (F/M): ";
	cin >> st.gender;
	cout << "Enter Score: ";
	cin >> st.score;
	return st;
}
void printData(student st) {
	cout << st.id << endl;
	cout << st.id;
}
int main() {
	student st1, st2, st3;
	st1 = readData();
	st2 = readData();
	st3 = readData();
	if (st1.score > st2.score) {
		if (st1.score > st3.score) {
			printData(st1);
		}
		else {
			printData(st3);
		}
	}
	else {
		if (st2.score > st3.score) {
			printData(st2);
		}
		else {
			printData(st3);
		}
	}
	return 0;
}
