#include<stdio.h>
int main()
{
    int a,b,c=0,i,j,s=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=i;j<=b;j++)
        {
            s=s+j;
            if(s%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}