//Ashish Jain

//ashishjain030495@live.com

//

#include <bits/stdc++.h>



using namespace std;

#define ll unsigned long long int

#define d int



int main()

{

   ll tmp,t,n,A[100000],B[100000];

   scanf("%llu",&t);
   ll powertwo[30];
   powertwo[0] = 1;
   for (int i = 1; i < 30;i++)
   {
       powertwo[i] = powertwo[i-1] *2;
//       cout<<powertwo[i]<<" ";
   }
 //  cout<<endl;
   while(t--)
   {
       ll valuearr[30] = {0};
   /*    for(int i = 0; i < 30;i++)
       {
           valuearr[i] = 0;
       }*/
       ll resval = 0;
       ll sum = 0;
       scanf("%llu",&n);
       for(ll i = 0; i < n; i++)
       {
           scanf("%llu",&A[i]);
       }
       for(ll i = 0; i < n; i++)
       {
           for(int j = 0;j<30;j++)
           {
               if((A[i] & powertwo[j]) == powertwo[j])
               {
                  // printf("%llu & %llu : %llu\n",A[i],powertwo[j],(A[i]&powertwo[j]));
                   valuearr[j]++;
               }
           }
       }
           for(int j = 0;j<30;j++)
           {
               if(valuearr[j] > n/2)
               {
       // cout<<" "<<j<<" : ";
                   resval = resval | powertwo[j];
               }
          //     printf("res: [%llu]: %llu  \n",j,valuearr[j]);
           }
       for(ll i = 0; i < n; i++)
       {
           sum += (resval ^ A[i]);
       }

       printf("%llu\n",sum);
   }

return 0;

}
