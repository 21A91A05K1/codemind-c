#include<stdio.h>
int main()
{
    int l,w,h,i,t;
    scanf("%d",&l);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}