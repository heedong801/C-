#include <iostream>

class Circle {
public:
	double calcArea(); 

	int radius; 	// 반지름      
	std::string color;	// 색상
};


double Circle::calcArea() {
	return 3.14*radius*radius;
}

int main()
{
	Circle c;
	c.radius = 10;
	std::cout << c.calcArea() << std::endl;
	return 0;
}