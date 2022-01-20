#include<stdio.h>
int main()
{
    int a,b,sum;
    float average;
    scanf("%d%d",&a,&b);
    sum=a+b;
    average=(float)sum/2;
    printf("%.4f",average);
    return 0;
}