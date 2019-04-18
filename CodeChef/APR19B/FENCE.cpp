#include<iostream>
#include <map>
#include<cstdio>

#define ll long long int
using namespace std;
int main()
{
    ll  c[1000000],r[1000000];
    ll t,i,j,res;
    scanf("%lld",&t);

    while(t--)
    {
    map<ll, map<ll,c>> matrix;
        scanf("%lld%lld%lld",&m,&n,&k)
        for(i = 0;i < k;i++)
        {
            scanf("%lld%lld",&r[i],&c[i]);
            map<ll,ll> tmp;
            tmp.emplace(c[i],4);
            matrix.emplace()

        }
        printf("%lld\n",res);

    }
    return 0;
}
