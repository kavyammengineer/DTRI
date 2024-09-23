#include<stdio.h>

int main()
{
    char s1[10],s2[10];
    int i,j;
     printf("enter the string s1:");
     scanf("%s",s1);
      printf("enter the string s2:");
     scanf("%s",s2);
     for(i=0;s2[i]!='\0';i++)
     {
    s1[i]=s2[i];
    }
    s1[i]='\0';
printf("the copy string  is  %s",s1);
return 0;
}

