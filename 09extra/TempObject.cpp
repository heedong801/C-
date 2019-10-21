#include <iostream>
using namespace std;

// ������ �ڵ�
class CTestData
{
public:
	CTestData(int nParam, const char *pszName) : m_nData(nParam), m_pszName(pszName)
	{
		cout << "CTestData(int): " << m_pszName << endl;
	}

	~CTestData()
	{
		cout << "~CTestData(): " << m_pszName << endl;
	}

	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName)
	{
		cout << "CTestData(const CTestData &): " << m_pszName << endl;
	}

	CTestData& operator=(const CTestData &rhs)
	{
		cout << "operator=" << endl;

		// ���� ���������� �̸�(m_pszName)�� �״�� �д�.
		m_nData = rhs.m_nData;

		return *this;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;

	// ���� �̸��� �����ϱ� ���� ���
	const char *m_pszName = nullptr;
};

// CTestData ��ü�� ��ȯ�ϴ� �Լ���.
CTestData TestFunc(int nParam)
{
	// CTestData Ŭ���� �ν��Ͻ��� a�� ������������ ������.
	// ���� �Լ��� ��ȯ�Ǹ� �Ҹ��Ѵ�.
	CTestData a(nParam, "a");

	return a;
}

int main()
{
	CTestData b(5, "b");
	cout << "*****Before*****" << endl;

	// �Լ��� ��ȯ�ϸ鼭 �ӽ� ��ü�� �����ƴٰ� ���� ���� �� ��� �Ҹ��Ѵ�!
	b = TestFunc(10);
	cout << "*****After*****" << endl;
	cout << b.GetData() << endl;

	return 0;
}