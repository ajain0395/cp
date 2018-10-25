#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

#define ll long long int

bool cmp(ll a,ll b)
{
    return a>b;
}

int main() 
{
    ll t,n,k;
    ll count;
    ll a[200000];
    scanf("%lld",&t);
    while(t--)
    {
        count =0;
        scanf("%lld%lld",&n,&k);
        for(int i = 0; i < n;   i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n,cmp);
        ll pos = n-1;
        count = k;
        for(int i = k; i < n && a[i] >= a[k-1]; i++)
        {
            count++;
        }
        printf("%lld",count);        
        printf("\n");
    }
    return 0;
}

