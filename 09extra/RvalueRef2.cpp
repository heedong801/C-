#include <iostream>
using namespace std;

void TestFunc(int &rParam)
{
	cout << "TestFunc(int &)" << endl;
}

void TestFunc(int &&rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

int main( )
{
	// 3 + 4 ���� ����� r-value�̴�. ����� l-value�� �� �� ����.
	TestFunc(3 + 4);

	return 0;
}