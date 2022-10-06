#include<stdio.h>
void palindrome(int i)
{
    int temp,d,sum=0;
    temp=i;
    while(i!=0)
    {
        d=i%10;
        sum=sum*10+d;
        i=i/10;
    }
    if(sum==temp)
    {
        printf("%d ",sum);
    }
}
int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        palindrome(i);
    }
}