#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long int

int main()
{
    ll t,n;
    scanf("%lld",&t);
    ll k;
    float v;
    while(t--)
    {   
        vector <float> a;
        scanf("%lld",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%f",&v);
            a.push_back(v);
        }
        double res = 0;
        sort(a.begin(),a.end());
         res = a.back()/2;
         a.pop_back();
         res += a.back()/2;
         a.pop_back();

     // make_heap(a.begin(),a.end());
        float x,y;
        while(a.size() > 0)
        {
            res = res/2;
         res += a.back()/2;
         a.pop_back();
    //        x = a.front()/2;
      //      pop_heap(a.begin(),a.end());
        //    a.pop_back();
          //  y = a.front()/2;
//            pop_heap(a.begin(),a.end());
  //          a.pop_back();
//
  //          a.push_back(x+y);
    //        push_heap(a.begin(),a.end());
        }

        printf("%.6lf\n",res);
    }   


    return 0;
}

