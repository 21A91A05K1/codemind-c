#include<stdio.h>
int main()
{
    int n,a[100],i,b[100],p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=p*a[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=p/a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}