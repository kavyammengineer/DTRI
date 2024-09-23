#include<stdio.h>
int main()
{
    char s1[]="abcd";
    s1[0]='z';
    printf(" the string is %s\n",s1);
    const char *s2="abcdef";
    printf("%s\n",s2);
    s2++;
    puts(s2);
//s1="new string1";
s2="new string2";
printf("%s\n",s2);
printf("%d\n",sizeof(s1));
printf("%d\n",sizeof(s2));
getchar();
return 0;

}
