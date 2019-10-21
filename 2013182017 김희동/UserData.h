#pragma once
#include "MyNode.h"

// CMyNode 클래스의 파생 클래스로 변경
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
	char m_pMovieName[50];	//영화 제목
	char m_pMovieNumber[50];	//영화 개봉일
	char m_pMovieWriter[50];	//감독
	int m_nMovieTime;		//상영시간

	// pNext 멤버가 사라졌다.
	static int nUserDataCounter;

public:

	// 순수 가상 함수들 정의
	virtual const char* GetKey(bool);
	
	virtual void PrintNode(void);
	virtual void SaveNode(void);
};