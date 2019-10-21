#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<int> p(new int);

	*p = 99;		// p를 사용한다. 

	// 여기서 지역 변수인 p가 삭제되면서 소멸자가 호출되고 소멸자에서 
	// 동적 메모리도 함께 삭제하기 때문에 메모리 누수가 발생하지 않는다. 
}