#include "stdafx.h"
#include "MyList.h"
#include "UserData.h"

CMyList::CMyList(CMyNode *pHead)
{
	m_pHead = pHead;
}

CMyList::~CMyList(void)
{
	ReleaseList();
}

int CMyList::AddNewNode(CMyNode *pNewNode)
{
	if (FindNode(pNewNode->GetKey(0), false) != NULL)
	{
		delete pNewNode;

		return 0;
	}

	pNewNode->pNext = m_pHead->pNext;
	m_pHead->pNext = pNewNode;

	return 1;
}

void CMyList::PrintAll(void)
{
	CMyNode *pTmp = m_pHead->pNext;

	while (getchar() != '\n')break;
	while (pTmp != NULL)
	{
		pTmp->PrintNode();
		pTmp = pTmp->pNext;
	}

	printf("CUserData Counter : %d\n", CUserData::GetUserDataCounter()-1);

	while (getchar() != '\n')break;
	_getch();
}

CMyNode* CMyList::FindNode(const char* pszKey, bool NameOrDate)
{
	CMyNode *pTmp = m_pHead->pNext;

	if (NameOrDate == Name)
	{
		while (pTmp != NULL)
		{
			const char* tmp = pTmp->GetKey(Name);

			if (strcmp(tmp, pszKey) == 0)
				return pTmp;

			pTmp = pTmp->pNext;

		}
	}
	else
	{
		int CheckPrintDate = 0;

		while (pTmp != NULL)
		{
			const char* tmp = pTmp->GetKey(Date);
			int count = 0;

			for (int i = 0; i < strlen(pszKey); i++)
			{
				if (tmp[i] != pszKey[i])
					break;
				else
					count++;
			}
			if (count == strlen(pszKey))
			{
				CUserData *pNode = NULL;

				pNode = (CUserData*)pTmp;
				cout << "영화 제목 : " << pNode->GetName() << endl;
				cout << "영화 번호 : " << pNode->GetNumber() << endl;
				cout << "영화 저자 : " << pNode->GetWriter() << endl;
				cout << "영화 시간 : " << pNode->GetTime() << endl << endl;
				CheckPrintDate++;
			}

			pTmp = pTmp->pNext;
		}
		if (!CheckPrintDate)
		{
			cout << "ERROR: 데이터를 찾을 수 없습니다." << endl;
		}
	}
	
	return NULL;
}


int CMyList::RemoveNode(const char* pszKey)
{
	CMyNode *pPrevNode = m_pHead;
	CMyNode *pDelete = NULL;

	while (pPrevNode->pNext != NULL)
	{
		pDelete = pPrevNode->pNext;

		if (strcmp(pDelete->GetKey(0), pszKey) == 0)
		{
			pPrevNode->pNext = pDelete->pNext;
			delete pDelete;

			return 1;
		}

		pPrevNode = pPrevNode->pNext;
	}

	return 0;
}

void CMyList::ReleaseList(void)
{
	CMyNode *pTmp = m_pHead;
	CMyNode *pDelete = NULL;

	while (pTmp != NULL)
	{
		pDelete = pTmp;
		pTmp = pTmp->pNext;

		delete pDelete;
	}

	m_pHead = NULL;
}

