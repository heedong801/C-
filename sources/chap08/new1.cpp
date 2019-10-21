#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int *ptr; 				// 동적 메모리를 가리키는 포인터

	srand(time(NULL));		// 난수 발생기 시드 설정
	ptr = new int[10]; 		// ① 동적 메모리 할당

	for (int i = 0; i<10; i++)
		ptr[i] = rand();		// ② 동적 메모리 사용: 동적 메모리에 난수 저장

	for (int i = 0; i<10; i++)
		cout << ptr[i] << " ";

	delete[] ptr; 			// ③ 동적 메모리 반납
	cout << endl;
	return 0;
}