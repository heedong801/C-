#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<string> my_list = { "file", "edit", "view", "help" };

	auto it = find(my_list.begin(), my_list.end(), "view");
	my_list.insert(++it, "tools");

	for (auto& n : my_list)
		cout << n << " ";
	cout << endl;
	return 0;
}