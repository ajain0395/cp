#include<iostream>
#include<stdio.h>

using namespace std;

#define ll long long int

int main()
{
    ll t,n,d1,d2,diff;
            int l,r,i,v,j,ii;

    ll a[35] = {0};
    a[0] = 1;
    for( i = 1; a[i - 1] < 1000000000; i++)
    {
        a[i] = a[i - 1] * 2;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll x = 1;
        ll y = 1;
    r  = i - 1;
    l = 0;
        if((n & (n - 1)) == 0)
        {
            diff = 1;
            if(n < 2)
            {
                diff = 2;
            }
        }
        else
        {
            diff = a[r - 1];
            while(l < r)
            {
                v = a[l] + a[r];
                if(diff > abs(n-v))
                {
                    ii = l;
                    j = r;
                    diff = abs(n-v);
         //           printf("ashish_ [%lld] [%lld] -d [%lld]\n",a[l],a[r],diff);
                }
                if(v < n)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            if((diff > abs( n - (a[ii+1]+a[j - 1]) ) ))
            {
                diff = abs( n - (a[ii+1]+a[j - 1]));
          //          printf("ashish [%lld] [%lld] -d [%lld]\n",a[ii],a[j - 1],diff);
            }
        }
        printf("%lld\n",diff);
    }

    return 0;
}
