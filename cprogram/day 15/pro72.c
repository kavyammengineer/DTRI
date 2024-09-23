#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i,r;
    printf("enter the string:");
    scanf("%s",s);
    r=strlen(s);
    for(i=0;s[i]!='\0';i++)
        if(i==(r-1))
    {
         printf("%c",s[i]);
    }

     return 0;
}
