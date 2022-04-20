#include<stdio.h>
int main()
{
    int i,j,arr[100][100],sum=0,m,n;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}