#include<stdio.h>
int main()
{
    int n,k,arr[100],i,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}