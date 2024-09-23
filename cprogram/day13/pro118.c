#include<stdio.h>
int main()
{
    char s1[10];
    int i,j,count=0;
     printf("enter the string:");
     scanf("%s",s1);
    int flag[10] = {0};
     for(i=0;s1[i]!='\0';i++)
     {
         if(flag[i] == 0)
         for(j=i+1;s1[j]!='\0';j++)
         {
          if(s1[i]==s1[j])
        {
            count++;
           flag[j] = 1;
        }
     }
     }

printf("total  repeated  character %d",count);
return 0;
}
