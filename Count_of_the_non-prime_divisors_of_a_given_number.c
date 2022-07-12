#include<stdio.h>
int main()
{
    int i,j,n,prime,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            prime=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==0)
            {
                c++;
            }
        }
    }
    printf("%d",c+1);
}