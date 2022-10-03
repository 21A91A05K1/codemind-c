#include<stdio.h>
int main()
{
    int n,d,r,sq=0,rev=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    while(rev>0)
    {
        r=rev%10;
        rev=rev/10;
        if(r%2!=0)
        {
            sq=r*r;
            printf("%d",sq);
        }
    }
}