#include<stdio.h>
int main()
{
    int n,arr[100],i,ave,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=ave)
        {
            c++;
        }
    }
    printf("%d",c);
}