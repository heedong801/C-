#include "stdafx.h"
#include "UserInterface.h"
#include "MyList.h"
#include "UserData.h"

CUserInterface::CUserInterface(CMyList &rList)
	: m_List(rList)
{
}

CUserInterface::~CUserInterface(void)
{
}

void CUserInterface::Add(void)
{
	char MovieName[50] = { 0 };
	char MovieNumber[50] = { 0 };
	char MovieWriter[50] = { 0 };
	int MoviePrice = 0;

	printf("Input Movie Name : ");
	while (getchar() != '\n')break;
	gets_s(MovieName, sizeof(MovieName));

	printf("Input Movie Number : ");
	gets_s(MovieNumber, sizeof(MovieNumber));

	printf("Input Movie Writer : ");
	gets_s(MovieWriter, sizeof(MovieWriter));

	cout << "Input Movie Time : ";
	cin >> MoviePrice;

	CMyNode *NewNode = new CUserData(MovieName, MovieNumber, MovieWriter, MoviePrice);

	m_List.AddNewNode(NewNode);

}

int CUserInterface::PrintUI(void)
{
	int nInput = 0;

	system("cls");
	cout << "========================Movie Data Manage Program========================" << endl;
	printf("[1]Add\n[2]Search by Title\n[3]Search by Date\n[4]Print all\n[5]Remove\n[6]LoadOriginal\n[7]LoadCopy\n[8]Save\n[-1]Exit\n:");
	cout << "=========================================================================" << endl;
	scanf_s("%d", &nInput);
	if ( nInput == 0 )
		while (getchar() != '\n') break;

	return nInput;
}

void CUserInterface::SearchByTitle(void)
{
	char MovieName[50] = { 0 };
	CUserData *pNode = NULL;

	while (getchar() != '\n')break;
	printf("Input name : ");
	gets_s(MovieName, sizeof(MovieName));

	pNode = (CUserData*)m_List.FindNode(MovieName, false);

	if (pNode != NULL)
	{
		/*printf("[%p] %s\t%s [%p]\n",
			pNode,
			pNode->GetName(), pNode->GetNumber(),
			pNode->GetNext());*/
		cout << "영화 제목 : " << pNode->GetName() << endl;
		cout << "영화 번호 : " << pNode->GetNumber() << endl;
		cout << "영화 저자 : " << pNode->GetWriter() << endl;
		cout << "영화 시간 : " << pNode->GetTime() << endl << endl;
	}
	else
		puts("ERROR: 데이터를 찾을 수 없습니다.");

	while (getchar() != '\n')break;
	_getch();
}

void CUserInterface::SearchByDate(void)
{
	char MovieDate[50] = { 0 };
	CUserData *pNode = NULL;

	while (getchar() != '\n')break;
	printf("Input Date : ");
	gets_s(MovieDate, sizeof(MovieDate));

	pNode = (CUserData*)m_List.FindNode(MovieDate, true);

	while (getchar() != '\n')break;
	_getch();
}


void CUserInterface::Remove(void)
{
	char MovieName[50] = { 0 };

	while (getchar() != '\n')break;
	printf("Input name : ");
	fflush(stdin);
	gets_s(MovieName, sizeof(MovieName));

	m_List.RemoveNode(MovieName);
}

int CUserInterface::Run(void)
{
	int nMenu = 0;
	while ((nMenu = PrintUI()) != -1)
	{
		switch (nMenu)
		{
		case 1:    //Add
			Add();
			break;

		case 2:    //Search
			SearchByTitle();
			break;

		case 3:    //Search
			SearchByDate();
			break;

		case 4:    //Print all
			m_List.PrintAll();
			break;

		case 5:    //Remove
			Remove();
			break;

		case 6:
			LoadOriginalFile();
			break;

		case 7:
			LoadCopyFile();
			break;

		case 8:
			SaveFile();
			break;
		default:
			break;
		}
	}

	return nMenu;
}

void CUserInterface::LoadOriginalFile(void)
{
	ifstream LoadData{ "MovieData.txt" };

	char MovieName[50] = { 0 };
	char MovieNumber[50] = { 0 };
	char MovieWriter[50] = { 0 };
	char MoviePriceString[50] = { 0 };
	int MoviePrice = 0;

	if (!LoadData)
	{
		cerr << "파일 오픈에 실패하였습니다." << endl;
		exit(1);
	}
	while (!LoadData.eof())
	{
		static int count = 0;

		if (count == 0)
		{
			LoadData.getline(MovieName, 50);
			
			count++;
		}
		else if (count == 1)
		{
			LoadData.getline(MovieNumber, 50);
			count++;
		}
		else if (count == 2)
		{
			LoadData.getline(MovieWriter, 50);
			count++;
		}
		else if (count == 3)
		{
			LoadData.getline(MoviePriceString, 50);
			count = 0;

			MoviePrice = atoi(MoviePriceString);
			CMyNode *NewNode = new CUserData(MovieName, MovieNumber, MovieWriter, MoviePrice);

			m_List.AddNewNode(NewNode);
		}
	}
}

void CUserInterface::LoadCopyFile(void)
{
	ifstream LoadData{ "MovieSaveData.txt" };

	char MovieName[50] = { 0 };
	char MovieNumber[50] = { 0 };
	char MovieWriter[50] = { 0 };
	char MoviePriceString[50] = { 0 };
	int MoviePrice = 0;

	if (!LoadData)
	{
		cerr << "파일 오픈에 실패하였습니다." << endl;
		exit(1);
	}
	while (!LoadData.eof())
	{
		static int count = 0;

		if (count == 0)
		{
			LoadData.getline(MovieName, 50);

			count++;
		}
		else if (count == 1)
		{
			LoadData.getline(MovieNumber, 50);
			count++;
		}
		else if (count == 2)
		{
			LoadData.getline(MovieWriter, 50);
			count++;
		}
		else if (count == 3)
		{
			LoadData.getline(MoviePriceString, 50);
			count = 0;

			MoviePrice = atoi(MoviePriceString);
			CMyNode *NewNode = new CUserData(MovieName, MovieNumber, MovieWriter, MoviePrice);

			m_List.AddNewNode(NewNode);
		}
	}
}

void CUserInterface::SaveFile(void)
{
	CMyNode *pTmp = m_List.GetHead()->GetNext();
	
	while (pTmp != NULL)
	{
		pTmp->SaveNode();
		pTmp = pTmp->GetNext();
	}

	while (getchar() != '\n')break;
	


}