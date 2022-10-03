#include<stdio.h>
int main()
{
    char s[25];
    int i,zc=0,oc=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            zc++;
        }
        else
        {
            oc++;
        }
    }
    if(zc*2==oc)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}