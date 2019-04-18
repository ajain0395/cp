#include<iostream>
#include<cstdio>

#define ll long long int
using namespace std;
int main()
{
    char a[1000000],ch;
    ll t,i,j,res;
    scanf("%lld",&t);

    while(t--)
    {
        // scanf("%s",a);
        cin>>res;
        //res = atoi(a);
        //fgets(a,res,stdin);
        //scanf("%s",a);
        //scanf("%c",&ch);
        cin>>a;
        cin>>ch;
            ll len = res;
        res = (res * (res +1))/2;
        ll count = 0;
        for(i = 0;i < len;i++)
        {
            if(a[i] == ch)
            {
                res = res - ((count * (count+1))/2) ;
                count = 0;
            }
            else
            {
                count++;
            }

        }
        res = res - ((count * (count+1))/2) ;
        printf("%lld\n",res);

    }
    return 0;
}
