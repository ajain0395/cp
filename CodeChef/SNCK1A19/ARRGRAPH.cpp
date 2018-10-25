#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define ll long long int

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
} 

int main()
{
    ll n,t;
    ll a[100];
    scanf("%lld",&t);
    ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    while(t--)
    {
        scanf("%lld",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        ll index = 0;
        ll max  = a[0];
       
        ll flag = 0;
            for(ll j = 1; j < n;j++)
            {
                if( gcd(max,a[j]) != 1 )
                {
                    index = j;
                    flag = 1;
                    break;
                }
            }
           
            if(flag)
            {
                printf("1\n");
                a[index] = 47;
            }
            else
            {
                printf("0\n");
            }
        for(int i = 0; i < n; i++)
            printf("%lld ",a[i]);
                  printf("\n");
    }
    return 0;
}
