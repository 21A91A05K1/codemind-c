#include<stdio.h>
int main()
{
    int n,d,sum=0,pro=1;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
        pro=pro*d;
    }
    if(pro==sum)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}