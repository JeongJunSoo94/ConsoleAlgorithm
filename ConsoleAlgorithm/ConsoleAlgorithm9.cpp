#include <iostream>
#include "LinkedLIst.h"
int MemberNoCmp(const Member* x, const Member* y)
{
	return x->no <y->no ? -1 : x->no > y->no ? 1 : 0;
}
void Add_Student(LinkedLIst* list)
{
	using namespace std;
	Member student;
	while (true)
	{
		cout << "�й��� �Է��Ͻÿ�";
		cin >> student.no;
		if (list->search(list, &student, MemberNoCmp) == NULL)
		{
			break;
		}
	}
	cout << "�̸��� �Է��Ͻÿ�";
	cin >> student.name;
	list->InsertPriority(list,&student);
}
void Remove_Student(LinkedLIst* list)
{
	using namespace std;
	Member student;
	while (true)
	{
		cout << "�й��� �Է��Ͻÿ�";
		cin >> student.no;
		if (list->search(list, &student, MemberNoCmp) == NULL)
		{
			break;
		}
	}
	list->RemoveCurrent(list, list->search(list, &student, MemberNoCmp));
}

void Search_Student(LinkedLIst* list)
{
	using namespace std;
	Member student;
	cout << "�й��� �Է��Ͻÿ�";
	cin >> student.no;
	if (list->search(list, &student, MemberNoCmp) == NULL)
	{
		cout << "����";
	}
	else
	{
		cout << list->search(list, &student, MemberNoCmp)->data.no;
		cout << list->search(list, &student, MemberNoCmp)->data.name;
	}
}
int main()
{
	using namespace std;
	LinkedLIst list;
	int num = 5;
	while (num!=0)
	{
		cout << "1.�л� �߰�, 2.�л� ����, 3.���, 4.�˻�";
		cin >> num;
		switch (num)
		{
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
				list.Print(&list);
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
	return 0;
}
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