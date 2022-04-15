#include<stdio.h>
int main()
{
    int n,rem,sum=0,sq,n1,rem1,sum1=0;
    scanf("%d",&n);
    sq=n*n;
    while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    n1=sum*sum;
    while(n1)
    {
        rem1=n1%10;
        sum1=sum1*10+rem1;
        n1=n1/10;
    }
    if(sum1==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}