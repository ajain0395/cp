//Ashish Jain
//ashishjain030495@live.com
//
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define d int
 
int main()
{
   ll t,n;
   scanf("%lld",&t);
   while(t--)
   {
       scanf("%lld",&n);
       if(n == 1)
       {
           printf("1 1");
       }
       else
       {
           printf("1 1");
         /*  if(n %2 != 0)
               n--;*/
           int z = n - (n - 2)/2;
           for(int i = 0; i < n/2; i++)
           {
               printf("0");
           }
       }
       printf("\n");
   }
return 0;
}
