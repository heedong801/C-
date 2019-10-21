#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<int> v1 = { 1, 2, 3, 4, 5 };
	vector<int> v2(5);

	copy(v1.begin(), v1.end(), v2.begin());

	for (auto it = v2.begin(); it != v2.end(); ++it)
		cout << *it << " ";

	return 0;
}