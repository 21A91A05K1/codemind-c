#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,m,n;
    scanf("%[^
]s",s);
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        printf("%c",s[i]);
    }
}