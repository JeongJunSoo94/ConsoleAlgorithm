//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int kmp(std::string str, std::string pat)
//{
//	int m = (int)pat.size();
//	int j = 0;
//	int* pi = new int[m] {0,};
//	
//	for (int i = 1; i < m; i++) {
//
//		while (j > 0 && pat[i] != pat[j])
//		{
//			j = pi[j - 1];
//		}
//
//		if (pat[i] == pat[j])
//		{
//			pi[i] = ++j;
//		}
//	}
//
//	cout << pat << endl;
//	for (int i = 0; i < m; i++)
//	{
//		cout << pi[i];
//	}
//	cout << endl;
//
//	int ans=-1;
//	int n = (int)str.size();
//	j = 0;
//	for (int i = 0; i < n; i++) {
//		cout << str << endl;
//		while (j > 0 && str[i] != pat[j])
//		{
//			j = pi[j - 1];
//			
//		}
//		for (int k = 0; k < i; k++)
//		{
//			cout << " ";
//		}
//		if (str[i] == pat[j]) {
//			cout << "+";
//			cout << endl;
//			for (int k = 0; k < i-j; k++)
//			{
//				cout << " ";
//			}
//			cout << pat << endl;
//			if (j == m - 1) {
//				ans=i - m + 1;
//				j = pi[j];
//			}
//			else {
//				j++;
//			}
//		}
//		else
//		{
//			cout << "|";
//			cout << endl;
//			for (int k = 0; k < i-j; k++)
//			{
//				cout << " ";
//			}
//			cout << pat << endl;
//		}
//		
//	}
//	return ans;
//}
//
////int bf(std::string str, std::string pat)
////{
////	int pt =0, pp = 0,count=0,cmpCount=0;
////	while (str[pt] != '\0' && pat[pp] != '\0')
////	{
////		if (cmpCount == pt)
////		{
////			std::cout << cmpCount;
////		}
////		else
////		{
////			std::cout << " ";
////		}
////		std::cout << str<<std::endl;
////		std::cout << " ";
////		for (int i = 0; i < pt; i++)
////		{
////			std::cout << " ";
////		}
////		
////		if (str[pt] == pat[pp])
////		{
////			std::cout << "+"<<std::endl;
////			for (int i = 0; i <= cmpCount; i++)
////			{
////				std::cout << " ";
////			}
////			pt++; pp++;
////		}
////		else
////		{
////			std::cout << "|" << std::endl;
////			for (int i = 0; i <= cmpCount; i++)
////			{
////				std::cout << " ";
////			}
////			pt = pt - pp + 1;
////			pp = 0;
////			cmpCount++;
////		}
////
////		
////		count++;
////		std::cout << pat << std::endl;
////		std::cout << std::endl;
////	}
////	if (pat[pp] == '\0')
////		return count;
////
////	return count;
////}
//int main()
//{
//	using namespace std;
//	string str = "ABCABAB ABABABAABAC";
//	cout <<"�ε��� " << kmp(str, "ABABAABA")<<"��° �ֽ��ϴ�." << endl;
//	return 0;
//}

/*
*  A C B B B C A
*  B B B  L =  3 B = 3
*/

#include <iostream>
#include <string>
#include "StopWatch.h"

using namespace std;
//
//int Boyer_Moore(string str, string pat)
//{
//	int m = (int)pat.size();
//	int j = 0;
//	int pi[26] = {0,};
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		if (i == m - 1)
//		{
//			pi[pat[i] - 'A'] = m;
//		}
//		else
//		{
//			pi[pat[i] - 'A'] = m - i - 1;
//		}
//	}
//	
//	int n = (int)str.size();
//	int jumpIndex = 0;
//	int i = m-1;
//	while (i < n)
//	{
//		while (j<m&&str[(i -j)] == pat[m - 1 - j])
//		{
//			count++;
//			j++;
//		}
//		if (j == m)
//		{
//			return count;
//		}
//		count++;
//		if (pi[str[i] - 'A'] == 0 || pi[str[i] - 'A'] == m)
//		{
//			jumpIndex = m - j;
//		}
//		else
//		{
//			jumpIndex = pi[str[i] - 'A'];
//		}
//		i += jumpIndex;
//		j = 0;
//	}
//	return -1;
//}

int kmp(std::string str, std::string pat)
{
	int m = (int)pat.size();
	int j = 0;
	int* pi = new int[m] {0,};
	int count = 0;
	for (int i = 1; i < m; i++) {

		while (j > 0 && pat[i] != pat[j])
		{
			j = pi[j - 1];
		}

		if (pat[i] == pat[j])
		{
			pi[i] = ++j;
		}
	}
	int ans=-1;
	int n = (int)str.size();
	j = 0;
	for (int i = 0; i < n; i++) {
		while (j > 0 && str[i] != pat[j])
		{
			j = pi[j - 1];
			count++;
		}
		if (str[i] == pat[j]) {
			
			if (j == m - 1) {
				ans=i - m + 1;
				j = pi[j];
			}
			else {
				j++;
			}
		}
		count++;
	}
	return count;
}
int Boyer_Moore(string str, string pat)
{
	int m = (int)pat.size();
	int j = 0;
	int pi[26] = { 0, };
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		if (i == m - 1)
		{
			pi[pat[i] - 'A'] = m;
		}
		else
		{
			pi[pat[i] - 'A'] = m - i - 1;
		}
	}
	cout << pat << endl;
	for (int i = 0; i < 26; i++)
	{
		cout << (char)('A' + i);
	}
	cout << endl;
	for (int i = 0; i < 26; i++)
	{
		cout << pi[i];
	}
	cout << endl;

	int n = (int)str.size();
	int jumpIndex = 0;
	int i = m - 1;
	cout << str << endl;
	while (i < n)
	{
		//�ڿ��� ���� �񱳸� �Ѵ� i���� str�� �� �ε��� ��ġ�̴�.
		while (j < m && str[(i - j)] == pat[m - 1 - j])
		{
			count++;
			j++;
		}
		for (int k = 0; k < i - (m - 1); k++)
		{
			cout << " ";
		}
		cout << pat << endl;
		if (j == m)
		{
			return i - (m - 1);
		}
		count++;
		//���ڿ� �ε����� ���缭 ��ó�� Ű���� ���� �־���
		if (pi[str[i] - 'A'] == 0 || pi[str[i] - 'A'] == m)
		{
			jumpIndex = m - j;
		}
		else
		{
			jumpIndex = pi[str[i] - 'A'];
		}
		//���� �� �ε��� ���� �־���
		i += jumpIndex;
		j = 0;
	}
	return -1;
}


int main()
{
	/*StopWatch Watch;
	string str = "TRUSTHARDTOOTHBRUSHES";
	Watch.setStartTime();
	for (int i = 1000; i > 0; i--)
	{
		Boyer_Moore(str, "TOOTH");
	}
	Watch.stop();
	std::cout << "Boyer_Moore" << Watch.getElapsedTime() << std::endl;
	Watch.setStartTime();
	for (int i = 1000; i > 0; i--)
	{
		kmp(str, "TOOTH");
	}
	Watch.stop();
	std::cout << "kmp" << Watch.getElapsedTime() << std::endl;*/

	string str = "ACBBBBCA";
	cout<<Boyer_Moore(str, "BBBB");
	return 0;
}
//ABCABAB ABABABAABAC
//ABABAABA
//+pi[pat[m - 1]-'A']