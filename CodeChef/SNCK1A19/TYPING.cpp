#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define ll long long int

ll calculate(char s[])
{
    ll count = 2;
    int n = strlen(s);
//    printf("%s len is %d\n",s,n);
    for(int i = 1; i < n; i++ )
    {
        if(  ((s[i] == 'j' || s[i] == 'k') && (s[i - 1] == 'k' || s[i - 1] == 'j'))
           ||((s[i] == 'f' || s[i] == 'd') && (s[i - 1] == 'd' || s[i - 1] == 'f')))
        {
            count += 4;
        }
        else
            count += 2;

    }
    return count;
}
int main()
{
    ll n,t;
    ll a[1001];
    char s[101][21];

    ll total,count,flag;
    total = 0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        total = 0;
        int i = 0;
        while(i < n)
        {
            count = 0;
            scanf("%s",s[i]);
            flag = 0;

            for(int j = 0; j < i; j++)
            {
                if(strcmp(s[i],s[j]) == 0)
                {
                    count = a[j] / 2;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                count = calculate(s[i]);
            }
            total += count;
  //          printf(" %lld \t",count);
            a[i] = count;
            i++;
        }
        printf("%lld\n",total);
    }
    return 0;
}
