#include<stdio.h>
#include<stdio.h>
int main()
{
char s1[10];
 char s2[10];
 printf("enter the string ");
 scanf("%s",s1);
printf("enter the string ");
 scanf("%s",s2);
 int n=3;
strncpy(s1,s2,n);

   printf(" the string compare of s1 is %s",s1);
}

