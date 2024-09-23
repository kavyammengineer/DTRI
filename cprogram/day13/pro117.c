#include<stdio.h>
int main()
{
    char s1[10];
    int i,j,length;
     printf("enter the string:");
     scanf("%s",&s1);
     for(i=0;s1[i]!='\0';i++)
        length=i;
     for(j=length;j>=0;j--)
        printf("%c",s1[j]);
    return 0;
}
