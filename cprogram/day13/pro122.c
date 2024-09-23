#include<stdio.h>
int main()
{
    char s1[100];
    int i,j,count_space=0,count_vowels=0,count_consonents=0;
    printf("enter the string:");
    scanf("%[^\n]s",s1);
       for(i=0;s1[i]!='\0';i++)
     {

        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
            s1[i]=s1[i]-32;


     }
     printf(" the total space is %s\n ",s1);

}
