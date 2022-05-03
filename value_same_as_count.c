#include<stdio.h>
int main()
{
    int n,arr[100],i,j,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                x++;
            }
        }
        if(arr[i]==x)
        {
            y++;
            arr[i]=-1;
        }
    }
    printf("%d",y);
}