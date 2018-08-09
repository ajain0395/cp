#include<iostream>
#include<stdio.h>

using namespace std;
#define MOD 1000000007
#define ll long long int
ll gcd(ll a, ll b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b) % MOD;
        }
        else
        {
            return gcd(a, b - a) % MOD;
        }
    }
    return a % MOD;
}
int main()
{
    ll t,n,a,b,val,i,po,k;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a, &b, &n);
        val = gcd(a % MOD,b % MOD);
        po = val;
        if(val > 1)
        {
        for(i = 1; i < n; i++)
        {
            po = po*val % MOD;
        }
        }
        po = po * 2;
        printf("%lld\n",gcd(po % MOD,abs(a-b) % MOD));
    }

    return 0;
}
