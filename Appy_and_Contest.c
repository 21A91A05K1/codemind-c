#include<stdio.h>
int main()
{
    int t;
    long long int k,a,b,c,n;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
        if(a%b==0)
        {
            c=n/b-n/a;
        }
        else if(b%a==0)
        {
            c=n/a-n/b;
        }
        else
        {
            c=n/a+n/b-2*(n/(a*b));
        }
        if(c>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
        t--;
    }
}