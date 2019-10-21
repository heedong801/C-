#include <iostream>
using namespace std;	// 지금부터 이름공간으로 std를 사용한다. 

int main()
{
	int number;
	cout << "숫자를 입력하시오:";
	cin >> number;
	switch (number) {
	case 0:
		cout << "zero\n";
		break;
	case 1:
		cout << "one\n";
		break;
	case 2:
		cout << "two\n";
		break;
	default:
		cout << "many\n";
		break;
	}

	return 0;
}