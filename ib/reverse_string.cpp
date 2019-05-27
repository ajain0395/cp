void reverse(string A,int low,int high)
{
    int c = 0;
    for(int i = 0;i<(low+high)/2;i++)
    {
        char tmp = A[i];
        A[i] = A[high - c - 1];
        A[A.length() - c - 1] = tmp;
        c++;
    }
}
void Solution::reverseWords(string &A) {
    int start,end;
    start = 0;
    end = 0;
       for(int i = 0; i <A.length()/2;i++)
    {
        if(i > 0 && A[i] !=' ' && A[i-1] == ' ')
        {
            if(i != A.length() - 1 && A[i+1] ==' ')
            {
                continue;
            }
            start = i;
        }
        if(i > 0 && A[i] ==' ' && A[i-1] != ' ')
        {
            end = i - 1;
            reverse(A,start,end);
        }
    }
    if(A[A.length() - 1] != ' ')
    {
        reverse(A,start,end);
    }
    // n = A.length();
    // for(int i = 0;i<n;i++)
    // {
    //     if(A[i] == ' ' && A[i+1] ==' ')
    //     {
            
    //     }
    // }
}
