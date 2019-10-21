#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
bool is_even(const T& num)
{
	return (num % 2) == 0;
}

int main()
{
	vector<int> vec;
	for (int i = 0; i<10; i++)
		vec.push_back(i);

	size_t n = count_if(vec.begin(), vec.end(), is_even<int>);
	cout << "값이 짝수인 요소의 개수: " << n << endl;
	return 0;
}