#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	deque<string> dq = { "naver", "daum", "cnn", "yahoo", "google" };

	dq.push_front("infinity");		// 앞에서 삭제
	dq.pop_back();				// 끝에서 추가
	for (auto& e : dq)
		cout << e << " ";
	cout << endl;

	return 0;
}
