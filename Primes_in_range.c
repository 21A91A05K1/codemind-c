#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,c=0,c1=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==1)
    {
        a=2;
    }
    for(j=a;j<=b;j++)
    {
        c=0;
        for(i=2;i<=sqrt(j);i++)
        {
            if(j%i==0)
            {
                 c++;
            }
        }
        if(c==0)
        {
            c1++;
        }
    }
    printf("%d",c1);
}