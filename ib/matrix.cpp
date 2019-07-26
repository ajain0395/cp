#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int greatestSortedSubMatrix(int matrixSize, int matrix[100][100])
{
    int row[100][100] = {1};
    int col[100][100] = {1};
    int maxnum = 0;
   // memset(row,1,sizeof(row));
   // memset(col,1,sizeof(row));
    for(int i = 0 ; i < matrixSize;i++)
    {
        for(int j = 0 ; j < matrixSize;j++)
        {
            row[i][j] = 1;
            col[i][j] = 1;
       //     printf(" ( %d,%d ) ",row[i][j],col[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i < matrixSize;i++)
    {
        for(int j = 0 ; j < matrixSize;j++)
        {
            if(j > 0 && matrix[i][j] > matrix[i][j-1])
            {
                row[i][j] += row[i][j-1];            
            }
            if(i > 0 && matrix[i][j] > matrix[i-1][j])
            {
                col[i][j] += col[i-1][j];            
            }
            maxnum = maxnum>(row[i][j]*col[i][j])?maxnum:(row[i][j]*col[i][j]);
        }
    }
    for(int i = 0 ; i < matrixSize;i++)
    {
        for(int j = 0 ; j < matrixSize;j++)
        {
            printf(" ( %d,%d ) ",row[i][j],col[i][j]);
        }
        printf("\n");
    }
    return maxnum;
}
int main()
{
    int P[100][100];
    
    int N;
    scanf("%d",&N);
for(int i = 0 ; i < N; i ++)
{
    for(int j = 0 ; j < N; j++)
    {
        scanf("%d",&P[i][j]);
    }
}
    int x = greatestSortedSubMatrix(N,P);
    printf("%d",x);
}
