#include<stdio.h>
int main()
{
    int n,arr[10000],i,j,d=0,c=0,f=0,s=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            
            if(arr[i]==arr[j] && i!=j && arr[i]>0)
            {
                c++;
                arr[j]=-1;
                
            }
        }
        if(c==arr[i])
        {
            f=1;
            d++;
            s=s+arr[i];
            avg=(float)s/c;
        }
    }
    if(f==1)
    {
        printf("%.2f",avg);
    }
    else
    printf("-1");
}