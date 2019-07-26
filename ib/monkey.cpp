#include<bits/stdc++.h>
#include<vector>
using namespace std;

//int greatestSortedSubMatrix(int matrixSize, innt matrix[100][100])

int danceTime(int N, int P[100])
{
    vector<int> initi(N,0);
    vector<int> tmp(N,0);
    for(int i = 0;i<N;i++)
    {
        initi[i] = i;
        tmp[i] = i;
    }
    int t = 0;
    while(1)
    {
        t++;
        vector<int> newarr(N);
        int flag = 1;
        for(int i = 0;i<N;i++)
        {
            newarr[i] = tmp[P[i]-1];
            if(newarr[i] != initi[i])
            {
                flag = 0;
            }
        }
        if(flag== 1)
        {
            return t;
        }
        tmp = newarr;
    }
}
int main()

{
   // int P[100]={3,2,1};
    int P[100]={4 ,11, 9, 6, 7, 1, 2, 5 ,3, 8 ,10};
    int N;

    int x = danceTime(11,P);
    cout<<x;
}
