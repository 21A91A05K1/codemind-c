#include<stdio.h>
int main()
{
    int n,a[100],max=0,d,i,f=0;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=d)
        {
            max++;
        }
        else
        {
            if(f==0)
            {
                f=1;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d",max);
}