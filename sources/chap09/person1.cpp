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
		cout << "�����ϴ�" << endl;
	}
	else {
		cout << "���� �ʽ��ϴ�" << endl;
	}
	return 0;
}