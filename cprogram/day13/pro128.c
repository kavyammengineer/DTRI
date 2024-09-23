#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],t[10];
    printf("enter the string");
    scanf("%s",s);
    printf("enter the string");
    scanf("%s",t);
    int slen=strlen(s);
     int tlen=strlen(t);
     int count=0,i,j;
         if (slen != tlen) { // if lengths are not equal, they cannot be anagrams
        printf("The strings are not anagrams.");
        return 0;
    }

     for(i=0;s[i]!='\0';i++)
     {
         for(j=0;j<tlen;j++)
         {
             if(s[i]==t[j])
             {
                count++;
                break;

             }
         }
     }
     if(count==slen)
        printf(" the string is anagram");
     else
        printf(" the string is not  anagram");
        return 0;
}

