#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,len,c,b;
    scanf("%[^
]s",s);
    len=strlen(s);
    b=len-1;
    for(i=len-1;i>=0;i--)
    {
        if(s[i]==' ' || i==0)
        {
            if(i==0)
            {
                c=0;
            }
            else
            {
                c=i+1;
            }
            for(j=c;j<=b;j++)
            {
                printf("%c",s[j]);
            }
            b=i-1;
            printf(" ");
        }
    }
}