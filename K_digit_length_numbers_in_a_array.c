#include<stdio.h>
int main()
{
    int n,arr[100],i,d,k,c=0,tc=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
		if(c==0)
        {
        	c=c+1;
		}
        if(c==k)
        {
            tc++;
        }
    }
    printf("%d",tc);
}