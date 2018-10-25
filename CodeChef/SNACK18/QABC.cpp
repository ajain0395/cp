#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long int
int main()
{
    ll a[100000],b[100000];
    ll n,t;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&b[i]);
        }
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
            a[i] -=b[i];
        }
        int flag = 1;
        for(int i = 0; i < n-2; i++)
        {
            if(a[i] >= 0)
            {
                a[i+1] -=(a[i]*2);  
                a[i+2] -=(a[i]*3);  
                a[i] -=a[i]; 
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            if(a[n-1] == 0 && a[n-2] == 0)
                printf("TAK\n");
            else
                printf("NIE\n");
        }
        else
        {
            printf("NIE\n");
        }
    }
    return 0;
}
