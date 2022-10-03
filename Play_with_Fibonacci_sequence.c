#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}