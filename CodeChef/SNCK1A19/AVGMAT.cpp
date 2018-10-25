#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;
#define ll long long int
#define MAX 301
 
//vector <vector<ll>> points;
ll np;
ll points[MAX * MAX + 10][2];

//ll calculate(vector <ll> a,vector <ll> b)
ll calculate(ll i,ll j)
{
    ll res =  fabs(points[i][0] - points[j][0]);
    res += fabs(points[i][1] - points[j][1]);

    return res;

}
void appendpoints(char buffer[], ll r,ll c)
{

    for(ll i = 0; i < c; i++ )
    {
        if(buffer[i] == '1')
        {
           // vector <ll> tmp;
           // tmp.push_back(r);
         //   tmp.push_back(i);
            points[np][0] = r;
            points[np][1] = i;
            np++;
   //         printf("~~%lld %lld~~",r,i);
       //     points.push_back(tmp);
        }
    }
  //  cout<<buffer;
}
int main()
{
    ll r,c,t;
    char buffer[MAX];

    ll total,count,flag;
    total = 0;
    scanf("%lld",&t);
    while(t--)
    {
        ll a[600] = {0};

        scanf("%lld%lld ",&r,&c);
//        fflush(stdin);
        for(ll i = 0; i < r; i ++)
        {
            fgets(buffer,MAX,stdin);
            appendpoints(buffer,i,c);
        }
      //  ll pc = points.size();
 //       cout<< pc<<" points count";

        for(ll i = 0; i < np ; i++)
        {
            for(ll j = i + 1; j < np; j++)
            {
                a[calculate(i,j)]++;
            }
        }
        for(int i = 1; i <= (r + c) -2;i++)
        {
            printf("%lld ",a[i]);
        }
        printf("\n");
        np = 0;
//        points.clear();
    }
    return 0;
}
