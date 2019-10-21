#include <iostream>
using namespace std;

// ������ �ڵ�
class CMyData
{
public:
	explicit CMyData(int nParam)
	{
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; }

	operator int() { return *m_pnData; }

	// �ܼ� ���� ������ ���� ����
	CMyData& operator=(const CMyData &rhs)
	{
		if (this == &rhs)
			return *this;
		// ���� ����Ű�� �޸𸮸� �����ϰ�
		delete m_pnData;
		// ���� �Ҵ��� �޸𸮿� ���� �����Ѵ�.
		m_pnData = new int(*rhs.m_pnData);
		return *this;
	}
	
private:
	int *m_pnData = nullptr;
};

// ����� �ڵ�
int main()
{
	CMyData a(0), b(5), c(10);
	a = b = c; //a.operator=(b.operator=(c));
	a = a; //a.operator(a);
	cout << a << endl;

	return 0;
}