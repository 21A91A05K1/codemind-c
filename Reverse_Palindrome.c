#include<stdio.h>
int fun(int n)
{
    int d,rev=0;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        n=n+fun(n);
        if(n==fun(n))
        {
            printf("%d",n);
            break;
        }
    }
}