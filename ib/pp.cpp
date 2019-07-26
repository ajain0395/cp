#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
using namespace std;
#define ll long long int

bool checkpal(string s,int low,int high)
{
    int j = 0;
    for(int i = low; i <= (low+high)/2;i++)
    {
        if(s[i] != s[high-j])
        {
            return false;
        }

            j++;
    }
    for(int k = low;k<=high;k++)
    {
        cout<<s[k];
    }
    cout<<endl;
    return true;
}
int min2(int a,int b)
{
    return a<b?a:b;
}
int palindromiccount(string s)
{
    int n = s.length();
//    vector<vector<string>> res;
    vector <vector<int>> pal(n,vector<int>(n,0));

    for(int k = 1; k < n;k++)
    {
    int i = 0;
 //   vector<string>
        for(int j = k;j<n;j++)
        {
        //  if(checkpal(s,i,j) == true)
           if(s[i] == s[j] && checkpal(s,i,j))
            {
                pal[i][j] = 0;
               // pal[i][j] = (pal[i][j-1]<=pal[i+1][j]?pal[i][j-1]:pal[i+1][j]) ;
               // pal[i][j] = 0;
            }
            else
            {
                pal[i][j] = (pal[i][j-1]<pal[i+1][j]?pal[i][j-1]:pal[i+1][j]) + 1;
             //   pal[i][j] = min2(min2(pal[i][j-1],pal[i+1][j]),pal[i+1][j-1])  + 1;
            }
            i++;
        }
    }
/*    for(int i = 0; i < n; i ++)
    {
        for(int j = 0 ; j < n; j++)
        {
            cout<<pal[i][j] <<" ";
        }
        cout<<endl;
    }
    */
    return pal[0][n -1];
}

int main()
{
    string s;
//    printf("Enter String : ");
    cin>>s;
    cout<<palindromiccount(s);

return 0;
}
