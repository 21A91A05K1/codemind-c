#include<stdio.h>
int main()
{
    int n,arr[100],i,max=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i]>max);
            {
                max=arr[i];
            }
        }
    }
    printf("%d",max);
}