#include<stdio.h>
int prime(int sum)
{
    int c1=0,i,j,k,s1;
    for(i=1;i<10;i++)
    {
        c1=0;
        s1=sum+i;
        for(j=2;j<s1/2;j++)
        {
            if(s1%j==0)
            {
                c1++;
            }
        }
        if(c1==0)
        {
            k=i;
            break;
        }
    }
    return k;
}
int main()
{
   int a,b,sum,c;
   scanf("%d %d",&a,&b);
   sum=a+b;
   c=prime(sum);
   printf("%d",c);
}