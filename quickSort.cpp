#include <iostream>

using namespace std;

void sort(int a[],int left,int right)
{
	int tmp = a[left];
	int i = left,j= right;
	while (i < j)
	{
		//j->left
		while (i < j && tmp < a[j])
		{
			j--;
		}
		if (i < j)
		{
			a[i++] = a[j];
		}
		//left->j
		while (i < j && tmp > a[i])
		{
			i++;
		}
		if (i < j)
		{
			a[j--] = a[i];
		}
		a[i] = tmp;
		sort(a,left,i-1);
		sort(a,i+1, right);
	}
}


int main()
{
	int a[10] = {3,6,8,9,4,5,39,4,6,19};
	sort(a, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout<<a[i] << " ";
	}
	return 0;
}
