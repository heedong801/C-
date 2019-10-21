#include <iostream>
using namespace std;

class Shape {
	int x, y;
public:
	void setX(int xval) {
		x = xval;
	}
	void setY(int yval) {
		y = yval;
	}
};

class Rectangle : public Shape {
	int width, height;
public:
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
	int getArea() {
		return (width * height);
	}
};

int main() {
	Rectangle r;

	r.setWidth(5);
	r.setHeight(6);

	cout << "사각형의 면적: " << r.getArea() << endl;

	return 0;
}