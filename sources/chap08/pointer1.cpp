#include <iostream>
using namespace std;

int main()

{
	int number = 10;
	// ���� number�� �ּҸ� ����Ͽ� p�� �����Ѵ�.
	int *p = &number;

	// p�� ����Ű�� ������ ����� ���� ����Ѵ�.
	cout << *p << endl;
	return 0;
}