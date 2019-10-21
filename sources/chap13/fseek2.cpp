#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	using namespace std;

	fstream iofile("words.txt", ios::in | ios::out);
	if (!iofile) {
		cout << "words.txt 파일을 열 수 없습니다." << endl;
		exit(1);
	}

	char ch; 
	while (iofile.get(ch)) {
		switch (ch)	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			// 한 글자 앞으로 간다.
			iofile.seekg(-1, ios::cur);

			// 쓰기 모드로 바꾸어서 모음 위치에 ‘*’을 쓴다. 
			iofile << '*';

			// 다시 읽기 모드로 바꾼다.
			iofile.seekg(iofile.tellg(), ios::beg);
			break;
		}
	}
	return 0;
}
