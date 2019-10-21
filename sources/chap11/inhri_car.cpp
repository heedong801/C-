#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed; // 속도

public:
	void setSpeed(int s) 	{		speed = s;		}
	int getSpeed() 		{ 		return speed;	}
};

// Car 클래스를 상속받아서 다음과 같이 SportsCar 클래스를 작성한다.
class SportsCar : public Car {		
	bool turbo;

public:
	void setTurbo(bool newValue) { 	turbo = newValue;	}
	bool getTurbo() 				{		return turbo;		}
};

int main()
{
	SportsCar  c;

	c.setSpeed(60);		// 부모 클래스 함수 호출
	c.setTurbo(true);		// 자식 클래스 함수 호출
	c.setSpeed(100);
	c.setTurbo(false);
	return 0;
}