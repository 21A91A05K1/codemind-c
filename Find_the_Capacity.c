#include<stdio.h>
int main()
{
    int t,s,b,cap,cap_kb;
    scanf("%d %d %d",&t,&s,&b);
    cap=2*s*t*b*512;
    cap_kb=cap/1024;
    printf("%dKB",cap_kb);
}