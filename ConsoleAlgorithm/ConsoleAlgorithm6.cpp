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
//#include <iostream>
//
//using namespace std;
//
//void OldInsertionSort(int* v, int left, int right)
//{
//	int i, j, temp;
//
//	for (i = left+1; i <= right; i ++)
//	{
//		temp = v[i];
//		for (j = i-1; j >= left && v[j] > temp; j --)
//		{
//			v[j+1] = v[j];
//		}
//		v[j+1] = temp;
//	}
//}
//
//void insertionSort(int* v, int left, int right, int gap)
//{
//	int i, j, temp;
//
//	for (i = left + gap; i <= right; i += gap)
//	{
//		temp = v[i];
//		for (j = i - gap; j >= left && v[j] > temp; j -= gap)
//		{
//			v[j + gap] = v[j];
//		}
//		v[j + gap] = temp;
//	}
//}
//
//void shellSort(int* v, int size)
//{
//	int gap;
//	for (gap = size / 2; gap > 0; gap /= 2)
//	{
//
//		for (int i = 0; i < gap; i++)
//		{
//			insertionSort(v, i, size - 1, gap);
//		}
//		if ((gap % 2) == 0)
//		{
//			gap++;
//		}
//	}
//}
//
//int main()
//{
//	int list[8] = { 8,1,4,2,7,6,3,5 };
//
//	OldInsertionSort(list,0, 7);
//
//
//	shellSort(list,7);
//	return 0;
//}
//#include <iostream>
//#include "StopWatch.h"
//void insertionSort(int v[], int left, int right, int gap)
//{
//	int i, j, temp;
//
//	for (i = left + gap; i <= right; i =i + gap)
//	{
//		temp = v[i];
//		for (j = i - gap; j >= left && v[j] > temp; j = j- gap)
//		{
//			v[j + gap] = v[j];
//		}
//		v[j + gap] = temp;
//	}
//}
//
//void shellSort(int v[], int size)
//{
//	int gap;
//	for (gap = size / 2; gap > 0; gap= gap / 2)
//	{
//		if ((gap % 2) == 0)
//		{
//			gap++;
//		}
//		for (int i = 0; i < gap; i++)
//		{
//			insertionSort(v, i, size - 1, gap);
//		}
//		
//	}
//}
//
//void quick(int a[],int left,int right)
//{
//	int pl = left;
//	int pr = right;
//	int x = a[(pl + pr) / 2];
//	do {
//		while (a[pl] < x) pl++;
//		while (a[pr] > x) pr--;
//		if (pl <= pr) {
//			int temp=a[pl];
//			a[pl] = a[pr];
//			a[pr] = temp;
//			pl++;
//			pr--;
//		}
//	} while (pl <= pr);
//	if (left < pr) quick(a,left,pr);
//	if (pl < right) quick(a, pl, right);
//}
//
//void QuickSort(int list[], int left,int right)
//{
//	if (left >= right)
//	{
//		return;
//	}
//	else
//	{
//		int pivotLeft = left+1;
//		int pivot = left;
//		int pivotRight = right;
//		int current = 1;
//		do
//		{
//			if (current)
//			{
//				if (list[pivot] >= list[pivotRight])
//				{
//					int temp = list[pivot];
//					list[pivot] = list[pivotRight];
//					list[pivotRight] = temp;
//					pivot = pivotRight;
//					current = 0;
//				}
//				--pivotRight;
//			}
//			else
//			{
//				if (list[pivot] <= list[pivotLeft])
//				{
//					int temp = list[pivot];
//					list[pivot] = list[pivotLeft];
//					list[pivotLeft] = temp;
//					pivot = pivotLeft;
//					current = 1;
//				}
//				++pivotLeft;
//			}
//		} while (pivotLeft <= pivotRight);
//		QuickSort(list, left, pivot - 1);
//		QuickSort(list, pivot + 1, right);
//	}
//	
//}
//
//int main()
//{
//	StopWatch Watch;
//	int list1[10] = { 0, };
//	for (int i = 10; i > 0; i--)
//	{
//		list1[10 - i] = i;
//	}
//	QuickSort(list1, 0, 9);
//	for (int k = 0; k < 10; k++)
//	{
//		std::cout << " ";
//		std::cout << list1[k];
//		std::cout << " ";
//	}
//	std::cout << std::endl;
//	int list2[10] = { 0, };
//	for (int i = 10; i > 0; i--)
//	{
//		list2[10 - i] = i;
//	}
//	shellSort(list2,10);
//	for (int k = 0; k < 10; k++)
//	{
//		std::cout << " ";
//		std::cout << list2[k];
//		std::cout << " ";
//	}
//	std::cout << std::endl;
//	int listA[1000] = { 0, };
//	for (int i = 1000; i > 0; i--)
//	{
//		listA[1000 - i] = rand();
//	}
//	int listB[1000] = { 0, };
//	for (int i = 1000; i > 0; i--)
//	{
//		listB[1000 - i] = listA[1000 - i];
//	}
//	Watch.setStartTime();
//	for (int i = 1000; i > 0; i--)
//	{
//		QuickSort(listB, 0, 999);
//	}
//	Watch.stop();
//	std::cout <<"QuickSort" << Watch.getElapsedTime()<<std::endl;
//	for (int i = 1000; i > 0; i--)
//	{
//		listB[1000 - i] = listA[1000 - i];
//	}
//	Watch.setStartTime();
//	for (int i = 1000; i > 0; i--)
//	{
//		quick(listB,0, 999);
//	}
//	Watch.stop();
//	std::cout << "quick" << Watch.getElapsedTime() << std::endl;
//	for (int i = 1000; i > 0; i--)
//	{
//		listB[1000 - i] = listA[1000 - i];
//	}
//	Watch.setStartTime();
//	for (int i = 1000; i > 0; i--)
//	{
//		shellSort(listB, 1000);
//	}
//	Watch.stop();
//	std::cout <<"ShellSort" << Watch.getElapsedTime() << std::endl;
//	return 0;
//}
#include <iostream>
using namespace std;

static int* buff;

void _mergeSort(int a[], int left,int right)
{
	if (left < right)
	{
		int center = (left + right) / 2;
		int p = 0;
		int i;
		int j=0;
		int k = left;
		_mergeSort(a, left, center);
		_mergeSort(a, center + 1, right);
		for (i = left; i <= center; i++)
			buff[p++] = a[i];
		while (i <= right && j < p)
			a[k++] = (buff[j] <= a[i]) ? buff[j++] : a[i++];
		while (j < p)
			a[k++] = buff[j++];
	}
}

int mergeSort(int a[], int n)
{
	if((buff = new int[n]) == NULL)
	{
		return -1;
	}
	_mergeSort(a, 0, n - 1);
	delete[](buff);
	return 0;
}

int main()
{
	using namespace std;

	int list1[10] = { 0, };
	for (int i = 10; i > 0; i--)
	{
		list1[10 - i] = i;
	}
	mergeSort(list1, 10);
	for (int k = 0; k < 10; k++)
	{
		std::cout << " ";
		std::cout << list1[k];
		std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}