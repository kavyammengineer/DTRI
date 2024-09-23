#include<stdio.h>
void capatilize_string(char *s1);
int main()
{
    char s1[10];
    printf("enter the string:");
    scanf("%s",s1);
    capatilize_string(s1);
    return 0;
}
 void capatilize_string(char *s1)
 {
     int i;
     for(i=0;s1[i]!='\0';i++)
     {
         if(s1[i]>96 && s1[i]<123)
         {
             s1[i]=s1[i]-32;
         }
     }
     printf("the upper  string is %s",s1);
 }

