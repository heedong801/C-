#include "car.h"		// 현재 위치에 car.h를 읽어서 넣으라는 것을 의미한다. 

int Car::getSpeed()
{
	return speed;
}
void Car::setSpeed(int s)
{
	speed = s;
}