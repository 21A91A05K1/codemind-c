#include<stdio.h>
#include<math.h>
int main()
{
    int i,arr[100],n,es=0,os=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es=es+arr[i];
        }
        else
        {
            os=os+arr[i];
        }
    }
    diff=abs(os-es);
    printf("%d",diff);
    
}