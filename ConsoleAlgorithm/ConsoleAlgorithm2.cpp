#include <iostream>
#include <string>
/*
* �� �������� ��ȯ�ϴ� ���α׷��� �ۼ��϶�.
* (2~36����)
* ��ȯ�� ����Ÿ�� ������ : 2
* ����Ÿ�� �Է��Ͻÿ� : 101
* ����� ����Ÿ�� ������ : 10
* ��ȯ�� ����Ÿ�� : 5
*/
std::string change(std::string str, int num,int num1)
{
	using namespace std;
	string a;
	int temp= 0;
	if (str[0] >= 'A')
	{
		temp += (10 + (str[0] - 'A'));
	}
	else
	{
		temp += str[0]-'0';
	}
	for (int i = 1; i < strlen(str.c_str()); i++)
	{
		if (str[i] >= 'A')
		{
			temp += (10 + (str[i] - 'A')) * num * i;
		}
		else
		{
			temp += (str[i]-'0') * num * i;
		}
	}
	/*int temp1;
	while (1)
	{
		if (num1 <= 10)
		{
			if (temp < num1)
			{
				a += to_string(temp);
				break;
			}
			temp1 = temp % num1;
			temp /= num1;
			a += to_string(temp1);
		}
		else
		{
			temp1 = temp % num1;
			temp /= num1;

			if (temp1 > 10)
			{
				temp1 = 'A' + (temp1 - 10);
				a += temp1;
			}
			else
			{
				a += to_string(temp1);
			}
			if (temp < num1)
			{
				a += to_string(temp);
				break;
			}
		}
	}*/
	cout <<"temp :"<< temp;
	return a;
}

int main()
{
	using namespace std;

	string str;
	int num=0,num1=0;
	cout << "��ȯ�� ����Ÿ�� ������ :";
	cin >> num;
	cout << "����Ÿ�� �Է��Ͻÿ� :";
	cin >> str;
	cout << "��ȯ�� ����Ÿ�� ������ :";
	cin >> num1;
	str =change(str, num,num1);
	for (int i = strlen(str.c_str())-1; i >=0; i--)
	{
		cout << str[i];
	}

	return 0;
}
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