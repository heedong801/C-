#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main()
{
	map<string, string> myMap;

	myMap.insert(make_pair("김철수", "010-123-5678"));
	myMap.insert(make_pair("홍길동", "010-123-5679"));

	myMap["최자영"] = "010-123-5680";

	// 모든 요소 출력
	for(auto& it : myMap){
		cout << it.first << " :: " << it.second << endl;
	}
	if (myMap.find("김영희") == myMap.end())
		cout << "단어 '김영희'는 발견되지 않았습니다. " << endl;
	return 0;
}