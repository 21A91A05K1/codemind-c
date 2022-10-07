#include<stdio.h>
int main()
{
    int n,d,a[100],i;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=d;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<d;i++)
    {
        printf("%d ",a[i]);
    }
}