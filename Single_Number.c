#include<stdio.h>
int main()
{
    int a[1000],i,n,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d",a[i]);
        }
    }
}