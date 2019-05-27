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
    for(int i = low; i < (high - j);i++)
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
int solve(string A) {
    int n = A.length();
    vector <int> count(n,0);
    count[0] = n - 1;
    for(int i = n - 1; i >=1;i--)
    {
        if(checkpal(A,0,i) == true)
        {
            return (n -1) - i;
        }
    }
    return n - 1;
}
/////////////////////////

int main()
{
    string s;
//    printf("Enter String : ");
    cin>>s;
    cout<<solve(s);

return 0;
}
