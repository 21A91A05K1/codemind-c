#include<stdio.h>
int main()
{
    int L,B,W,C,area;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    if(L<=W+W || B<=W+W)
    {
        printf("Impossible");
    }
    else
    {
        area=2*W*(L+B-2*W);
        C=area*C;
        printf("%d",C);
    }
    return 0;
}