#include<stdio.h>
int win(int *a,int n)
{
    int c1=0,c2=0,c3=0,c4=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]%4==0)
        {
            c1++;
        }
        else if(a[i]%4==1)
        {
            c2++;
        }
        else if(a[i]%4==2)
        {
            c3++;
        }
        else if(a[i]%4==3)
        {
            c4++;
        }
    }
    if(c1%2==0 && c2%2==0 && c3%2==0 && c4==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(win(a,n)==1)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}