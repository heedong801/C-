#include <iostream>
using namespace std;

// r-value ���� ����
void TestFunc(int &&rParam)
{
	cout << "TestFunc(int &&)" << endl;
}
// r-value ���� ���İ� ȣ���� �ڵ尡 ����.
void TestFunc(int nParam)
{
	cout << "TestFunc(int)" << endl;
}

int main( )
{
	// ��ȣ�� ȣ���̴�. int���� int&&�� ��� �����ϴ�!
	TestFunc(3 + 4);

	return 0;
}