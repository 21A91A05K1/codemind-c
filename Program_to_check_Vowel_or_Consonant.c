#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);
    switch(s)
    {
       case 'a':
       case 'A':
       case 'e':
       case 'E':
       case 'i':
       case 'I':
       case 'o':
       case 'O':
       case 'u':
       case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break; 
    }
    return 0;
}