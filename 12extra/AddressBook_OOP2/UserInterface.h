#pragma once

class CMyList;

class CUserInterface
{
public:
	CUserInterface(CMyList &rList);
	~CUserInterface(void);

protected:
	CMyList	 &m_List;

public:
	void Add(void);

	void SearchByTitle(void);

	void SearchByDate(void);

	void Remove(void);

	int PrintUI(void);

	int Run(void);

	void LoadOriginalFile(void);

	void LoadCopyFile(void);

	void SaveFile(void);
};