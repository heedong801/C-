#include <iostream>
using namespace std;

class Time {
public:
	int hour;		// 0-23
	int minute;		// 0-59

	Time(int h, int m) {
		hour = h;
		minute = m;
	}
	void print() {
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	//Time a; 				// ① 오류이다! a는 초기화되지 않았다. 
	Time b(10, 25);	 		// ② OK 하지만 예전의 방법이다. 
	Time c{ 10, 25 };	 		// ③ OK 최신의 방법이다. 
	Time d = { 10, 25 }; 		// ④ OK 약간은 간결하지 않다.

	b.print();
	c.print();
	d.print();

	return 0;
}