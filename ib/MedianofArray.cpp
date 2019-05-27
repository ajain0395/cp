int min(int a,int b)
{
    return a>b?a:b;
}
double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    
    int low1, low2,mid1,mid2,high2,high1;
    high1 = A.size();
    high2 = B.size();
    int as = high1;
    int bs = high2;
    int n = as+bs;
    low1 = 0;
    low2 = 0;
    mid1 = 0;
    mid2 = 0;
    double a,b;
    // int flagfind = 0; 
    // if( (as + bs ) % 2 !=0)
    // {
    //     flagfind = 1;
    // }
    if(as ==0 && bs !=0 )
    {
        if(bs%2 !=0)
        {
            return B[bs/2];
        }
        else
        {
            return (double)(B[bs/2] + B[(bs/2) +1])/2.0;   
        }
    }
    else if(bs ==0 && as != 0)
    {
         if(as%2 !=0)
        {
            return B[as/2];
        }
        else
        {
            return (double)(A[as/2] + A[(as/2) +1])/2.0;   
        }
    }
    while(1)
    {
        mid1 = (low1+high1)/2;
        mid2 = (low2+high2)/2;
        if(mid1 + mid2 == (n/2) - 1)
        {
         //   printf("mid1: %d, mid2: %d ~~",mid1,mid2);
            if((as + bs ) % 2 ==0)
            {
                if(A[mid1] > B[mid2])
                {
                    a = A[mid1];
                    b = B[mid2];
                    // if(A[mid1+1] <= B[mid2+1]  && A[mid1+1] <=a)
                    // {
                    //     b = A[mid1+1];
                    // }
                    // else
                    // {
                    //     b = B[mid2 + 1];
                    // }
                    // cout<<" % "<<a<<" "<<b<<" % ";
                    return (double)(a+b)/(double)(2.0);
                }
                else
                {
                    a = B[mid2];
                    b = A[mid1];
                    // if(A[mid1+1] <= B[mid2+1] && A[mid1+1] <=a)
                    // {
                    //     b = A[mid1+1];
                    // }
                    // else
                    // {
                    //     b = B[mid2 + 1];
                    // }
                    return (double)(a+b)/(double)(2.0);
                }
            }
            else{
             //   cout<<"!!out";
                return A[mid1]>B[mid2]?A[mid1]:B[mid2];
            }
        }
        else if(mid1 + mid2 < n/2 )
        {
            if(A[mid1] <= B[mid2])
            {
                low1 = mid1+1;
            }
            else
            {
                low2 = mid2+1;   
            }
        }
        else
        {
            if(A[mid1] >=B[mid2])
            {
                high1 = mid1-1;
            }
            else
            {
                high2 = mid2-1;
            }
        }
        
    }
    
}

