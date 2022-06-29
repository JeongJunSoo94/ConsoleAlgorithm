#include <iostream>
#include <string>

using namespace std;

int kmp(std::string str, std::string pat)
{
	int m = (int)pat.size();
	int j = 0;
	int* pi = new int[m] {0,};
	
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

	cout << pat << endl;
	for (int i = 0; i < m; i++)
	{
		cout << pi[i];
	}
	cout << endl;

	int ans=-1;
	int n = (int)str.size();
	j = 0;
	for (int i = 0; i < n; i++) {
		cout << str << endl;
		while (j > 0 && str[i] != pat[j])
		{
			j = pi[j - 1];
			
		}
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		if (str[i] == pat[j]) {
			cout << "+";
			cout << endl;
			for (int k = 0; k < i-j; k++)
			{
				cout << " ";
			}
			cout << pat << endl;
			if (j == m - 1) {
				ans=i - m + 1;
				j = pi[j];
			}
			else {
				j++;
			}
		}
		else
		{
			cout << "|";
			cout << endl;
			for (int k = 0; k < i-j; k++)
			{
				cout << " ";
			}
			cout << pat << endl;
		}
		
	}
	return ans;
}

//int bf(std::string str, std::string pat)
//{
//	int pt =0, pp = 0,count=0,cmpCount=0;
//	while (str[pt] != '\0' && pat[pp] != '\0')
//	{
//		if (cmpCount == pt)
//		{
//			std::cout << cmpCount;
//		}
//		else
//		{
//			std::cout << " ";
//		}
//		std::cout << str<<std::endl;
//		std::cout << " ";
//		for (int i = 0; i < pt; i++)
//		{
//			std::cout << " ";
//		}
//		
//		if (str[pt] == pat[pp])
//		{
//			std::cout << "+"<<std::endl;
//			for (int i = 0; i <= cmpCount; i++)
//			{
//				std::cout << " ";
//			}
//			pt++; pp++;
//		}
//		else
//		{
//			std::cout << "|" << std::endl;
//			for (int i = 0; i <= cmpCount; i++)
//			{
//				std::cout << " ";
//			}
//			pt = pt - pp + 1;
//			pp = 0;
//			cmpCount++;
//		}
//
//		
//		count++;
//		std::cout << pat << std::endl;
//		std::cout << std::endl;
//	}
//	if (pat[pp] == '\0')
//		return count;
//
//	return count;
//}
int main()
{
	using namespace std;
	string str = "ABCABAB ABABABAABAC";
	cout <<"인덱스 " << kmp(str, "ABABAABA")<<"번째 있습니다." << endl;
	return 0;
}