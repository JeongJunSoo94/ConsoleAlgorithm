//#define _CRTDBG_MAP_ALLOC
//#include<crtdbg.h>
#include <iostream>
#include "Hash.h"


int SelectMenu()
{
	int ch=0;
	do {
		std::cout<<"(1)�߰�, (2)���� (3)�˻� (4)��λ��� (5)���� (0)����: ";
		std::cin>>ch;
	} while (ch<0 || ch >5);
	return ch;
}

void Add_Student(Hash* hash)
{
	Member student; 
	do
	{
		std::cout << "�й��� �Է��Ͻÿ�";
		std::cin >> student.no;
		std::cout << "�̸��� �Է��Ͻÿ�";
		std::cin >> student.name;
	} while (hash->Add(hash, &student)==1);
}

void Remove_Student(Hash* hash)
{
	Member student;

	while (true)
	{
		std::cout << "�й��� �Է��Ͻÿ�";
		std::cin >> student.no;
		if (hash->Search(hash, &student) == NULL)
		{
			std::cout << "����";
			break;
		}
		else
		{
			hash->Remove(hash, &student);
			break;
		}
	}
}

void Search_Student(Hash* hash)
{
	using namespace std;
	Member student;
	cout << "�й��� �Է��Ͻÿ�";
	cin >> student.no;
	Node* temp = nullptr;
	temp = hash->Search(hash, &student);
	if (temp == NULL)
	{
		cout << "����";
	}
	else
	{
		cout << temp->data.no << " ";
		cout << temp->data.name << endl;
	}
}

int main()
{
	int menu;
	Hash hash;
	hash.Initialize(&hash,13);
	do
	{
		switch (menu =SelectMenu())
		{
		case 1:
		{
			Add_Student(&hash);
		}
		break;
		case 2:
		{
			Remove_Student(&hash);
		}
		break;
		case 3:
		{
			Search_Student(&hash);
		}
		break;
		case 4:
		{
			hash.Clear(&hash);
		}
		break;
		case 5:
		{
			hash.Dump(&hash);
		}
		break;
		}
	} while (menu != 0);
	//hash.Terminate(&hash);
	//_CrtDumpMemoryLeaks();
	return 0;
}