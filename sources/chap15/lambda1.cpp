#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is_greater_than_5(int value)
{
	return (value > 5);
}

int main()
{
	vector<int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	auto count = count_if(numbers.begin(), numbers.end(), is_greater_than_5);

	cout << "5보다 큰 정수들의 개수: "	<< count << endl;
	return 0;
}