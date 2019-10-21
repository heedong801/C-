#include <iostream>
using namespace std;

class Time {
public:
	int hour;		// 시를 나타낸다. 0-23가 가능하다.
	int minute;		// 분을 나타낸다. 0-59가 가능하다. 

	void print() {
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	Time a;			// a는 Time 자료형의 변수이다. 

	init_time(a, 10, 25); // a가 10시 25분으로 설정된다. 
	a.print();			// “10:25“가 출력된다. 

	Time b;			// b는 Time 자료형의 변수이다. 
	b.print();			// init_time()을 호출하지 않아서 잘못된 값이 들어있다. 
					// 쓰레기 값이 출력된다. 
	return 0;
}