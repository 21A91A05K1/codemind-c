#include<stdio.h>
int main()
{
    int m,n,i,j,arr[100][100],max=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        max=0;
        for(i=0;i<m;i++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        printf("%d
",max);
    }
}