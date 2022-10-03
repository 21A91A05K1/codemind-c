#include<stdio.h>
int sq(int a)
{
    int i,k;
    for(i=0;i<=a;i++)
    {
        if(i*i==a)
        {
            k=1;
            break;
        }
        k=0;
    }
    return k;
}
int main()
{
    int t,a,i,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        k=sq(a);
        if(k==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}