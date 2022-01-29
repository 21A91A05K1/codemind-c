#include<stdio.h>
int main()
{
    int n,diagonals;
    scanf("%d",&n);
    diagonals=n*(n-3)/2;
    printf("%d",diagonals);
    return 0;
}