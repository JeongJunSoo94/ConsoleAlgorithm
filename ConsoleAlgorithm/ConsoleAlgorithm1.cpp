#include <iostream>

int main()
{
	using namespace std;

	int n;
	cin >> n;
	for (int i = 1; i <= n * 2 - 1; i++)
	{
		for (int j = 1; j <= n * 2 - 1; j++)
		{
			if (i > j && j < (n * 2) - i)
			{
				cout << " ";
			}
			else if (i < j && j >(n * 2) - i)
			{
				cout << " ";
			}
			else
			{
				if (i < n)
				{
					cout << i;
				}
				else
				{
					cout << n * 2 - i;
				}
			}

		}
		cout << "\n";
	}
	return 0;
}