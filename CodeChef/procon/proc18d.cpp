#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long int

int main()
{
    ll t,n,v;
    scanf("%lld",&t);
    char s[20];
    while(t--)
    {   

        scanf("%lld",&n);
        char c = '+';
        scanf("%lld",&v);
        a.push_back(v);
        for(int i = 0; i < (n) - 1; i++)
        {
            scanf("%c", &c);
            scanf("%lld",&v);
            if(c == '-')
            {
                a.push_back(0 - v);
            }
            else
                a.push_back(v);
        }
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] > 0)
            {
                continue;
            }
            else
            {
                while(i < a.size() - 1 && a[i+1] < a[i])
                {
                    a[i] -= a[i+1];
                }

            }
        }
        printf("%lf\n",a[0]);
    }   


    return 0;
}

