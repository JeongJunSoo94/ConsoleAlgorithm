#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
int int_cmp(const int* a, const int* b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

typedef struct
{
	char name[10];
	int height;
	int weight;
}Person;
int npcmp(const Person* x, const Person* y)
{
	return strcmp(x->name,y->name);
}

void* bsearchx(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	int index = 0, start = 0, end = nmemb - 1;
	while (start <= end)
	{
		index = (start + end) / 2;
		if (compar((char*)base + index*size, (char*)key) == 0)
		{
			while (compar((char*)base + index * size, (char*)key) == 0)
			{
				index -= 1;
			}
			return (char*)base + (index+1) * size;
		}
		else if (compar((char*)base + index * size, (char*)key) == -1)
		{
			start = index + 1;
		}
		else
		{
			end = index - 1;
		}
	}
}

int main()
{
	int i, nx1, ky;
	int* x1;
	int* p1;
	puts("bsearch �Լ��� ����Ͽ� �˻�");
	printf("��� ���� : ");
	scanf("%d", &nx1);
	x1 = (int*)calloc(nx1, sizeof(int));

	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : ");
	scanf("%d", &x1[0]);
	for (i = 1; i < nx1; i++)
	{
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x1[i]);
		} while (x1[i] < x1[i - 1]);
	}
	printf("�˻��� : ");
	scanf("%d", &ky);
	p1 = (int*)bsearchx(&ky, x1, nx1, sizeof(int), (int(*)(const void*, const void*))int_cmp);
	if (p1 == NULL)
	{
		puts("�˻��� �����߽��ϴ�.");
	}
	else
	{
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p1 - x1));
	}
	free(x1);

	Person x[] = 
	{
		{"�迵��",179,79},
		{"������",172,63},
		{"�̼���",176,52},
		{"�̼���",176,52},
		{"������",165,51},
		{"������",181,73},
		{"ȫ����",172,84}
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int retry;
	puts("�̸����� �˻��մϴ�.");
	do {
		Person temp, * p;
		printf("�̸� : ");
		scanf("%s", temp.name);
		p = (Person*)bsearchx(&temp, x, nx, sizeof(Person), (int(*)(const void*, const void*))int_cmp);
		if (p == NULL)
		{
			puts("�˻��� �����߽��ϴ�.");
		}
		else
		{
			puts("�˻� ���� !! �Ʒ� ��Ҹ� ã�ҽ��ϴ�.");
			printf("x[%d] : %s %d cm %d kg\n",
				(int)(p - x), p->name, p->height, p->weight);
		}
		printf("�ٽ� �˻��ұ�� (1) ��/(0) �ƴϿ� : ");
		scanf("%d",&retry);
	} while (retry ==1);
	return 0;
}

//int main(void)
//{
//	int i, nx, ky;
//	int *x;
//	int *p;
//	puts("bsearch �Լ��� ����Ͽ� �˻�");
//	printf("��� ���� : ");
//	scanf("%d", &nx);
//	x =(int*) calloc(nx, sizeof(int));
//
//	printf("������������ �Է��ϼ���.\n");
//	printf("x[0] : ");
//	scanf("%d", &x[0]);
//	for (i = 1; i < nx; i++)
//	{
//		do {
//			printf("x[%d] : ", i);
//			scanf("%d", &x[i]);
//		} while (x[i] < x[i - 1]);
//	}
//	printf("�˻��� : ");
//	scanf("%d", &ky);
//	p = (int*)bsearchx(&ky, x, nx, sizeof(int), (int(*)(const void*, const void*))int_cmp);
//	if (p == NULL)
//	{
//		puts("�˻��� �����߽��ϴ�.");
//	}
//	else
//	{
//		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
//	}
//	free(x);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <vector>
//
//int BinerySearch(std::vector<int>& data, int num)
//{
//	int index =0,start =0,end= data.size()-1;
//    printf(" | 0  1  2  3  4  5  6\n");
//    printf("-|---------------------\n");
//	while (start<= end)
//	{
//		index = (start + end) / 2;
//		printf(" |");
//		for (int j = 0; j < data.size(); j++)
//		{
//			if (j == start&& index!=start)
//			{
//				printf(" <-");
//			}
//			else if (j == index)
//			{
//				printf(" + ");
//			}
//			else if (j == end && index != end)
//			{
//				printf(" ->");
//				break;
//			}
//			else
//			{
//				printf("   ");
//			}
//		}
//		printf("\n");
//		printf("%d|", index);
//		for (int j = 0; j < data.size(); j++)
//		{
//			printf(" %d ", data[j]);
//		}
//		if (data[index] == num)
//		{
//			return index;
//		}
//		else if (data[index] < num)
//		{
//			start = index + 1;
//		}
//		else
//		{
//			end = index - 1;
//		}
//		printf("\n");
//		printf(" | ");
//		printf("\n");
//	}
//	return -1;
//}
//
//int main()
//{
//	using namespace std;
//	vector<int> data;
//	int a = 0;
//	int result;
//	printf("����Ÿ �Է� :");
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &a);
//		data.push_back(a);
//	} 
//	printf("�˻� ����Ÿ :");
//	scanf("%d", &a);
//	result = BinerySearch(data, a);
//	printf("\n%d�� x[%d]�� �ֽ��ϴ�.",a,result);
//	return 0;
//}
///*
//* ���� �˻��� �ϱ� ���� �⺻ �������� �̸� ��������
//* ���� �˻� ���α׷��� �ۼ��϶�.
//* ex>����Ÿ �Է� : 6 5 2 1 8 9 7 4
//*    �˻� ����Ÿ : 9
//*      �ڷ��� 9�� �ֽ��ϴ�.
//*    �˻� ����Ÿ : 3
//*      �ڷ��� 3�� �����ϴ�.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <vector>
//#include <time.h>
//
//int Find(std::vector<int>& data,int num)
//{
//    for (int i = 0; i < data.size(); i++)
//    {
//        if (data[i] == num)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//void scaning(std::vector<int>& data, int num)
//{
//    printf(" | 0  1  2  3  4  5  6  7\n");
//    printf("-|-------------------------------\n");
//    for (int i = 0; i < data.size(); i++)
//    {
//        printf(" | ");
//        for (int j = 0; j <= i; j++)
//        {
//            if (j == i)
//            {
//                printf("*");
//                printf("\n");
//                break;
//            }
//            printf("   ");
//        }
//        printf("%d|", i);
//        for (int j = 0; j < data.size(); j++)
//        {
//            printf(" %d ", data[j]);
//        }
//        printf("\n");
//        if (data[i] == num)
//        {
//            break;
//        }
//    }
//}
//int FindKey(std::vector<int>& data, int num)
//{
//    int i = 0;
//    while (1)
//    {
//        if (data[i] == num)
//        {
//            return i;
//        }
//        i++;
//    }
//    return -1;
//}
//void scaningKey(std::vector<int>& data, int num)
//{
//    int i = 0;
//    printf(" | 0  1  2  3  4  5  6  7\n");
//    printf("-|-------------------------------\n");
//    while (1)
//    {
//        printf(" | ");
//        for (int j = 0; j <= i; j++)
//        {
//            if (j == i)
//            {
//                printf("*");
//
//                printf("\n");
//                break;
//            }
//            printf("   ");
//        }
//        printf("%d|", i);
//        for (int j = 0; j < data.size(); j++)
//        {
//            printf(" %d ", data[j]);
//        }
//        printf("\n");
//        if (data[i] == num)
//        {
//            break;
//        }
//        i++;
//    }
//}
//void printresult(int num, int check)
//{
//    if (check==-1)
//    {
//        printf("�ڷ��� %d�� �����ϴ�.\n", num);
//    }
//    else
//    {
//        printf("�ڷ��� %d�� �ֽ��ϴ�.\n", num);
//    }
//}
//
//void printindex(int num, int check,int size)
//{
//    if (check == -1|| check== size)
//    {
//        printf("�ڷ��� %d�� �����ϴ�.\n", num);
//    }
//    else
//    {
//        printf("�ڷ��� %d�� �ֽ��ϴ�.\n", num);
//    }
//}
//
//int main()
//{
//    using namespace std;
//    vector<int> data;
//    int a=0,size=0;
//    clock_t start, end;
//    double result1, result2, result3, result4;
//    printf("����Ÿ �Է� :");
//    for (int i = 0; i < 8; i++)
//    {
//        scanf("%d",&a);
//        data.push_back(a);
//    }
//    printf("�˻� ����Ÿ :");
//    scanf("%d", &a);
//    start = clock();
//    for (int i = 0; i < 9999; i++)
//    {
//        printresult(a,Find(data, a));
//    }
//    end = clock();
//    result1 = (double)(end - start);
//    result1 /= CLOCKS_PER_SEC;
//    data.push_back(a);
//    size = data.size()-1;
//    start = clock();
//    for (int i = 0; i < 9999; i++)
//    {
//        printindex(a,FindKey(data, a),size);
//    }
//    end = clock();
//    result2 = (double)(end - start);
//    result2 /= CLOCKS_PER_SEC;
//    data.pop_back();
//    start = clock();
//    for (int i = 0; i < 1000; i++)
//    {
//        scaning(data, a);
//    }
//    end = clock();
//    result3 = (double)(end - start);
//    result3 /= CLOCKS_PER_SEC;
//    data.push_back(a);
//    start = clock();
//    for (int i = 0; i < 1000; i++)
//    {
//        scaningKey(data, a);
//    }
//    end = clock();
//    result4 = (double)(end - start);
//    result4 /= CLOCKS_PER_SEC;
//    system("cls");
//    printf("1 time : %lf\n", result1);
//    printf("2 time : %lf\n", result2);
//    printf("Q2: 1 time : %lf\n", result3);
//    printf("Q2: 2 time : %lf\n", result4);
//    return 0;
//}