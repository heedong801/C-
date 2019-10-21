#include <iostream>
#include <time.h>
#include <list>
using namespace std;

int main()
{
	list<int> values;

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		values.push_back(rand()%100);
	}
	values.sort();

	for (auto& e: values){
		std::cout << e << ' ';
	}
	std::cout << endl;
	return 0;
}