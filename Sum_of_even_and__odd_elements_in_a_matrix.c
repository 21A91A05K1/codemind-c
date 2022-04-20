#include<stdio.h>
int main()
{
    int m,n,arr[100][100],es=0,os=0,i,j;
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
            if(arr[i][j]%2==0)
            {
                es=es+arr[i][j];
            }
            if(arr[i][j]%2!=0)
            {
                os=os+arr[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}