#include <iostream>
#include <cstdlib>
#include <malloc.h>

int main(int argc, char* argv[])
{
	// 인스턴스만 동적으로 생성하는 경우
	int *pData = new int{ 100 };
	int *pData2 = (int *)malloc(sizeof(int));
	int *pData3= new int[10];
	char *pName = (char *)malloc(80);
	char *pAddr = new char[80];
	if (!pName) {
		std::cout << "메모리 할당 실패!" << std::endl;
	}
	if (!pAddr) {
		std::cout << "메모리 할당 실패!" << std::endl;
	}

	std::cout << "이름을 입력하세요: ";
	std::cin >> pName;
	std::cout << "입력된 이름은 " << pName << std::endl;
	std::cout << "주소를 입력하세요: ";
	std::cin >> pAddr;
	std::cout << "입력된 주소는 " << pAddr << std::endl;
	// 초깃값을 기술하는 경우
	int *pNewData = new int(10);

	*pData = 5;
	*pData2 = 10;
	
	std::cout << *pData << std::endl;
	std::cout << *pData2 << std::endl;
	std::cout << *pNewData << std::endl;

	if (pName) {
		free(pName);
	}
	if (pAddr) {
		delete [] pAddr;
	}

	delete pData;
	free (pData2);
	delete[] pData3;
	delete pNewData;
}