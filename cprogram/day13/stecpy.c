#include<stdio.h>
#include<stdio.h>
int main()
{
 char s1[10];
 printf("enter the string ");
 scanf("%[^\n]s",s1);
 char s2[10];
   strcpy(s2,s1);
   printf(" the string copy of s2 is %s",s2);
}
