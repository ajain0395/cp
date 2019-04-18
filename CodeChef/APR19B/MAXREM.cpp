#include<iostream>
#include<cstdio>
#include<algorithm>

#define ll long long int
using namespace std;
int main()
{
    ll a[1000000];
    ll t,i,j,res;
        scanf("%lld",&t);

    for (i = 0; i < t; i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+t);
    if(a[0] == a[t - 1])
        res = 0;
    else
    {
    i = t - 1;
    j = t - 2;
    while(a[i] == a[j])
        j--;
    res =a[j] % a[i];
    }

        printf("%lld\n",res);

    return 0;
}
