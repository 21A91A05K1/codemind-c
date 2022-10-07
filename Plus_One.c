#include<stdio.h>
int main()
{
    int n,a[1000],i,d=0,b[100],j=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=d*10+a[i];
    }
    k=d+1;
    while(k)
    {
        b[j]=k%10;
        k=k/10;
        j++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}