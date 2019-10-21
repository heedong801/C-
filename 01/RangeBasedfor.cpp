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

	// 전형적인 C 스타일 반복문
	for(int i = 0; i < 5; ++i)
		cout << ++aList[i] << ' ';

	cout << endl;

	// 범위 기반 C++11 스타일 반복문
	// 각 요소의 값을 n에 복사한다.
	for(auto n : aList)
		cout << ++n << ' ';
	cout << endl;
	for (auto n : aList)
		cout << n << ' ';
	cout << endl;

	// n은 각 요소에 대한 참조다.
	for(auto &n : aList)
		cout << ++n << ' ';
	cout << endl;
	for (auto n : aList)
		cout << n << ' ';
	cout << endl;
	return 0;
} 