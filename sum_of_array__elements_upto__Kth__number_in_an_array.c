#include<stdio.h>
int main()
{
    int n,arr[100],i,a,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}