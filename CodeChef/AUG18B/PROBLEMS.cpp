#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
#define MOD 1000000007
#define ll long long int

typedef struct tr{
    ll s,n;
}struct_t;
bool scompare(struct_t lhs, struct_t rhs) 
{
    return lhs.s < rhs.s; 
}

int main()
{
    ll t,n,i;
    struct_t a[100000];
    struct_t b[100000];

    int count;
    scanf("%lld%lld",&t,&n);
    ll j = 0;
    for(j = 0; j < t; j++)
    {
        count = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%lld",&a[i].s);
        }
        for(i = 0; i < n; i++)
        {
            scanf("%lld",&a[i].n);
        }
        sort(a, a + n, scompare);
/*        for(i = 0; i < n; i++)
        {
            printf("%lld %lld\n",a[i].s,a[i].n);
        }
  */
        for(i = 0; i < n - 1; i++)
        {
            if( a[i].n >= a[i + 1].n)
            {
                count++;
            }
        }
        b[j].n = j + 1;
        b[j].s = count;

    }
        sort(b, b + t, scompare);
    for(i = 0; i < t; i++)
    {
        printf("%lld\n",b[i].n);
    }
    return 0;
}
