#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
#define ll long long int

int main()
{
    ll n,t;
    ll a[10000];
    ll f,s;
    ll flag2,flag;
    scanf("%lld",&t);
    f = 1;
    while(t--)
    {
        ll count = 0;
        scanf("%lld",&n);
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(ll i =0 ; i < n; i ++)
        {
            for(ll j = i + 1; j < n; j++)
            {
                s  = a[i] * a[j];
                if(s == 0)
                {
                    for(ll k = 0; k < n;k++)
                    {
                        if(i == k || j == k)
                            continue;
                        else if(s == a[k])
                        {
                            count++;
                        }
                    }
                }
                else
                {
                    for(int k = j + 1; k < n; k++)
                    {
                        if(s == a[k])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        printf("Case #%lld: %lld\n",f,count);
        f++;
    }
    return 0;
}
