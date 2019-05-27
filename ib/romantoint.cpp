#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<unordered_map>
#include<set>
using namespace std;
#define ll long long int

int palindromiccount(string s)
{
    return 0;
}
int smaller(int a,int b)
{
    return a<b?-a:a;
}

int main()
{
    /*
       I	1
       V	5
       X	10
       L	50
       C	100
       D	500
       M	1000
     */
    unordered_map<char, int> umap;
    umap['I'] = 1; 
    umap['V'] = 5; 
    umap['X'] = 10;
    umap['L'] = 50;
    umap['C'] = 100;
    umap['D'] = 500;
    umap['M'] = 1000;
    string s;
//    printf("Enter String : ");
    cin>>s;

    int res = 0;
    int lastval = 0;
    int n = s.length();
    for(int i = n-1;i>=0;i--)
    {
        unordered_map<char, int>:: iterator p;
        p = umap.find(s[i]);
        res += smaller(p->second,lastval);
        lastval = p->second;
    }
    cout<<res;



return 0;
}
