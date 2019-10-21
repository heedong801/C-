#pragma once
#include "MyNode.h"

// CMyNode Ŭ������ �Ļ� Ŭ������ ����
class CUserData : public CMyNode
{
public:
	CUserData(void);
	CUserData(const char* pszName, const char* pszPhone);
	~CUserData(void);

	const char* GetName(void) const { return szName; }
	const char*	GetPhone(void) const { return szPhone; }
	static int GetUserDataCounter(void) { return nUserDataCounter; }

protected:
	CMyString strName;
	CMyString strPhone;

	// pNext ����� �������.
	static int nUserDataCounter;

public:
	// ���� ���� �Լ��� ����
	virtual const char* GetKey(void);
	virtual void PrintNode(void);
};