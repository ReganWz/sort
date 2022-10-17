#include <iostream>

using namespace std;

void bubble(int a[], int length)
{
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length - i-1; j++)
		{
			if (a[j+1] > a[j])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

void Print(int a[],int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[10] = {3,6,8,9,4,5,39,4,6,19};
	bubble(a,sizeof(a)/sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
	return 0;
}
