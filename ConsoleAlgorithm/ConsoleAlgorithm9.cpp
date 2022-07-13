//#include <iostream>
//#include "LinkedLIst.h"
//int MemberNoCmp(const Member* x, const Member* y)
//{
//	return x->no <y->no ? -1 : x->no > y->no ? 1 : 0;
//}
//void Add_Student(LinkedLIst* list)
//{
//	using namespace std;
//	Member student;
//	while (true)
//	{
//		cout << "�й��� �Է��Ͻÿ�";
//		cin >> student.no;
//		if (list->search(list, &student, MemberNoCmp) == NULL)
//		{
//			break;
//		}
//	}
//	cout << "�̸��� �Է��Ͻÿ�";
//	cin >> student.name;
//	list->InsertPriority(list,&student);
//}
//void Remove_Student(LinkedLIst* list)
//{
//	using namespace std;
//	Member student;
//	while (true)
//	{
//		cout << "�й��� �Է��Ͻÿ�";
//		cin >> student.no;
//		if (list->search(list, &student, MemberNoCmp) == NULL)
//		{
//			break;
//		}
//	}
//	list->RemoveCurrent(list, list->search(list, &student, MemberNoCmp));
//}
//
//void Search_Student(LinkedLIst* list)
//{
//	using namespace std;
//	Member student;
//	cout << "�й��� �Է��Ͻÿ�";
//	cin >> student.no;
//	if (list->search(list, &student, MemberNoCmp) == NULL)
//	{
//		cout << "����";
//	}
//	else
//	{
//		cout << list->search(list, &student, MemberNoCmp)->data.no;
//		cout << list->search(list, &student, MemberNoCmp)->data.name;
//	}
//}
//int main()
//{
//	using namespace std;
//	LinkedLIst list;
//	int num = 5;
//	while (num!=0)
//	{
//		cout << "1.�л� �߰�, 2.�л� ����, 3.���, 4.�˻�";
//		cin >> num;
//		switch (num)
//		{
//			case 1:
//			{
//				Add_Student(&list);
//			}
//			break;
//			case 2:
//			{
//				Remove_Student(&list);
//			}
//			break;
//			case 3:
//			{
//				list.Print(&list);
//			}
//			break;
//			case 4:
//			{
//				Search_Student(&list);
//			}
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}
/*
* single Linked list �� �̿��� �л��θ� �����϶�.
* 1.�л� �߰�
* 2.�л� ����
* 3.���
* 4.�˻�
* 
* 1,3 �� �л��� �ִ»��¿�
* 2�� �л��� �߰�
* 1�� ȫ�浿
* 2�� ��ö��
* 3�� �̿���
* 4.��ö��
*/
//
#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include "DoubleLinkedList.h"
#include<crtdbg.h>

void Add_Student(DoubleLinkedList* list)
{
	using namespace std;
	Member student;
	while (true)
	{
		cout << "�й��� �Է��Ͻÿ�";
		cin >> student.no;
		if (list->FrontSearch(list, &student) == NULL)
		{
			break;
		}
	}
	cout << "�̸��� �Է��Ͻÿ�";
	cin >> student.name;
	list->InsertPriority(list, &student);
}

void Remove_Student(DoubleLinkedList* list)
{
	using namespace std;
	Member student;
	while (true)
	{
		cout << "�й��� �Է��Ͻÿ�";
		cin >> student.no;
		if (list->FrontSearch(list, &student) == NULL)
		{
			cout << "����";
			break;
		}
		else
		{
			list->RemoveCurrent(list, list->FrontSearch(list, &student));
			break;
		}
	}
}

void Search_Student(DoubleLinkedList* list)
{
	using namespace std;
	Member student;
	cout << "�й��� �Է��Ͻÿ�";
	cin >> student.no;
	if (list->FrontSearch(list, &student) == NULL)
	{
		cout << "����";
	}
	else
	{
		cout << list->FrontSearch(list, &student)->data.no;
		cout << list->FrontSearch(list, &student)->data.name << endl;
	}
}

int main()
{
	using namespace std;
	DoubleLinkedList list;
	int num = 5;
	while (num != 0)
	{
		cout << "1.�л� �߰�, 2.�л� ����, 3.���, 4.�˻�";
		cin >> num;
		switch (num)
		{
		case 0:
		{
			list.Clear(&list);
		}
		break;
		case 1:
		{
			Add_Student(&list);
		}
		break;
		case 2:
		{
			Remove_Student(&list);
		}
		break;
		case 3:
		{
			list.FrontPrint(&list);
			list.BackPrint(&list);
		}
		break;
		case 4:
		{
			Search_Student(&list);
		}
		break;
		default:
			break;
		}
	}
	
_CrtDumpMemoryLeaks();
	return 0;
}