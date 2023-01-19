#include <iostream>
using namespace std;

int main()
{
	int a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
	}
	cout << endl;
	int sum = 0;
	double arif = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (!((i + j) % 2 == 0))
			{
				if (a[i][j] % 2 == 0)
				{
					 arif = arif + a[i][j];
					 sum = sum + 1;
				}
			}
		}
	}
	double arr = arif / sum;
	cout << arr << endl;
	return 0;
}
