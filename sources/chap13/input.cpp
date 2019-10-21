#include <iostream>
#include <fstream>		// 파일 입출력을 하려면 헤더 파일을 포함하여야 한다. 
using namespace std;

int main()
{
	ofstream os("test.txt");;
	char c;
	while (cin.get(c))
	{
		os.put(c);
	}
	return 0;
}