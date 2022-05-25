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
//	printf("곱셈과 나눗셈을 실행한 횟수 : %lu\n", counter);
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
//	printf("나눗셈을 실행한 횟수 : %lu\n", counter);
//	return 0;
//}
//

//4 2 1  9 3 1
// 
//101 012

// 7%2 3 1  3%2 1  1 % 2  1   1 2 4
//0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ
/*
* 10진수를 입력받아 다른 진수로 변환하는 프로그램을 작성하라.
* (2~36진수)
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
//	cout << "10진수 데이타를 입력하시오 :";
//	cin >> str;
//	cout << "변환할 데이타의 진수는 :";
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
* 각 진수끼리 변환하는 프로그램을 작성하라.
* (2~36진수)
* 변환할 데이타의 진수는 : 2
* 데이타를 입력하시오 : 101
* 출력할 데이타의 진수는 : 10
* 변환된 데이타는 : 5
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <time.h>
///*
//* p.177 문제를 입력 함수부와 출력 함수부로 나누어 코드를 작성하라.
//*/
//void is_prime_number(int n);
//int main()
//{
//	printf("2 이상의 정수를 입력하세요 : ");
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
* 소수 판별 프로그램 개선
* 1. 홀수로만 계산하기
* 2. 이전 계산된 소수로 나누어 지지 않는 수
* 3. 제곱근 n 이하의 모든 소수로 나누었을 때 나누어 떨어지지 않는수를 소수
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
* 점(x,y)를 입력받아 그 점이 (x0,y0)을 중심으로 하고
* 반지름 r인 원의 내부에 존재하는지 검사하는 프로그램을
* 작성하라
*  ex>
*     input => r=10, x0 =0 , y0 =0, x= 5, y=5
*     result => 점 (5,5)는 중점이 (0,0)이고 반지름 10인
*               원 안에 있습니다.
* 점이 내부에 존재하는지 검사하는 함수를 만들고,
* 점(x,y) , (x0,y0)를 인자로 넘겨줄 때 포인터 구조체를
* 이용해서 만들어야 한다.
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
//        cout<<"점 ("<< dot->x<<","<< dot->y << ")는 중점이("<< centerdot->x<<","<< centerdot->y << ")이고 반지름 "<< r<<"인 원 안에 있습니다.";
//    }
//}
//
//int main()
//{
//	using namespace std;
//	pos dot;
//	pos centerdot;
//	int r;
//	cout << "r x0 y0 x y 순서대로 입력하세요\ninput =>";
//	cin >> r>> centerdot.x>> centerdot.y >> dot.x >> dot.y;
//    check(r, &dot, &centerdot);
//	return 0;
//}
/*
* 4로 나누어 떨어지면서
* 100으로는 나누어 떨어지지 않거나
* 400으로 나누어 떨어지는 해 => 윤년이다.
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