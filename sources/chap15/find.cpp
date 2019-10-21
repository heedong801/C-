#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	vector<string> vec { "사과", "토마토", "배", "수박", "키위" };

	auto it = find(vec.begin(), vec.end(), "수박");
	if (it != vec.end())
		cout << "수박이 " << distance(vec.begin(), it) << "에 있습니다." << endl;
	return 0;
}