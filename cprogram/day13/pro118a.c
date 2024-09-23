#include<stdio.h>
int main()
{
   char s1[10];
   char n;
    int i,j,count=0;
     printf("enter the string:");
     scanf("%s",s1);
      printf("enter the string:");
     scanf(" %c",&n);
     for(i=0;s1[i]!='\0';i++)
     {
         if(s1[i]==n)
         count++;
     }
      printf("the number of times character is repeated:%d",count);
      return 0;

}
