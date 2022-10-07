#include<stdio.h>
int main()
{
    int n,a[100],i,k,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
            printf("%d ",i);
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
            f=1;
            printf("%d",i);
            break;
        }
    }
    if(f==0)
    {
        printf("-1 -1");
    }
}