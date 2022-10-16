 #include<stdio.h>
int main()
{
	int n,a[100],t,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=n/2;
	for(i=0;i<(n/2);i++)
	{
       printf("%d %d ",a[i],a[i+t]);
	} 
}