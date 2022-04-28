#include<stdio.h>
int main()
{
    int n,arr[100],i,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}