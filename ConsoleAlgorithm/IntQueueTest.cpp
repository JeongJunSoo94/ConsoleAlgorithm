#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"IntQueue.h"

int Initialize(IntQueue* q, int max)
{
	q->que = new int[max];
	if (q->que == nullptr)
		return -1;
	else
	{
		q->max = max;
		q->num = 0;
		q->front = 0;
		q->rear = 0;
		return 1;
	}
}

int Enque(IntQueue* q, int x) 
{
	if (q->max== q->num)
	{
		return -1;
	}
	else
	{
		if (q->num == 0)
		{
			q->que[q->rear] = x;
			q->num++;
		}
		else
		{
			if (q->rear + 1 == q->max)
			{
				q->rear = 0;
				q->que[q->rear] = x;
				q->num++;
			}
			else
			{
				q->que[++q->rear] = x;
				q->num++;
			}
		}
		return 1;
	}
}

int Deque(IntQueue* q, int* x)
{
	if (q->num== 0)
	{
		return -1;
	}
	else
	{
		*x = q->que[q->front];
		q->que[q->front] = 0;
		if (q->front != q->rear)
		{
			q->front++;
		}
		q->num--;
		if (q->front == q->max)
		{
			q->front = 0;
		}
		return 1;
	}
}

int Peek(const IntQueue* q, int* x)
{
	if (q->num == 0)
	{
		return -1;
	}
	else
	{
		*x = q->que[q->rear];
		return 1;
	}
}

void Clear(IntQueue* q)
{
	for (int i = 0; i < q->max; i++)
	{
		q->que[i] = 0;
	}
	q->num = 0;
	q->front = 0;
	q->rear = 0;
}

int Capacity(const IntQueue* q)
{
	return q->max;
}

int Size(const IntQueue* q)
{
	return q->num;
}

int IsEmpty(const IntQueue* q)
{
	if (q->num == 0)
	{
		return 1;
	}
	return 0;
}

int IsFull(const IntQueue* q)
{
	if (q->num==q->max)
	{
		return 1;
	}
	return 0;
}

int Search(const IntQueue* q, int x)
{
	if (q->front > q->rear)
	{
		for (int i = q->front; i < q->max; i++)
		{
			if (q->que[i] == x)
			{
				return 1;
			}
		}
		for (int i = q->rear; i < q->num-(q->max-q->front); i++)
		{
			if (q->que[i] == x)
			{
				return 1;
			}
		}
	}
	else
	{
		for (int i = q->front; i < q->rear; i++)
		{
			if (q->que[i] == x)
			{
				return 1;
			}
		}
	}
	return -1;
}

void Print(const IntQueue* q)
{
	if (!IsEmpty(q))
	{
		if (q->front > q->rear)
		{
			for (int i = q->front; i < q->max; i++)
			{
				printf("%d ", q->que[i]);
			}
			for (int i = q->rear; i < q->num - (q->max - q->front); i++)
			{
				printf("%d ", q->que[i]);
			}
		}
		else
		{
			for (int i = q->front; i < q->rear + 1; i++)
			{
				printf("%d ", q->que[i]);
			}
		}
	}
	printf("\n");
}

void Terminate(IntQueue* q)
{
	delete(q->que);
}

int main(void)
{
	IntQueue que;

	if (Initialize(&que, 5) == -1)
	{
		puts("ť�� ������ �����Ͽ����ϴ�.");
		return 1;
	}
	while(1)
	{
		int m, x;
		printf("���� ������ �� : %d /%d \n", Size(&que), Capacity(&que));
		printf("(1)��ť (2)��ť (3)��ũ (4)�˻� (5)��� (0)���� : ");
		scanf("%d", &m);

		if (m == 0)break;
		switch (m)
		{
		case 1:
			printf("������ : "); scanf("%d", &x);
			if (Enque(&que, x) == -1)
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			break;
		case 2:
			if (Deque(&que, &x) == -1)
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			else
				printf("��ť�� �����ʹ� %d�Դϴ�.\n",x);
			break;
		case 3:
			if (Peek(&que, &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			break;
		case 4:
			printf("������ : "); scanf("%d", &x);
			if (Search(&que, x) == -1)
				puts("\a���� : �˻��� �����Ͽ����ϴ�.");
			else
				printf("�˻��� �����ʹ� %d�Դϴ�.\n", x);
			break;
		case 5:
			Print(&que);
			break;
		}
	}
	Terminate(&que);
	return 0;
}