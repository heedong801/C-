#include "stdafx.h"
#include <iostream>
using namespace std;

void SwapC(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// ���� �����̹Ƿ� ȣ���� ������ ���� ������ �� �ִ�.
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

	// ���� �����̸� �� ������ ���� ��ȯ�ȴ�.
	Swap(x, y);

	// ��ȯ�� ����� ����Ѵ�.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	return 0;
}