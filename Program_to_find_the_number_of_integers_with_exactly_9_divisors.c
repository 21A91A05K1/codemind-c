#include<stdio.h>
int div(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==9)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,c1=0;
    scanf("%d",&n);
    for(i=36;i<=n;i++)
    {
        if(div(i))
        {
            c1++;
            printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",c1);
}