#define _CRTDBG_MAP_ALLOC
#include<crtdbg.h>
#include <iostream>
#include "BinaryTree.h"

typedef enum
{
	TERMINATE,ADD,REMOVE,SEARCH,PRINT
}Menu;

Menu SelectMenu(void)
{
	int ch;
	do {
		printf("(1)삽입, (2)삭제 (3)검색 (4)출력 (0)종료: ");
		std::cin >> ch;
	} while (ch<TERMINATE || ch >PRINT);
	return(Menu)ch;
}

void Add_Student(BinaryTree* list)
{
	using namespace std;
	Member student;
	while (true)
	{
		cout << "학번을 입력하시오";
		cin >> student.no;
		if (list->Search(list->root, &student) == NULL)
		{
			break;
		}
	}
	cout << "이름을 입력하시오";
	cin >> student.name;
	list->root=list->Add(list->root, &student);
}

void Remove_Student(BinaryTree* list)
{
	using namespace std;
	Member student;
	while (true)
	{
		cout << "학번을 입력하시오";
		cin >> student.no;
		if (list->Search(list->root, &student) == NULL)
		{
			cout << "없음";
			break;
		}
		else
		{
			list->Remove(&list->root, &student);
			break;
		}
	}
}

void Search_Student(BinaryTree* list)
{
	using namespace std;
	Member student;
	cout << "학번을 입력하시오";
	cin >> student.no;
	BinNode* temp =nullptr;
	temp = list->Search(list->root, &student);
	if (temp == NULL)
	{
		cout << "없음";
	}
	else
	{
		cout << temp->data.no<<" ";
		cout << temp->data.name << endl;
	}
}

int main()
{
	Menu menu;
	BinaryTree* root = new BinaryTree();
	//root->root = nullptr;
	do 
	{
		switch (menu = SelectMenu())
		{
		case ADD:
		{
			Add_Student(root);
		}
		break;
		case REMOVE:
		{
			Remove_Student(root);
		}
		break;
		case SEARCH:
		{
			Search_Student(root);
		}
		break;
		case PRINT:
		{
			root->PrintTree(root->root);
		}
		break;
		}
	} while (menu!=TERMINATE);
	root->FreeTree(root->root);
	delete root;
	_CrtDumpMemoryLeaks();
	return 0;
}