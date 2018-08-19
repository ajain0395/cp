#include <iostream>
using namespace std;

int find_max(int a[],int n)
{
	int ind = 0;
	for(int i = 1;i <= n;i++)
	{
		if(a[i] > a[ind])
		{
			ind = i;
		}
	}
	return ind;
}

void flip(int a[],int n)
{
	for(int i = 0; i < n - i; i++)
	{
		int tmp = a[i];
		a[i] = a[n - i]; 
		a[n - i] = tmp;
	}
	
}
void pancake(int a[],int n,int size)
{
	if(n == 0 )
	{
		return;
	}
	int index = find_max(a,n);
	flip(a,index);
	flip(a,n );
	pancake(a,n - 1, size);
}

int main() {
	
	int a[] = {6 ,4 ,3, 5, 1, 2};
	int size   = 6;
	pancake(a,size - 1,size);
	for(int i = 0; i < 6; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
