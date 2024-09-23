#include<stdio.h>
int main()
{
   int num;
   char s[10];
   printf("enter the columnnumber:");
   scanf("%d",&num);
   int i=0,column,j;
   while(num>0)
   {
       column=(num-1)%26;
       s[i]='A'+(column);
       num=(num-1)/26;
       i++;

   }
   for(j=i-1;j>=0;j--)
    printf("%c",s[j]);
    getchar();
    return 0;
}
