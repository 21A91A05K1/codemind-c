#include<stdio.h>
int main()
{
    int n,i,arr[100],so=0,se=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            se=se+arr[i];
        }
        else
        {
            so=so+arr[i];
        }
    }
    diff=se-so;
    printf("%d",diff);
}