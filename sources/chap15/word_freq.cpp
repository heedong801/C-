#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> table;
	string s;

	cout << "문장을 입력하시오(종료는 Ctrl-Z): ";
	while (true) {
		cin >> s;
		table[s]++;
		if (cin.eof()) break;
	}
	for (auto& iter = table.begin(); iter != table.end(); iter++) {
		cout << iter->first << " : " << iter->second << endl;
	}
	return 0;
}