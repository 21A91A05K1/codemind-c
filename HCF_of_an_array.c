#include<stdio.h>
int main()
{
    int n,a[30],i,j,min,f=0,hcf=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(i=min;i>=1;i--)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]%i!=0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            hcf=i;
            break;
        }
    }
    printf("%d",hcf);
}