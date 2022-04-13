#include<stdio.h>
int main()
{
    int i,j,a[100][100],sum=0;
    scanf("%d %d",&i,&j);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}
