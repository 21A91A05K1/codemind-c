#include<stdio.h>
int main()
{
    int m,n,i,j,a[100][100],sum=0,max=0,sum1=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    for(j=0;j<n;j++)
    {
        sum1=0;
        for(i=0;i<m;i++)
        {
            sum1=sum1+a[i][j];
        }
        if(sum1>max)
        {
            max=sum1;
        }
    }
    printf("%d",max);
}