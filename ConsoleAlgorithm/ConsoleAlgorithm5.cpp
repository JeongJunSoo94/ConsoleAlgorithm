/*
* ������ �Լ��� ����Ͽ� int ���� ������ ȭ�鿡 ����ϴ� �ڵ带
* �ۼ��϶�.
* void reverseDisplay(int value)
* ex> reverseDisplay(12345)
* ��°�� > 54321
* void reverseDisplay(const string& s)
* ex> reverseDisplay("abcd")
* ��°�� > dcba
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string>
//
//void reverseDisplay(int value)
//{
//	
//	if (value != 0)
//	{
//		printf("%d", value % 10);
//		reverseDisplay(value / 10);
//	}
//}
//
//void reverseDisplay(const std::string& s)
//{
//	if (s.size() != 0)
//	{
//		printf("%c", s[s.size()-1]);
//		reverseDisplay(s.substr(0,s.size()-1));
//	}
//}
//
//int main()
//{
//	reverseDisplay(12345);
//	reverseDisplay("abcd");
//	return 0;
//}

/*
* ������ ���� ���ڿ��� ��� ������ ����ϴ�
* ����Լ��� �ۼ��϶�
* ex> abc
* ��� 
*     abc
*     acb
*     bac
*     bca
*     cab
*     cba
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>

void reverseDisplay(const std::string& s,int n)
{
	if (n != 0&&n!=s.size())
	{
		reverseDisplay(s, n - 1);
		printf("%c", s[n - 1]);
	}
}

int main()
{
	reverseDisplay("abc",3);

	return 0;
}

//     a0        b1        c2
//    b1 c2    a0  c2    a0  b1
//   c2   b1  c2    a0  b1    a0