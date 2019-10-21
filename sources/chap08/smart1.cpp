#include <iostream>
using namespace std;

int main()
{
	int *p = new int;

	*p = 99;		// p를 사용한다. 
				// delete p;을 하지 않았기 때문에 메모리 누수가 발생한다. 
}