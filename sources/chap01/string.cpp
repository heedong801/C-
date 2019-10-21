#include <iostream>
#include <string>	// 문자열을 사용하려면 string 파일을 포함하여야 한다.
using namespace std;	// 지금부터 이름공간으로 std를 사용한다. 

int main()
{
	string s1 = "Good";
	string s2 = "Morning";
	string s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;
	return 0;
}