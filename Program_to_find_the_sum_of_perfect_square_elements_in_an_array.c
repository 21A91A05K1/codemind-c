#include<stdio.h>
int main()
{
    int n,a[100],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==(j*j))
            {
                s=s+a[i];
            }
        }
    }
    printf("%d",s);
}