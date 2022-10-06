#include<stdio.h>
int main()
{
    int n,arr[100],i,t,tc,a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]>t)
        {
            a=a+2;
        }
        else
        {
            b=b+1;
        }
        tc=a+b;
    }
    printf("%d",tc);
}