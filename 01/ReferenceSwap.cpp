#include "stdafx.h"
#include <iostream>
using namespace std;

void SwapC(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// 참조 전달이므로 호출자 변수의 값을 변경할 수 있다.
void Swap(int &a, int &b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

int main()
{
	int x = 10, y = 20;
	int &refx(x);
	int &refy = y;
	refx++; refy++;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	x++; y++;
	cout << "refx: " << refx << endl;
	cout << "refy: " << refy << endl;
	SwapC(&x, &y);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	// 참조 전달이며 두 변수의 값이 교환된다.
	Swap(x, y);

	// 교환된 결과를 출력한다.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	return 0;
}