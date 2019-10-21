#pragma once
#include "MyNode.h"

enum Check{ Name, Date};
// 노드 클래스에 대한 알림 선언
class CMyNode;

class CMyList
{
public:
	CMyList(CMyNode *pHead);
	~CMyList(void);
	CMyNode* GetHead() { return m_pHead; }
protected:
	void ReleaseList(void);
	CMyNode *m_pHead;

public:
	CMyNode* FindNode(const char* pszKey, bool NameOrDate);
	int AddNewNode(CMyNode *pNewNode);
	void PrintAll(void);
	int RemoveNode(const char* pszKey);
};