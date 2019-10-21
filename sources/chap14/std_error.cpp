#include <iostream>
#include <exception>
using namespace std;

int main() {
	try {
		int* p = new int[100000];
		delete p;
	}
	catch (exception& e) {
		cout << "표준 예외가 발생했습니다. " << e.what() << endl;
	}
	return 0;
}