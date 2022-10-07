#include<stdio.h>
int main()
{
    int n,a[100],i,t,c=0,min;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<=min)
            {
                c++;
                min=a[i];
            }
        }
        printf("%d
",c);
    }
}