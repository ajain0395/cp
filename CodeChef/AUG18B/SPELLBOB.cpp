#include<iostream>
#include<stdio.h>

using namespace std;

#define ll long long int

int check(char a,char b, char c)
{
    int o = 0;
    int bc = 0;
    if(a == 'b')
    {
        bc++;
    }
    else if(a == 'o')
    {
        o++;
    }
    if(b == 'b')
    {
        bc++;
    }
    else if(b == 'o')
    {
        o++;
    }
    if(c == 'b')
    {
        bc++;
    }
    else if(c == 'o')
    {
        o++;
    }
    if(bc == 2 && o == 1)
        return 1;
    return 0;
}
int main()
{
    ll t,a,b,flag;
    char u[5], d[5];

    scanf("%lld",&t);
    while(t--)
    {
        cin>>u>>d;
    //    fgets(u,5,stdin);
     //   fgets(d,5,stdin);
        flag = 0;

        do
        {
            if(check(u[0],u[1],u[2]))
            {
                flag = 1;
                break;
            }
            else if(check(u[0],u[1],d[2]))
            {
                flag = 1;
                break;
            }
            else if(check(u[0],d[1],u[2]))
            {
                flag = 1;
                break;
            }
            else if(check(u[0],d[1],d[2]))
            {
                flag = 1;
                break;
            }
            else if(check(d[0],u[1],u[2]))
            {
                flag = 1;
                break;
            }
            else if(check(d[0],u[1],d[2]))
            {
                flag = 1;
                break;
            }
            else if(check(d[0],d[1],u[2]))
            {
                flag = 1;
                break;
            }
            else if(check(d[0],d[1],d[2]))
            {
                flag = 1;
                break;
            }
        }while(0);
        if(flag)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}

