class Animal  {
	virtual void move() = 0;
	virtual void eat() = 0;
	virtual void speak() = 0;
};
class Lion : public Animal  {
	void move(){
		cout << "사자의 move() << endl;
	}
	void eat(){
		cout << "사자의 eat() << endl;
	}
	void speak(){
		cout << "사자의 speak() << endl;
	}
};