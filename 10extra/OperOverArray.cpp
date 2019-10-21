#include <iostream>
using namespace std;

// ������ �ڵ�
class CintArray
{
public:
	CintArray(int nSize)
	{
		// ���޵� ������ŭ int �ڷḦ ���� �� �ִ� �޸𸮸� Ȯ���Ѵ�.
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);
	}

	~CintArray() { delete m_pnData; }

	// ����� ������ ����� �迭 ������
	int operator[] (int nIndex) const
	{
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}

	// �Ϲ����� �迭 ������
	int& operator[] (int nIndex)
	{
		cout << "operator[]" << endl;
		return m_pnData[nIndex];
	}

private:
	// �迭 �޸�
	int *m_pnData;

	// �迭 ����� ����
	int m_nSize;
};

// ����� �ڵ�
void TestFunc(const CintArray &arParam)
{
	cout << "TestFunc()" << endl;

	// ����� �����̹Ƿ� 'operator[] (int nIndex) const'�� ȣ���Ѵ�.
	cout << arParam.operator[](3) << endl;
}

int main( )
{
	CintArray arr(5);
	for (int i = 0; i < 5; ++i)
		arr.operator[](i) = i * 10;

	TestFunc(arr);

	return 0;
}