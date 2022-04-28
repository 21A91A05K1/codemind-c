#include<stdio.h>
int main()
{
    int n,arr[100],i,a,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}