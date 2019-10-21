#include <iostream>
#include <string>
using namespace std;

// 학생을 나타낸다. 
class Student {
private:
	string name, telephone;
public:
	Student(const string n = "", const string t = ""): name(n), telephone(t) { }
	string getTelephone() const { 	return telephone; }
	void setTelephone(const string t) {	telephone = t; }
	string getName() const { 	return name; }
	void setName(const string n) {	name = n; }
};

// 연구실을 나타낸다. 
class Lab {
	string name;
	Student *chief;
public:
	Lab(string n = ""): name(n), chief(nullptr) { }
	void setChief(Student *p) { 	chief = p; }
	void print() const {
		cout << name << "연구실" << endl;
		if (chief != nullptr)
			cout << "실장은 " << chief->getName() << endl;
		else
			cout << "실장은 현재 없습니다" << endl;
	}
};

int main()
{
	Lab lab("영상 처리");
	Student *p = new Student("김철수", "011-123-5678");

	lab.setChief(p);
	lab.print();

	delete p;
	return 0;
}	