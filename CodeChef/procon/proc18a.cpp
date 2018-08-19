#include<iostream>
#include<algorithm>

#define ll long long int

int main()
{
    ll t,n;
    scanf("%lld",&t);
    ll k;
    ll a[10000];
    while(t--)
    {
        ll max = 0;
        ll count = 0;
        scanf("%lld%lld",&n,&k);
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i = 0; i < k; i++)
        {
            max+=a[i];
        }
        count = max;
        for(int i = k; i < n ; i++)
        {
            count -= a[i - k];
            count += a[i];
            if(count > max)
            {
                max = count;
            }
        }
        printf("%lld\n",max);
    }


    return 0;
}
