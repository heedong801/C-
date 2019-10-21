#include <iostream>
#include <fstream>		// 파일 입출력을 하려면 헤더 파일을 포함하여야 한다. 
using namespace std;

int main()
{
	ifstream is{ "scores.txt" };
	if (!is) {		// ! 연산자 오버로딩
		cerr << "파일 오픈에 실패하였습니다" << endl;
		exit(1);
	}
	char c;
	is.get(c);		// 하나의 문자를 읽는다.
	while (!is.eof())	// 파일의 끝이 아니면
	{
		cout << c;
		is.get(c);
	}
	cout << endl;
	return 0;
}