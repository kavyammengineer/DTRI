#include<stdio.h>
int main()
{
    char chara1,chara2;
    printf(" enter the character1:");
    scanf(" %c",&chara1);
     printf(" enter the character2:");
    scanf(" %c",&chara2);
    chara1=(chara1>='A'&& chara1<='Z')?chara1+'a'-'A':chara1;
    chara2=(chara2>='A'&& chara2<='Z')?chara2+'a'-'A':chara2;
    (chara1==chara2)?(printf(" character are equal")):printf(("character are not equal"));

}
