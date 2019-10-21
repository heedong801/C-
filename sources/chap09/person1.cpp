class Person {
public:
	int age;
	Person(int a) : age(a) {    }
};

int main()
{
	Person obj1(20);
	Person obj2(20);

	if (obj1 == obj2) {
		cout << "같습니다" << endl;
	}
	else {
		cout << "같지 않습니다" << endl;
	}
	return 0;
}