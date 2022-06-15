#include <iostream>
#include <vector>

using namespace std;

int compare(int a, int b)
{
	return a > b ? 1 : 0;
}

void sort(vector<int>& v)
{
	int count=0,swap=0,check=-1;
	for (int i =0; i <v.size(); i++)
	{
		for (int j = v.size()-1; j >i; j--)
		{
			if (v[j - 1] > v[j])
			{
				check = j;
			}
			else
			{
				check = -1;
			}
			for (int k = 0; k < v.size(); k++)
			{
				if (check == k)
				{
					cout << "+";
				}
				else
				{
					cout << " ";
				}
				cout << v[k];
			}
			cout << endl;
			if (v[j - 1] > v[j])
			{
				swap++;
				int temp = v[j - 1];
				v[j - 1] = v[j];
				v[j] = temp;
			}
			count++;
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	cout << endl;
	cout << count<<" " << swap;
}

int main()
{
	vector<int> list = { 6,4,3,7,1,9,8 };
	sort(list);
	return 0;
}