#include<stdio.h>
int main()
{
    int n,a[20],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j] && i!=j)
                {
                    c++;
                    a[j]=-1;
                }
            }
            if(c>n/2)
            {
                printf("%d",a[i]);
                return 0;
            }
        }
    }
    return 0;
}