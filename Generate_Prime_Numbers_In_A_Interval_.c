#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d %d",&a,&b);
    while(a<b)
    {
        c=0;
        if(a<=1)
        {
            ++a;
            continue;
        }
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d
",a);
        }
        ++a;
    }
}