#include "stdafx.h"
#include <iostream>
using namespace std;

// �Ű������� int�� ���� ���� �����̴�.
void TestFunc(int &rParam)
{
	// ��ȣ���� �Լ����� ������ ���� �����ߴ�.
	rParam = 100;
}
void TestFunc(const int &rParam)
{
	// ��ȣ���� �Լ����� ������ ���� �����ߴ�.
	cout << "const ver: "<<rParam;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int nData = 0;
	decltype(nData) nD2(10);
	cout << "decltype :" << nD2 << endl;
	// ������ ���� �μ� �����̴�.
	TestFunc(nData);
	cout << nData << endl;

	return 0;
}