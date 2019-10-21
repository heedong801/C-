#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 10;

int main()
{
	int data;
	// 이진 파일을 쓰기 모드로 연다.
	ofstream os{ "test.dat", ofstream::binary };
	if (os.fail()) {
		cout << "test.dat 파일을 열 수 없습니다." << endl;
		exit(1);
	}
	for (int i = 0; i < SIZE; i++) {
		data = rand();
		cout << data << " ";
		os.write((char *)&data, sizeof(data));
	}
	os.close();

	// 이진 파일을 읽기 모드로 연다.
	ifstream is{ "test.dat", ofstream::binary };
	if (is.fail()) {
		cout << "test.dat 파일을 열 수 없습니다." << endl;
		exit(1);
	}
	// 파일 크기를 알아낸다. 
	is.seekg(0, ios::end);
	long size = is.tellg();
	cout << endl << "파일 크기는 " << size << endl;

	// 파일의 중앙으로 위치 표시자를 이동시킨다. 
	is.seekg(size/2, ios::beg);
	is.read((char *)&data, sizeof(int));
	cout << "중앙위치의 값은 " << data << endl;
	return 0;
}