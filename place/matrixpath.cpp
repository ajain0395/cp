#include<bits/stdc++.h>
using namespace std;


long long int down(int i,int j,int matrix[100][100],int n)
{
    if(i ==n-1 && j == n-1)
    {
        return 0;
    }
    if(i >= n || j >= n ||(i == j))
    {
        return INT_MAX;
    }
    long long int r,d;
    r = down(i,j+1,matrix,n) + matrix[i][j];
    d = down(i+1,j,matrix,n) + matrix[i][j];
    return r<d?r:d;
}
long long int up(int i,int j,int matrix[100][100])
{
    if(i ==0 && j == 0)
    {
        return matrix[i][j];
    }
    if(i <0 || j <0 || (i == j))
    {
        return INT_MAX;
    }
    long long int r,d;
    r = up(i,j-1,matrix) + matrix[i][j];
    d = up(i-1,j,matrix) + matrix[i][j];
    return r<d?r:d;
}

int main()
{
    int t;
    int n;
    scanf("%d",&t);
        int matrix[100][100];
    while(t--)
    {
        scanf("%d",&n);
        for(int i = 0 ; i < n;i++)
        {
            for(int j = 0 ; j < n; j ++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
       long long int x = down(0,1,matrix,n) + matrix[0][0];
      long long  int y = up(n-1,n-2,matrix) + matrix[n-1][n-1];
        printf("%lld",x+y);
    }

}
