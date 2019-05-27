int part2(vector <int> A,int i,int left,int right)
{
    int res = INT_MAX;
    for(int j = i;j<A.size();j++)
    {
        int min ;
        int max;
        if(A[j] <= left && A[j] <= right)
        {
            min = A[j];
            if(left <=right)
            {
                max = right;
            }
            else
            {
                max = left;
            }
        }
        else if(left <= A[j] && left <= right)
        {
            min = left;
            if(right <=A[j])
            {
                max = A[j];
            }
            else
            {
                max = right;
            }
        }
        else
        {
            min = right;
            if(left <=A[j])
            {
                max = A[j];
            }
            else
            {
                max = left;
            }
        }
        if(abs(max - min) < res)
        {
            res = abs(max-min);
        }
        
    }
    return res;
}
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int a = A.size();
    int b = B.size();
    int c = C.size();
    int i = 0;
    int j = 0;
    int k = 0;
    int res  = INT_MAX;
    while( (i<a - 1 || j < b - 1) && (i<a - 1 || k < c - 1) && (j<b - 1 || k < c - 1))
    {
        int min;
        int max;
        
        if(A[i] <= B[j] && A[i] <= C[k])
        {
            min = A[i];
            if(B[j] <= C[k])
            {
                max = C[k];
                if(i == a - 1)
                {
                    if(k < c -1)
                        k++;
                }
            }
            else
            {
                if(i == a - 1)
                {
                    if(j < b -1)
                        j++;
                }
                max = B[j];
            }
            if(i < a -1)
                i++;
        }
        else if(B[j] <= A[i] && B[j] <= C[k])
        {
            min = B[j];
            if(A[i] <= C[k])
            {
                max = C[k];
                if(j == b - 1)
                {
                    if( k< c -1)
                        k++;
                }
            }
            else
            {
                max  = A[i];
                if(j == b - 1)
                {
                    if(i < a -1)
                    i++;
                }
            }
            if(j < b -1)
                j++;
        }
        else
        {
            min = C[k];
             if(A[i] <= B[j])
            {
                if(k == c - 1)
                {
                    if(i < a - 1)
                    i++;
                }
                max = B[j];
            }
            else
            {
                if(k == c - 1)
                {
                    if(j < b -1)
                    j++;
                }
                max  = A[i];
            }
            if(k < c - 1)
            {
                k++;
            }
        }
        if(abs(max - min) < res)
        {
            res = abs(max-min);
        }
  //      printf("i[%d] j[%d] k[%d]  ;",i,j,k);
    }
    int res2 = INT_MAX;
    if(!(i<a - 1 || j < b - 1) )
    {
        res2 = part2(C,k,A[i],B[j]);
    }
    else if(!(i<a - 1 || k < c - 1))
    {
        res2 = part2(B,j,A[i],C[k]);
    }
    else if (!(j<b - 1 || k < c - 1) )
    {
        res2 = part2(A,i,B[j],C[k]);
    }
    return res<res2?res:res2;
}
