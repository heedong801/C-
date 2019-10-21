#include <iostream>     
#include <algorithm>   
#include <vector>       
using namespace std;

bool function(int i, int j) { 
	return (i<j); 
}


int main() 
{
	vector<int> list { 9, 12, 33, 78, 15, 5, 3, 80, 26 };


	sort(list.begin(), list.end());
	for (auto& e : list)
		cout << e << " ";
	cout << endl;

	random_shuffle(list.begin(), list.end());
	sort(list.begin(), list.end(), function);
	for (auto& e : list)
		cout << e << " ";
	cout << endl;

	return 0;
}