#include <iostream>
using namespace std;

int main(void)
{
	//int num=0x010203;
	int num=0x01;
	cout << num <<endl;
	char * ptr=reinterpret_cast<char*>(&num);

	for(int i=0; i<sizeof(num); i++)
		cout<<"char: "<< *(ptr+i) << "int: "<<static_cast<int>(*(ptr+i))<<endl;
	getchar();
	return 0;
}
