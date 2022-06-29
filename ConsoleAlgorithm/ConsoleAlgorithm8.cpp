#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> kmp(std::string str, std::string pat)
{
	//�񱳹��� pat�� �����߿� ó������ ���Ͽ� �ݺ��� ������ �ִ��� ���Ͽ� �װ��� �ε��� ���� ������ �ִ� ���̺��� �����.
	//���̺� �ε��� ���� 0 0 1 2 3 1 2 3 �� ���� ������ ó�� �ε��� ������ ���Ͽ� �ݺ��� ���ڿ��� �������̴�.
	//A B A B A A B A
	//1 2 3
	//    1 2 3
	//          1 2 3
	//0 1 2 3 4 5 6 7
	
	int m = (int)pat.size(), j = 0;
	vector<int> pi(m,0);
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
	//ó�� ���� ���Ͽ� 
	vector<int> ans;
	int n = (int)str.size();
	j = 0;
	for (int i = 0; i < n; i++) {
		while (j > 0 && str[i] != pat[j])
		{
			j = pi[j - 1];
		}
		if (str[i] == pat[j]) {
			if (j == m - 1) {
				ans.push_back(i - m + 1);

				j = pi[j];
			}
			else {
				j++;
			}
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
	cout <<"�񱳸� " << kmp(str, "ABABAABA").back()<<"ȸ �õ��մϴ�." << endl;
	return 0;
}