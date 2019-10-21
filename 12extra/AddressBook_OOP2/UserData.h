#pragma once
#include "MyNode.h"

// CMyNode Ŭ������ �Ļ� Ŭ������ ����
class CUserData : public CMyNode
{
public:
	CUserData(void);
	CUserData(const char* MovieName, const char* MovieNumber, const char* MovieWriter, const int MoviePrice);
	~CUserData(void);

	const char* GetName(void) const { return m_pMovieName; }
	const char*	GetNumber(void) const { return m_pMovieNumber; }
	const char* GetWriter(void) const { return m_pMovieWriter; }
	int	GetTime(void) const { return m_nMovieTime; }

	void SetName(const char* Name) { strcpy_s(m_pMovieName, sizeof(Name), Name); }
	void SetNumber(const char* Number) { strcpy_s(m_pMovieName, sizeof(Number), Number); }
	void SetWriter(const char* Writer) { strcpy_s(m_pMovieName, sizeof(Writer), Writer); }
	void SetTime(int Time) { m_nMovieTime = Time;  }

	static int GetUserDataCounter(void) { return nUserDataCounter; }

protected:
	char m_pMovieName[50];	//��ȭ ����
	char m_pMovieNumber[50];	//��ȭ ������
	char m_pMovieWriter[50];	//����
	int m_nMovieTime;		//�󿵽ð�

	// pNext ����� �������.
	static int nUserDataCounter;

public:

	// ���� ���� �Լ��� ����
	virtual const char* GetKey(bool);
	
	virtual void PrintNode(void);
	virtual void SaveNode(void);
};