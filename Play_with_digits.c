#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
            d=arr[i]%10;
            sum=sum+d;
            arr[i]=arr[i]/10;
        }
    }
    printf("%d",sum);
}