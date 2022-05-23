#include<stdio.h>
int main()
{
    int n,d,i,sum=0,f=1,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        f=1;
        d=n%10;
        for(i=1;i<=d;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}