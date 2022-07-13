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
//		cout << "학번을 입력하시오";
//		cin >> student.no;
//		if (list->search(list, &student, MemberNoCmp) == NULL)
//		{
//			break;
//		}
//	}
//	cout << "이름을 입력하시오";
//	cin >> student.name;
//	list->InsertPriority(list,&student);
//}
//void Remove_Student(LinkedLIst* list)
//{
//	using namespace std;
//	Member student;
//	while (true)
//	{
//		cout << "학번을 입력하시오";
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
//	cout << "학번을 입력하시오";
//	cin >> student.no;
//	if (list->search(list, &student, MemberNoCmp) == NULL)
//	{
//		cout << "없음";
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
//		cout << "1.학생 추가, 2.학생 삭제, 3.출력, 4.검색";
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
* single Linked list 를 이용해 학생부를 구현하라.
* 1.학생 추가
* 2.학생 삭제
* 3.출력
* 4.검색
* 
* 1,3 번 학생의 있는상태에
* 2번 학생을 추가
* 1번 홍길동
* 2번 김철수
* 3번 이영희
* 4.김철수
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
		cout << "학번을 입력하시오";
		cin >> student.no;
		if (list->FrontSearch(list, &student) == NULL)
		{
			break;
		}
	}
	cout << "이름을 입력하시오";
	cin >> student.name;
	list->InsertPriority(list, &student);
}

void Remove_Student(DoubleLinkedList* list)
{
	using namespace std;
	Member student;
	while (true)
	{
		cout << "학번을 입력하시오";
		cin >> student.no;
		if (list->FrontSearch(list, &student) == NULL)
		{
			cout << "없음";
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
	cout << "학번을 입력하시오";
	cin >> student.no;
	if (list->FrontSearch(list, &student) == NULL)
	{
		cout << "없음";
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
		cout << "1.학생 추가, 2.학생 삭제, 3.출력, 4.검색";
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