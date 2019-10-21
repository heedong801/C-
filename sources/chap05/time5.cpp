#include <iostream>
using namespace std;

class Time {
public:
	int hour;		// 0-23
	int minute;		// 0-59

	Time(int h=0, int m=0) {
		hour = h;
		minute = m;
	}
	void print() {
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	Time a; 				// OK
	Time b{ 10, 25 }; 	// OK

	a.print();
	b.print();
	return 0;
}