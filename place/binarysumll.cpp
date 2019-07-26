#include<bits/stdc++.h>
using namespace std;

 int maxdis; 
 int max(int a , int b)
{
    return a>b?a:b;
}
int depth(vector<int> &tree,int root)
{
    if(root >= tree.size())
    {
        return 0;
    }
int l = depth(tree,root*2 + 1);
 int r = depth(tree, root*2 + 2);
    maxdis = l + r + tree[root];
    return max(l,r) + tree[root];
}

//int compute

int solve(vector<int> A) {
    maxdis = INT_MIN;
//    map<int,vector<int>> adlist;
    int root = 0;
    int x = depth(A,root);
    return maxdis;
}
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int tmp;
    vector<int> a;
    maxdis = INT_MIN;
        for(int i = 0 ; i < n;i++)
        {
                scanf("%d",&tmp);
                a.push_back(tmp);
        }
       int ans = solve(a);
        int height = log2(n);
        height *=height;
        
        for(int i = 0 ; i < height;i++)
        {
            ans = max(ans,a[n - i - 1]);
        }
        printf("%d\n",ans);
    }
}
