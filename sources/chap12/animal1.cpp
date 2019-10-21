#include <iostream>
using namespace std;

class Animal
{
public:
	void speak() { cout << "Animal speak()" << endl; }
};

class Dog : public Animal
{
public:
	int age;
	void speak() { cout << "港港" << endl; }
};

class Cat : public Animal
{
public:
	void speak() { cout << "具克" << endl; }
};

int main()
{
	Animal *a1 = new Dog();
	a1->speak();

	Animal *a2 = new Cat();
	a2->speak();

	//a1->age = 10;  // 坷幅!!
	return 0;
}