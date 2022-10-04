#include<stdio.h>
int main()
{
    long long int t,a,b,i,n;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld %lld",&a,&b);
        n=-1;
        for(i=0;i<=b;i++)
        {
            if((i*i)%b==a)
            {
                n=i;
                break;
            }
        }
        printf("%lld
",n);
        t--;
    }
}