#include<stdio.h>
#include<stdlib.h>
void fibo(int n)
{
    int a,b,c;
    if(n==0)
    {
        printf("0");
        return;
    }
    a=0;
    b=1;
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(abs(c-n)>abs(b-n))
    {
        printf("%d",b);
    }
    else if(abs(c-n)==abs(b-n))
    {
        printf("%d %d",b,c);
    }
    else
    {
        printf("%d",c);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fibo(n);
}