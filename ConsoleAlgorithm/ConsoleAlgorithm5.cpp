/*
* 다음의 함수를 사용하여 int 값을 역으로 화면에 출력하는 코드를
* 작성하라.
* void reverseDisplay(int value)
* ex> reverseDisplay(12345)
* 출력결과 > 54321
* void reverseDisplay(const string& s)
* ex> reverseDisplay("abcd")
* 출력결과 > dcba
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
* 다음과 같이 문자열의 모든 순열을 출력하는
* 재귀함수를 작성하라
* ex> abc
* 결과 
*     abc
*     acb
*     bac
*     bca
*     cab
*     cba
*/

#include<iostream>
#include<string>

using namespace std;
void Swap(string &str, int num1, int num2)
{
	char temp = str[num1];
	str[num1] = str[num2];
	str[num2] = temp;
}
void Permutation(string &str, int index, int str_size)
{
	if (str_size - 1 == index)
	{
		for (int i = 0; i < str_size; ++i)
		{
			cout<< str[i];
		}
		cout<<endl;
		return;
	}

	for (int i = index; i < str_size; ++i)
	{
		Swap(str, index, i);
		Permutation(str, index + 1, str_size);
		Swap(str, index, i);
	}
}
void Combination(string str, int n, int r, int index, int target, string comb_str)
{
	if (r == 0)
	{
		Permutation(comb_str, 0, str.size());
		cout<<endl;
	}
	else if (target == n)
	{
		return;
	}
	else
	{
		comb_str[index] = str[target];
		Combination(str, n, r - 1, index + 1, target + 1, comb_str);
		Combination(str, n, r, index, target + 1, comb_str);
	}
}

int main()
{
	string str="abc";

	//string comb_str(str.size(), ' ');

	//Combination(str, str.size(), str.size(), 0, 0, comb_str);

	Permutation(str, 0, str.size());
}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void permutations(string s)
//{
//    int n = s.length();
//
//    if (n == 0) {
//        return;
//    }
//
//    vector<int> index(n,0);
//    for (int i = 0; i < n; i++)
//    {
//        index[i] = 0;
//    }
//
//    int i = 1, j = 0;
//
//    cout << s;
//
//    while (i < n)
//    {
//        if (index[i] < i)
//        {
//            j = (i % 2) * index[i];
//
//            swap(s[j], s[i]);
//
//            cout << endl << s;
//
//            index[i]++;
//            i = 1;
//        }
//        else {
//            index[i] = 0;
//            i++;
//        }
//    }
//}
//
//int main()
//{
//    string str = "abc";
//    permutations(str);
//
//    return 0;
//}

//     a0        b1        c2
//    b1 c2    a0  c2    a0  b1
//   c2   b1  c2    a0  b1    a0