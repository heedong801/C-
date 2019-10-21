#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	auto count = count_if(numbers.begin(), numbers.end(), [](int x) { return (x > 5); });
	cout << "5보다 큰 정수들의 개수: " << count << endl;
	return 0;
}