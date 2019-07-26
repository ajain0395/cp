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
    vector <vector<int>> pal(n,vector<int>(n,0));

    for(int l = 0 ; l < n;l++)
    for(int i = 0; i < n-(l-1);i++)
    {
    int j = i + l - 1;
        for(int j = k;j<n;j++)
        {
            if(checkpal(s,i,j) == true)
          //  if(s[i] == s[j])
            {
                pal[i][j] = 0;
               // pal[i][j] = pal[i + 1][j - 1];
            }
            else
            {
                for(int k = i;k<j-1;k++)
                {
                     pal[i][j] = min();
                }
            }
            i++;
        }
    }
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
