//Ashish Jain
//ashishjain030495@live.com
//
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define d int

int main()
{
	ll t,n,res,m,val,c;
	scanf("%lld",&t);
	while(t--)
	{
		res = 1;
		c = 0; 
		scanf("%lld%lld", &n, &m);
		for(int i = 0; i < n; i++)
		{
			scanf("%lld", &val);
			if(val % m  == 0)
			{
				c++;
			}
		}
		for(int i = 0; i < c; i++)
		{
			res*=2;
		}
		printf("%lld", res - 1);
		printf("\n");
	}
	return 0;
}
