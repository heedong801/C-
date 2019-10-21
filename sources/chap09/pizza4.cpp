#include <iostream>
using namespace std;

class Pizza {
	int radius;
public:
	Pizza(int r = 0) : radius{ r } {	}
	~Pizza() { 	}
	void setRadius(int r) { radius = r; }
	void print() { cout << "Pizza(" << radius << ")" << endl; }
};

Pizza createPizza() {
	Pizza p(10);
	return p;
}

int main()
{
	Pizza obj;
	obj = createPizza();

	obj.print();
	return 0;
}