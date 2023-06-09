#include <iostream>
using namespace std;
struct point {
	float x, y;
};
class line {
protected:
	point p1, p2;
	double leng;
public:
	line() {
		p1.x = p2.x = p1.y = p2.y = 0;
	}
	line(float x1, float y1, float x2, float y2) {
		p1.x = x1;
		p2.x = x2; 
		p1.y = y1;
		p2.y = y2;
	}
	void readData() {
		cout << "enter the first point data: ";
		cin >> p1.x >> p1.y;
		cout << "enter the second point data: ";
		cin >> p2.x >> p2.y;
	}
	void setData(float x1, float y1, float x2, float y2) {
		p1.x = x1;
		p2.x = x2;
		p1.y = y1;
		p2.y = y2;
	}
	point getp1() {
		return p1;
	}
	point getp2() {
		return p2;
	}
	void printData() {
		cout << "the first point data is : ";
		cout << p1.x << " " << p1.y;
		cout << "the second point data is : ";
		cout << p2.x << " " << p2.y;
	}
	double calc_length() {
		double x = pow(p2.x - p1.x, 2);
		double y = pow(p2.y - p1.y, 2);
		leng = pow(x + y, 0.5);
		return leng;
	}
};
class line2 : public line {
public:
	line2() {
		line();
	}
	line2(float x1, float y1, float x2, float y2) {
		line(x1, y1, x2, y2);
	}
	bool is_horizontal() {
		if (p1.y == p2.y) {
			return true;
		}
		else {
			return false;
		}
	}
	bool is_vertical() {
		if (p1.x == p2.x) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main() {
	line l1, l2;
	l1.setData(10, 10, 40, 50);
	l2.readData();
	if (l1.calc_length() > l2.calc_length()) {
		cout << "Line 1 is longest";
	}
	else {
		cout << "Line 2 is longest";
	}
	return 0;
}
