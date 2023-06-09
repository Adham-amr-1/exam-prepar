
//Writa a class human which has data members: id, gender,birthday,
//and function members to read, set, get, and print data and 
//calculate_age.
//Then inherite this class into two classes students and doctor
//the student class has one more data member: level (int)  and three
//more function members setlevel, getlevel, and printAllData.
//the doctor class has one more data member salary (float)
// and 3 more function members: getSalery, setSalary, and printAllData.

#include <iostream>
using namespace std;
class human {
protected:
	int id;
	char gender;
	int birthday;
public:
	human() {
		id = birthday = NULL;
		gender = 'O';
	}
	human(int ID, int birth, char gndr) {
		id = ID;
		birthday = birth;
		gender = gndr;
	}
	void readData() {
		cout << "Enter ID : ";
		cin >> id;
		cout << "Enter Birthday year : ";
		cin >> birthday;
		cout << "Enter Gender (F / M) : ";
		cin >> gender;
	}
	void setData(int ID, int birth, char gndr) {
		id = ID;
		birthday = birth;
		gender = gndr;
	}
	int getId() {
		return id;
	}
	char getGender() {
		return gender;
	}
	int getBirthday() {
		return birthday;
	}
	void printData() {
		cout << "ID = " << id << endl;
		cout << "Birthday = " << birthday << endl;
		cout << "Gender = " << gender << endl;
	}
	int calculateAge(){
		return 2023 - birthday;
	}
};
class student : public human {
private:
	int level;
public:
	student() {
		human();
		level = NULL;
	}
	student(int ID, int birth, char gndr, int lvl) {
		human(ID, birth, gndr);
		level = lvl;
	}
	int getLevel() {
		return level;
	}
	void setLevel(int lvl) {
		level = lvl;
	}
	void printAllData() {
		printData();
		cout << "Level : " << level << endl;
	}
};
class doctor :public human {
private: 
	float salary;
public:
	doctor() {
		human();
		salary = 0.0;
	}
	doctor(int ID, int birth, char gndr, int lvl, float flosy) {
		human(ID, birth, gndr);
		salary = flosy;
	}
	float getsalary() {
		return salary;
	}
	void setSalary(int flosy) {
		salary = flosy;
	}
	void printAllData() {
		printData();
		cout << "Salary : " << salary << endl;
	}
};
int main() {

	return 0;
}
