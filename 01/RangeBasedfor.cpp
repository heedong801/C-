#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[5] = { 10, 20, 30, 40, 50 };
	int num[100];

	for (int i = 0; i < 100; ++i)
		num[i] = i + 1;
	for (int &var : num)
		var = var + 1;
	for (auto &var : num)
		var = var + 1;
	for (auto var: num)
		cout << var << ' ';

	cout << std::endl;

	// �������� C ��Ÿ�� �ݺ���
	for(int i = 0; i < 5; ++i)
		cout << ++aList[i] << ' ';

	cout << endl;

	// ���� ��� C++11 ��Ÿ�� �ݺ���
	// �� ����� ���� n�� �����Ѵ�.
	for(auto n : aList)
		cout << ++n << ' ';
	cout << endl;
	for (auto n : aList)
		cout << n << ' ';
	cout << endl;

	// n�� �� ��ҿ� ���� ������.
	for(auto &n : aList)
		cout << ++n << ' ';
	cout << endl;
	for (auto n : aList)
		cout << n << ' ';
	cout << endl;
	return 0;
} 