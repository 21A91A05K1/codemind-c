#include<stdio.h>
int main()
{
    int n,a,c=0,arr[10000],i;
    scanf("%d",&n);
    while(n)
    {
        c=0;
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<a;i++)
        {
            if(arr[i]%2!=0)
            {
                c++;
            }
        }
        printf("%d
",(c/2));
        n--;
    }
}