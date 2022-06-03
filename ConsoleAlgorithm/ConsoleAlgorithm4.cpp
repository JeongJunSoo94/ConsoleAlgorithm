#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"IntStack.h"

int Initialize(IntStack* s, int max)
{
	s->stk = new int[max];
	if (s->stk == nullptr)
		return -1;
	else
	{
		s->max = max;
		s->ptr = 0;
		return 1;
	}
}

int Push(IntStack* s, int x)
{
	if (s->ptr == s->max - 1)
	{
		return 0;
	}
	else
	{
		s->stk[s->ptr] = x;
		s->ptr++;
		return 1;
	}
}

int Pop(IntStack* s, int* x)
{
	if (s->ptr == 0)
		return 0;
	else
	{
		s->ptr--;
		*x = s->stk[s->ptr];
		s->stk[s->ptr] = 0;
		return 1;
	}
}

int Peek(const IntStack* s, int* x)
{
	if (s->ptr == 0)
		return 0;
	else
	{
		*x = s->stk[s->ptr - 1];
		return 1;
	}
}

void Clear(IntStack* s)
{
	while (s->ptr != 0)
	{
		s->ptr--;
		s->stk[s->ptr] = 0;
	}
}

int Capacity(const IntStack* s)
{
	return s->max;
}

int Size(const IntStack* s)
{
	return s->ptr;
}

int IsEmpty(const IntStack* s)
{
	if (s->ptr == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int IsFull(const IntStack* s)
{
	if (s->ptr == s->max)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Search(const IntStack* s, int x)
{
	for (int i = s->ptr - 1; i > -1; i--)
	{
		if (s->stk[i] == x)
			return i + 1;
	}
	return 0;
}

void Print(const IntStack* s)
{
	if (s->ptr == 0)
	{
		printf("������ �� ��¿� �����߽��ϴ�.\n");
		return;
	}

	for (int i = 0; i < s->ptr; i++)
	{
		printf("������ �ٴ����κ��� %d ��° ������: %d \n", i + 1, s->stk[i]);
	}
}

void Terminate(IntStack* s)
{
	delete(s->stk);
}

int main()
{
	IntStack s;
	if (Initialize(&s, 64) == -1)
	{
		puts("���� ������ �����Ͽ����ϴ�.");

		return 1;
	}
	while (1)
	{
		int menu, x;
		printf("���� ������ �� : %d /%d\n", Size(&s), Capacity(&s));
		printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (0)���� : ");
		scanf("%d", &menu);

		if (menu == 0)break;
		switch (menu)
		{
		case 1:
			printf("������ : ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
			{
				puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
			}
			break;
		case 2:
			if (Pop(&s, &x) == -1)
			{
				puts("\a���� : �˿� �����Ͽ����ϴ�.");
			}
			else
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			break;
		case 3:
			if (Peek(&s, &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d �Դϴ�.\n", x);
			break;
		case 4:
			Print(&s);
			break;
		}
	}
	Terminate(&s);
	return 0;
}
