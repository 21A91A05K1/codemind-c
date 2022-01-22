#include<stdio.h>
int main()
{
    int L,B,W,C,area;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    area=2*W*(L+B+2*W);
    C=area*C;
    printf("%d",C);
    return 0;
    
}