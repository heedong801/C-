#include <iostream>
using namespace std;

class Base
{
	public: int x;
	protected: int y;
	private: int z;
};

class Derived : private Base
{
	// x는 자식 클래스에서 사용가능하지만 private로 지정된다. 
	// y는 자식 클래스에서 사용가능하지만 private로 지정된다. 
	// z는 자식 클래스에서도 사용할 수 없다. 
};


int main()
{
	Derived obj;
	cout << obj.x;		
}