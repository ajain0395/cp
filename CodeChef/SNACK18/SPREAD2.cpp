#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

#define ll long long int

ll cmp(ll a,ll b)
{
    if(a < b)
    {
        return a;
    }
    return b;
}

int main() 
{
    ll t,n,val;
    ll count;
    ll a[200000];
    scanf("%lld",&t);
    while(t--)
    {
        count =0;
        scanf("%lld%lld",&n);
        scanf("%lld",&a[0]);
        a[0]+=1;
        for(int i = 1; i < n;  i++)
        {
            scanf("%lld",&val);
            a[i] = val+ a[i - 1]; 
        }
        count = 0;
        ll day  = 0;
        while(1)
        {
            
            day++;
            if(count >=n-1)
            {
                break;
            }
            else
            {
            count += a[cmp(count,n-1)];    
            }
            
            
        }
        printf("%lld",day);        
        printf("\n");
    }
    return 0;
}
