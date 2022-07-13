#include<stdio.h>
int main()
{
    int i,n,m=0,a[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(m<a[i])
        {
            m=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if((a[i]+k)>=m)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}