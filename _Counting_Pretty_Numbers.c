#include<stdio.h>
int main()
{
    int a,b,i,t,r,c=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d",&a,&b);
        c=0;
        for(i=a;i<=b;i++)
        {
            r=i%10;
            if(r==2 || r==3 || r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        t--;
    }
}