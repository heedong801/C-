#include <iostream>
using namespace std;

class Person {
public:
	int age;
	Person(int a) : age{a} {    }
};

int main()
{
	Person kim(21);
	Person clone{ kim };

	cout << "kim�� ����: " << kim.age << " clone�� ����: " << clone.age << endl;
	kim.age = 23;
	cout << "kim�� ����: " << kim.age << " clone�� ����: " << clone.age << endl;

	return 0;
}
