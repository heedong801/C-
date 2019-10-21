#include <iostream>
using namespace std;

class Base {
public:
	void BaseFunc() { cout << "Base Function" << endl; }
	//virtual void BaseFunc() { cout << "Base Function" << endl; }
};
class Derived : public Base {
public:
	void DerivedFunc() { cout << "Derived Function" << endl; }
};

int main()
{
	//Base *bptr = new Derived();
	//bptr->DerivedFunc();
	//Derived *dptr = dynamic_cast<Derived*>(bptr);
	Derived * dptr = new Derived();
	Base* bptr = dptr;
}