#include <iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;

	MyArray(int size)
	{
		this->size = size;
		data = new int[size];
	}

	~MyArray()
	{
		if (data != NULL) delete[] this->data;
	}
};

int main()
{
	MyArray buffer(10);
	buffer.data[0] = 1;
	{
		MyArray clone = buffer;
	}
	buffer.data[0] = 2;

	return 0;
}