#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float l,r,mr=0,ml=0;
    scanf("%d",&n);
    l=pow(2,floor(log2(n)));
    r=2*l;
    ml=n-l;
    mr=r-n;
    if(ml>mr)
    {
        printf("%.0f",mr);
    }
    else
    {
        printf("%.0f",ml);
    }
}