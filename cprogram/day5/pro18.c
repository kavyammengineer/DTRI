
#include<stdio.h>
int main()
{
    char chara;
    printf("enter the value");
    scanf(" %c",&chara);
    if(((chara>='a')&&(chara<='z'))||((chara>='A')&&(chara<='Z')))
        printf("value is alpabet");
    else if((chara>='0')&&(chara<='9'))
       printf("value is digit");
    else
        printf(" value is special character");

}
