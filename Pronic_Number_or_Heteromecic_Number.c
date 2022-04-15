#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((i*(i+1))==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}