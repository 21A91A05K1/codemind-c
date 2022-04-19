#include<stdio.h>
int main()
{
    int i,j,arr[100][100],sump=0,sumd=0,n,r,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sump=sump+arr[i][j];
            }
            if(i==n-j-1)
            {
                sumd=sumd+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",sump);
    printf("Secondary Diagonal:%d
",sumd);
}