#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 

    // base case 
    if (a == b) 
        return a; 

    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

int main()
{
    for(int i = 0; i < 51; i++)
    {
        printf("{");
        for(int j = 0; j < 51; j++ )
        {

            if(gcd(i,j) == 1)
                printf("1");
            else
                printf("0");

            if(j < 50)
                printf(" ,");

        }
        printf("},\n");
    }


    return 0;
}
