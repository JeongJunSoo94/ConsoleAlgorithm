//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void sort(vector<int>& v)
//{
//	int count=0,swap=0,check=-1;
//	for (int i =0; i <v.size(); i++)
//	{
//		cout << "ÆÐ½º" << i+1 << endl;
//		for (int j = v.size()-1; j >i; j--)
//		{
//			if (v[j - 1] > v[j])
//			{
//				check = j;
//				for (int k = 0; k < v.size(); k++)
//				{
//					if (check == k)
//					{
//						cout << "+";
//					}
//					else
//					{
//						cout << " ";
//					}
//					cout << v[k];
//				}
//			}
//			else
//			{
//				check = j;
//				for (int k = 0; k < v.size(); k++)
//				{
//					if (check == k)
//					{
//						cout << "-";
//					}
//					else
//					{
//						cout << " ";
//					}
//					cout << v[k];
//				}
//			}
//			
//			cout << endl;
//			if (v[j - 1] > v[j])
//			{
//				swap++;
//				int temp = v[j - 1];
//				v[j - 1] = v[j];
//				v[j] = temp;
//			}
//			count++;
//		}
//	}
//	cout << endl;
//	cout << count<<" " << swap;
//}
//
//int main()
//{
//	vector<int> list = { 6,4,3,7,1,9,8 };
//	sort(list);
//	return 0;
//}
// 
//#include <iostream>
//
//using namespace std;
//
//void sort(int* v,int size)
//{
//	int check=0;
//	for (int i =0; i < size; i++)
//	{
//		check = i;
//		for (int j = i+1; j < size; j++)
//		{
//			if (v[check] > v[j])
//			{
//				check = j;
//			}
//		}
//		for (int k = 0; k < size; k++)
//		{
//			if (i == k)
//			{
//				cout << " * ";
//			}
//			else if (check == k)
//			{
//				cout << " + ";
//			}
//			else
//			{
//				cout << "   ";
//			}
//		}
//		cout << endl;
//		for (int k = 0; k < size; k++)
//		{
//			cout << " "<< v[k]<< " ";
//		}
//		cout << endl;
//		int temp = v[i];
//		v[i] = v[check];
//		v[check] = temp;
//	}
//}
//
//int main()
//{
//	int list[7] = { 6,4,8,3,1,9,7 };
//	sort(list, 7);
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//void sort(int* v, int size)
//{
//	int check = -1;
//	for (int i = 0; i < size; i++)
//	{
//		check = i;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (v[check] > v[j])
//			{
//				check = j;
//			}
//		}
//		for (int k = 0; k < size; k++)
//		{
//			if (i == k)
//			{
//				cout << " * ";
//			}
//			else if (check == k)
//			{
//				cout << " + ";
//			}
//			else
//			{
//				cout << "   ";
//			}
//		}
//		cout << endl;
//		for (int k = 0; k < size; k++)
//		{
//			cout << " ";
//			cout << v[k];
//			cout << " ";
//		}
//		cout << endl;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (v[i] > v[j])
//			{
//				int temp = v[i];
//				v[i] = v[j];
//				v[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int list[10] = { 3,0,1,8,7,2,5,4,9,6 };
//	sort(list, 10);
//	return 0;
//}

//#include <iostream>
//#include "StopWatch.h"
//
//using namespace std;
//
//void sort1(int* v,int size)
//{
//	int check=0;
//	for (int i =0; i < size; i++)
//	{
//		check = i;
//		for (int j = i+1; j < size; j++)
//		{
//			if (v[check] > v[j])
//			{
//				check = j;
//			}
//		}
//		int temp = v[i];
//		v[i] = v[check];
//		v[check] = temp;
//	}
//}
//
//void sort2(int* v, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (v[i] > v[j])
//			{
//				int temp = v[i];
//				v[i] = v[j];
//				v[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	StopWatch stop;
//	int list[7] = { 6,4,8,3,1,9,7 };
//	stop.setStartTime();
//	for (int i = 0; i < 1000000; i++)
//	{
//		sort1(list, 7);
//	}
//	stop.stop();
//	cout<<stop.getElapsedTime()<<endl;
//	int list2[10] = { 3,0,1,8,7,2,5,4,9,6 };
//	stop.setStartTime();
//	for (int i = 0; i < 1000000; i++)
//	{
//		sort2(list2, 10);
//	}
//	stop.stop();
//	cout << stop.getElapsedTime();
//	return 0;
//}
//#include <iostream>
//#include "StopWatch.h"
//
//using namespace std;
//
//void sort(int* v, int size)
//{
//	for (int k = 0; k < size; k++)
//	{
//		cout << " ";
//		cout << v[k];
//		cout << " ";
//	}
//	for (int i =1; i <size; i++)
//	{
//		cout << endl;
//		for (int j = i; j >0; j--)
//		{
//			if (v[j - 1] > v[j])
//			{
//				int temp = v[j - 1];
//				v[j - 1] = v[j];
//				v[j] = temp;
//			}
//		}
//		for (int k = 0; k < size; k++)
//		{
//			cout << " ";
//			cout << v[k];
//			cout << " ";
//		}
//	}
//}
//
//int main()
//{
//	StopWatch stop;
//	int list[7] = { 6,4,1,7,3,9,8 };
//	stop.setStartTime();
//		sort(list, 7);
//	stop.stop();
//	cout << stop.getElapsedTime();
//	return 0;
//}
#include <iostream>

using namespace std;

void sort(int* v, int size)
{
	int num = 1;
	for (int i =size/2; i >0; i/=2)
	{
		num *= 2;
		cout << i << endl;
		for (int j = 0; size / num + j * i <size&&j<size; j-=num)
		{
			cout << "-------" << endl;
			for (int k = 0; k < size; k++)
			{
				cout << " ";
				cout << v[k];
				cout << " ";
			}
			cout << endl;
			if (v[size/ num+j*i] <v[j])
			{
				int temp = v[size / num + j * i];
				v[size / num + j * i] = v[j];
				v[j] = temp;
			}
			for (int k = 0; k < size; k++)
			{
				cout << " ";
				cout << v[k];
				cout << " ";
			}
			cout << endl;
			cout << "-------" << endl;
		}

		cout << "-------" << endl;
	}
	for (int k = 0; k < size; k++)
	{
		cout << " ";
		cout << v[k];
		cout << " ";
	}
}
int main()
{
	int list[8] = { 8,1,4,2,7,6,3,5 };
	sort(list, 8);
	return 0;
}