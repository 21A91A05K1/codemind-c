#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,power,mod;
    scanf("%d %d %d",&x,&y,&m);
    power=pow(x,y);
    mod=power%m;
    printf("%d",mod);
}