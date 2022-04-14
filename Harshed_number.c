#include<stdio.h>
int main()
{
    int n,d,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}