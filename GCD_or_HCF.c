#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(b)
    {
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        b=b%a;
    }
    printf("%d",a);
}