#include <iostream>
#include <memory>

using namespace std;


int main()
{
	unique_ptr<int> p(new int);

	*p = 99;		// p�� ����Ѵ�. 
	// p�� �����Ǹ鼭 ���� �޸𸮵� �Բ� �����ϱ� ������ �޸� ������ �߻����� �ʴ´�. 
}