#include "stdafx.h"
#include <iostream>
#include <cstring>
//#define  _CRT_SECURE_NO_WARNINGS
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// ��ü�� �迭 ���·� ���� �����Ѵ�.
	int *arr = new int[5];
	for (int i = 0; i < 5; ++i)
		arr[i] = (i + 1) * 10;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	char *name = new char[12];
	strcpy_s(name, 12, "hong");
	std::cout << name << std::endl;
	// �迭 ���·� ������ ����� �ݵ�� �迭 ���¸� ���� �����Ѵ�!
	delete [] arr;
	delete[] name;

	return 0;
}