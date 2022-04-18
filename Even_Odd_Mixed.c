#include<stdio.h>
int main()
{
    int n,d,c=0,ec=0,oc=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
        if(d%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    if(ec==c)
    {
        printf("Even");
    }
    else if(oc==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}