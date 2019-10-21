#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (vector<int>::iterator p = v.begin(); p != v.end(); ++p) 
		cout << *p << endl;
	return 0;
}