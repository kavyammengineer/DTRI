#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    int i,j,count=0;
     printf("enter the string:");
     scanf("%[^\n]s",s1);
     for(i=0;s1[i]!='\0';i++)
     {
        if(s1[i]==' ')
        {
            s1[i]='r';
        }

    }
printf("the output is character %s",s1);
return 0;
}
