#include<stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int i;
        char str[10000];
        scanf("%s",str);
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]=='+')
            {
                c+=1;
                break;
                
            }
            else if(str[i]=='-')
            {
                c-=1;
                break;
            }
        }
    }
     printf("%d",c);
}