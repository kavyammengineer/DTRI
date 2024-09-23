#include<stdio.h>
int main()
{
   char s1[10];
   int i,j, temp, length=0;
   printf(" enter the string");
   scanf("%[^\n]s",s1);

   for(i=0;s1[i]!='\0';i++)
   {
       length++;
   }
   for(i=0;i<length;i++)
   {
       for(j=0;j<(length-1)-i;j++)
       {
           if(s1[j]<s1[j+1])
           {
               temp=s1[j];
               s1[j]=s1[j+1];
               s1[j+1]=temp;

           }
       }
   }
   printf("%s",s1);


}
