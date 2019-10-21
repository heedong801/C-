#include <iostream>
#include <windows.h>

using namespace std;

class Circle {
public:
	int x, y, radius;	// 원의 중심점과 반지름
	string color;		// 원의 색상

	double calcArea() {	// 원의 면적을 계산하는 함수
		return 3.14*radius*radius;
	}
	void draw()	{	// 원을 화면에 그리는 함수
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
	}
};

int main()
{
	Circle c;

	c.x = 100; 	// 반지름      
	c.y = 100; 	// 반지름      
	c.radius = 50; 	// 반지름      
	c.draw();

	return 0;
}