#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    ll a[100000];
    ll n,t;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        ll count = 1;
        ll pos = 1;
        for(int i = 1; i < n; i++)
        {
           if(a[i] == a[i-1])
           {
               count +=1;
           }
           else
           {
               if(count % 2 == 0)
              {
                  if(i %2 != 0)
                  pos = (pos * count) % MOD;
                  if(count  > 2)
                  pos = (pos * count) % MOD;
               }
               else if(count % 2 != 0)
               {
                  pos = (pos * count) % MOD; 
               }
               count = 1;
           }
        }
              pos = (pos * count) % MOD;
        printf("%lld\n",pos);
    }
    return 0;
}
