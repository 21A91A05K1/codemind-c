#include<stdio.h>
int main()
{
    int n,arr[100],i,rem,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        while(arr[i])
        {
            rem=arr[i]%10;
            sum=sum*10+rem;
            arr[i]=arr[i]/10;
        }
        printf("%d ",sum);
    }
}