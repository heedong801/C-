#include <iostream>
#include <cstdlib>
#include <malloc.h>

int main(int argc, char* argv[])
{
	// �ν��Ͻ��� �������� �����ϴ� ���
	int *pData = new int{ 100 };
	int *pData2 = (int *)malloc(sizeof(int));
	int *pData3= new int[10];
	char *pName = (char *)malloc(80);
	char *pAddr = new char[80];
	if (!pName) {
		std::cout << "�޸� �Ҵ� ����!" << std::endl;
	}
	if (!pAddr) {
		std::cout << "�޸� �Ҵ� ����!" << std::endl;
	}

	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> pName;
	std::cout << "�Էµ� �̸��� " << pName << std::endl;
	std::cout << "�ּҸ� �Է��ϼ���: ";
	std::cin >> pAddr;
	std::cout << "�Էµ� �ּҴ� " << pAddr << std::endl;
	// �ʱ갪�� ����ϴ� ���
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