#include<stdio.h>
#include<math.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    s=sqrt(n);
    if(n==s*s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}