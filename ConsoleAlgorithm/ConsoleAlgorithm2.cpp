//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <time.h>
//
//int main()
//{
//	using namespace std;
//	clock_t start, end;
//	double result;
//	int i, n;
//	int prime[500];
//	int ptr = 0;
//	unsigned long counter = 0;
//	start = clock();
//	prime[ptr++] = 2;
//	prime[ptr++] = 3;
//	for (n = 5; n <= 1000; n += 2)
//	{
//		int flag = 0;
//		for (i = 1,counter++; prime[i]* prime[i] <=n; i++)
//		{
//			counter++;
//			if (n % prime[i] == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag)
//			prime[ptr++] = n;
//	}
//	for (i = 0; i < ptr; i++)
//	{
//		printf("%d\n", prime[i]);
//	}
//
//	end = clock();
//	result = (double)(end - start);
//	printf("time : %lf\n", result / CLOCKS_PER_SEC);
//	printf("������ �������� ������ Ƚ�� : %lu\n", counter);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <time.h>
//
//int main()
//{
//	using namespace std;
//	clock_t start, end;
//	double result;
//	int i, n;
//	int prime[500];
//	int ptr = 0;
//	unsigned long counter = 0;
//	start = clock();
//	prime[ptr++] = 2;
//	for (n = 3; n <= 1000; n += 2)
//	{
//		for (i = 1; i < ptr; i++)
//		{
//			counter++;
//			if (n % prime[i] == 0)
//				break;
//		}
//		if (ptr == i)
//			prime[ptr++] = n;
//	}
//	for (i = 0; i < ptr; i++)
//	{
//		printf("%d\n", prime[i]);
//	}
//	
//	end = clock();
//	result = (double)(end - start);
//	printf("time : %lf\n", result / CLOCKS_PER_SEC);
//	printf("�������� ������ Ƚ�� : %lu\n", counter);
//	return 0;
//}
//

//4 2 1  9 3 1
// 
//101 012

// 7%2 3 1  3%2 1  1 % 2  1   1 2 4
//0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ
/*
* 10������ �Է¹޾� �ٸ� ������ ��ȯ�ϴ� ���α׷��� �ۼ��϶�.
* (2~36����)
*/

//#include <iostream>
//#include <string>
//
//std::string change(std::string str, int num)
//{
//	using namespace std;
//	string a;
//	int num1 = stoi(str);
//	int temp;
//	while (1)
//	{
//		if (num <= 10)
//		{
//			if (num1 < num)
//			{
//				a += to_string(num1);
//				break;
//			}
//			temp = num1 % num;
//			num1 /= num;
//			a += to_string(temp);
//		}
//		else
//		{
//			temp = num1 % num;
//			num1 /= num;
//
//			if (temp > 10)
//			{
//				temp = 'A' + (temp - 10);
//				a += temp;
//			}
//			else
//			{
//				a += to_string(temp);
//			}
//			if (num1 < num)
//			{
//				a += to_string(num1);
//				break;
//			}
//		}
//	}
//	return a;
//}
//
//int main()
//{
//	using namespace std;
//
//	string str;
//	int num = 0;
//	cout << "10���� ����Ÿ�� �Է��Ͻÿ� :";
//	cin >> str;
//	cout << "��ȯ�� ����Ÿ�� ������ :";
//	cin >> num;
//	str = change(str, num);
//	for (int i = strlen(str.c_str()) - 1; i >= 0; i--)
//	{
//		cout << str[i];
//	}
//
//	return 0;
//}

/*
* �� �������� ��ȯ�ϴ� ���α׷��� �ۼ��϶�.
* (2~36����)
* ��ȯ�� ����Ÿ�� ������ : 2
* ����Ÿ�� �Է��Ͻÿ� : 101
* ����� ����Ÿ�� ������ : 10
* ��ȯ�� ����Ÿ�� : 5
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <time.h>
///*
//* p.177 ������ �Է� �Լ��ο� ��� �Լ��η� ������ �ڵ带 �ۼ��϶�.
//*/
//void is_prime_number(int n);
//int main()
//{
//	printf("2 �̻��� ������ �Է��ϼ��� : ");
//	int n;
//	clock_t start, end;
//	double result;
//	scanf("%d", &n);
//	start = clock();
//	is_prime_number(n);
//	end = clock();
//	result = (double)(end - start);
//	printf("time : %lf" ,result/CLOCKS_PER_SEC);
//	return 0;
//}
//void is_prime_number(int n)
//{
//	int check = 1, count = 5;
//	for (int i = 2; i <= n; ++i)
//	{
//
//		for (int j = 2; j * j <= i; ++j)
//		{
//			if ((i % j) == 0)
//			{
//				check = 0;
//				break;
//			}
//		}
//		if (check == 1)
//		{
//			if (count == 0)
//			{
//				printf("\n");
//				count = 5;
//			}
//			printf("%3d", i);
//			count--;
//		}
//
//		check = 1;
//	}
//}

/*
* �Ҽ� �Ǻ� ���α׷� ����
* 1. Ȧ���θ� ����ϱ�
* 2. ���� ���� �Ҽ��� ������ ���� �ʴ� ��
* 3. ������ n ������ ��� �Ҽ��� �������� �� ������ �������� �ʴ¼��� �Ҽ�
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <time.h>
//
//int prime_number(int n)
//{
//
//	for (int i = 2; i < n; ++i)
//	{
//		if ((n % i) == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void prime_number1(int n)
//{
//	int prime[500];
//	int ptr = 0;
//	for (int i = 2; i <= n; ++i)
//	{
//		if (prime_number(i))
//		{
//			prime[ptr++] = i;
//		}
//	}
//}
//
//void is_prime_number1()
//{
//	int check = 1;
//	int i, n = 1000;
//	int prime[500];
//	int ptr = 0;
//	prime[ptr++] = 2;
//	for (i = 3; i <= n; i += 2)
//	{
//		for (int j = 3; j < i; j += 2)
//		{
//			if (i % j == 0)
//			{
//				check = 0;
//				break;
//			}
//		}
//		if (check == 1)
//		{
//			prime[ptr++] = i;
//		}
//		check = 1;
//	}
//}
//
//void is_prime_number2()
//{
//	int i, n;
//	int prime[500];
//	int ptr = 0;
//	prime[ptr++] = 2;
//	for (n = 3; n <= 1000; n += 2)
//	{
//		for (i = 1; i < ptr; i++)
//		{
//			if (n % prime[i] == 0)
//				break;
//		}
//		if (ptr == i)
//			prime[ptr++] = n;
//	}
//}
//
//void is_prime_number3()
//{
//	int i, n;
//	int prime[500];
//	int ptr = 0;
//	prime[ptr++] = 2;
//	prime[ptr++] = 3;
//	for (n = 5; n <= 1000; n += 2)
//	{
//		int flag = 0;
//		for (i = 1; prime[i] * prime[i] <= n; i++)
//		{
//			if (n % prime[i] == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag)
//			prime[ptr++] = n;
//	}
//
//}
//int main()
//{
//	clock_t start, end;
//	double result;
//	start = clock();
//	for (int i = 0; i < 1000; i++)
//	{
//		prime_number1(1000);
//	}
//	end = clock();
//	result = (double)(end - start);
//	printf("0 time : %lf\n", result / CLOCKS_PER_SEC);
//	start = clock();
//	for (int i = 0; i < 1000; i++)
//	{
//		is_prime_number1();
//	}
//	end = clock();
//	result = (double)(end - start);
//	printf("1 time : %lf\n", result / CLOCKS_PER_SEC);
//	start = clock();
//	for (int i = 0; i < 1000; i++)
//	{
//		is_prime_number2();
//	}
//	end = clock();
//	result = (double)(end - start);
//	printf("2 time : %lf\n", result / CLOCKS_PER_SEC);
//	start = clock();
//	for (int i = 0; i < 1000; i++)
//	{
//		is_prime_number3();
//	}
//	end = clock();
//	result = (double)(end - start);
//	printf("3 time : %lf\n", result / CLOCKS_PER_SEC);
//	return 0;
//}

/*
* ��(x,y)�� �Է¹޾� �� ���� (x0,y0)�� �߽����� �ϰ�
* ������ r�� ���� ���ο� �����ϴ��� �˻��ϴ� ���α׷���
* �ۼ��϶�
*  ex>
*     input => r=10, x0 =0 , y0 =0, x= 5, y=5
*     result => �� (5,5)�� ������ (0,0)�̰� ������ 10��
*               �� �ȿ� �ֽ��ϴ�.
* ���� ���ο� �����ϴ��� �˻��ϴ� �Լ��� �����,
* ��(x,y) , (x0,y0)�� ���ڷ� �Ѱ��� �� ������ ����ü��
* �̿��ؼ� ������ �Ѵ�.
*/
//#include<iostream>
//
//struct pos
//{
//	double x, y;
//};
//
//double m_pow(double num, double m)
//{
//    double result = num;
//    for (int i = 0; i < m - 1; i++)
//    {
//        result *= num;
//    }
//    return result;
//}
//
//double m_sqrt(double n)
//{
//    double result = 0;
//    double t = 0;
//    result = n / 2;
//    while (result != t)
//    {
//        t = result;
//        result = ((n / t) + t) / 2;
//    }
//    return result;
//}
//
//void check(int r,pos* dot,pos* centerdot)
//{
//    using namespace std;
//    if (r >= m_sqrt(m_pow((dot->x - centerdot->x), 2) + m_pow((dot->y - centerdot->y), 2)))
//    {
//        cout<<"�� ("<< dot->x<<","<< dot->y << ")�� ������("<< centerdot->x<<","<< centerdot->y << ")�̰� ������ "<< r<<"�� �� �ȿ� �ֽ��ϴ�.";
//    }
//}
//
//int main()
//{
//	using namespace std;
//	pos dot;
//	pos centerdot;
//	int r;
//	cout << "r x0 y0 x y ������� �Է��ϼ���\ninput =>";
//	cin >> r>> centerdot.x>> centerdot.y >> dot.x >> dot.y;
//    check(r, &dot, &centerdot);
//	return 0;
//}
/*
* 4�� ������ �������鼭
* 100���δ� ������ �������� �ʰų�
* 400���� ������ �������� �� => �����̴�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    using namespace std;
    int a;
    scanf("%d", &a);
    (a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0)) ? printf("1") : printf("0");
    return 0;
}