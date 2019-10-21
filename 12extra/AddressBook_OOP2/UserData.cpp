#include "stdafx.h"
#include "UserData.h"

int CUserData::nUserDataCounter = 0;

CUserData::CUserData(void)
{
	memset(m_pMovieName, 0, sizeof(m_pMovieName));
	memset(m_pMovieNumber, 0, sizeof(m_pMovieNumber));
	memset(m_pMovieWriter, 0, sizeof(m_pMovieWriter));
	m_nMovieTime = 0;

	nUserDataCounter++;
}

CUserData::CUserData(const char* MovieName, const char* MovieNumber, const char* MovieWriter, const int MoviePrice )
{
	memset(m_pMovieName, 0, sizeof(m_pMovieName));
	memset(m_pMovieNumber, 0, sizeof(m_pMovieNumber));
	memset(m_pMovieWriter, 0, sizeof(m_pMovieWriter));
	
	strcpy_s(m_pMovieName, sizeof(m_pMovieName), MovieName);
	strcpy_s(m_pMovieNumber, sizeof(m_pMovieNumber), MovieNumber);
	strcpy_s(m_pMovieWriter, sizeof(m_pMovieWriter), MovieWriter);
	m_nMovieTime = MoviePrice;

	nUserDataCounter++;
}

CUserData::~CUserData(void)
{
	nUserDataCounter--;
}

const char* CUserData::GetKey(bool NameOrDate)
{
	if (!NameOrDate)
		return m_pMovieName;
	else
		return m_pMovieNumber;
}

void CUserData::PrintNode(void)
{
#ifdef _DEBUG
	/*printf("[%p] %s\t%s [%p]\n",
		this,
		m_pMovieName, m_pMovieNumber,
		GetNext());*/
	cout << "��ȭ ���� : " << m_pMovieName << endl;
	cout << "��ȭ ��ȣ : " << m_pMovieNumber << endl;
	cout << "��ȭ ���� : " << m_pMovieWriter << endl;
	cout << "��ȭ �ð� : " << m_nMovieTime << "��" << endl;
	cout << endl << endl;
#else
	cout << "��ȭ ���� : " << m_pMovieName << endl;
	cout << "��ȭ ��ȣ : " << m_pMovieNumber << endl;
	cout << "��ȭ ���� : " << m_pMovieWriter << endl;
	cout << "��ȭ �ð� : " << m_nMovieTime << "��" << endl;
#endif
}

void CUserData::SaveNode(void)
{
	ofstream SaveData{ "MovieSaveData.txt", ios::app };
	static int count = 0;

	if (!SaveData)
	{
		cerr << "���� ���¿� �����Ͽ����ϴ�." << endl;
		exit(1);
	}
	else
	{
		SaveData << m_pMovieName << endl;
		SaveData << m_pMovieNumber << endl;
		SaveData << m_pMovieWriter << endl;
		SaveData << m_nMovieTime << endl;
		count++;
	}
	if (count == GetUserDataCounter())
	{
		SaveData << endl;
		count = 0;
	}
}