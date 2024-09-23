#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("enter the string:");
    scanf("%[^\n]s",s1);
    int count=0;
      int length=strlen(s1);
      for( int i=length-1;i>=0;i--)
      {
          if(s1[i]==' ')
            break;
          else
            count++;
      }
      printf(" the length of last world is %d",count);

}
