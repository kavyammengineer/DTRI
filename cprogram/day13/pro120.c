#include<stdio.h>
int main()
{
    char s1[100];
    int i,j,count_space=0,count_vowels=0,count_consonents=0;
    printf("enter the string:");
    scanf("%[^\n]s",s1);
       for(i=0;s1[i]!='\0';i++)
     {
               if(s1[i]==' ')
                count_space++;
                else if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='u')
                    count_vowels++;
                else
                    count_consonents++;

     }
     printf(" the total space is %d\n the total vowels %d\n the total consonents %d\n",count_space, count_vowels,count_consonents);

}
