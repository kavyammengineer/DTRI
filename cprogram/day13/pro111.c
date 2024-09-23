#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("enter the string 1:");
    scanf("%s",s1);
    printf("enter the string 2:");
    scanf("%s",s2);

    printf("the string is %s",strcpy(s2,s1));

}
