#include<stdio.h>
#include<math.h>
int main()
{
    int arr[20],n,i,count=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        m=(int)log10(arr[i])+1;
        if(m%2==0)
        {
          count++;  
        }
    }
    printf("%d",count);
    return 0;
}