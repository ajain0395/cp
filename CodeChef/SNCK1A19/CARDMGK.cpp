#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define ll long long int

int main()
{
    ll n,t;
    ll a[100001];
    ll f,s;
    ll flag2,flag;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld", &f);
        ll init = f;
        
        flag = 0;
        flag2 = 0;
        for(int i = 1; i < n; i++)
        {
            scanf("%lld",&s);
            if(flag2 == 0)
            {
            if(flag == 0 && s < f)
            {
                flag = 1;
            }
            else if(flag && s < f)
            {
                flag2 = 1;
          //      break;
            }
            }
            f = s;
        }
        if(flag == 1 && flag2 == 0)
        {
            if(init < s)
            {
                flag2 = 1;
            }
        }
        switch(flag2)
        {
            case 0:
                printf("YES\n");
                break;
            case 1:
                printf("NO\n");
                break;
        }

//        printf("%lld\n",);
    }
    return 0;
}
