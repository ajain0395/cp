//Ashish Jain

//ashishjain030495@live.com

//

#include <bits/stdc++.h>



using namespace std;

#define ll long long int

#define d int



int main()

{

   ll tmp,t,n,A[100000],B[100000];

   scanf("%lld",&t);

   while(t--)

   {

       scanf("%lld",&n);

       scanf("%lld",&A[0]);

       for(ll i = 1; i < n; i++)

       {

           scanf("%lld",&tmp);

           A[i] = A[i-1] + tmp;

       }

       scanf("%lld",&B[0]);

       for(ll i = 1; i < n; i++)

       {

           scanf("%lld",&tmp);

           B[i] = B[i-1] + tmp;

       }

       ll maxa = A[n-1];

       ll maxb = B[n - 1];

       ll maxval = maxb;

       for(ll i = 0; i < n-1; i++)

       {

           if(maxval < A[i]  + (maxb - B[i]))

           {

                 maxval = A[i]  + (maxb - B[i]);

           }

       }

       if(maxval < maxa)

       {

           maxval = maxa;

       }

       printf("%lld\n",maxval);

   }

return 0;

}
