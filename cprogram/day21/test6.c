#include<stdio.h>
void mixedstring( char str1[], char *str2);
int main()
{
    char str1[10],str2[10];
    printf("enter the first string:");
    scanf("%s",str1);
     printf("enter the first string:");
    scanf("%s",str2);
    mixedstring(str1,str2);


}
void mixedstring( char *str1, char *str2)
{
    int a,newstring[20],i;
    a=strlen(str1);

     int r=0;
  for(i=0;i<a;i++)
  {
      newstring[r]=str1[i];
      r=r+2;
  }
    int b;
    b=strlen(str2);
    r=1;
  for(i=0;i<b;i++)
  {
      newstring[r]=str2[i];
      r=r+2;
  }
  for(r=0;r<a+b;r++)
  {
      printf("%c",newstring[r]);
  }


}
