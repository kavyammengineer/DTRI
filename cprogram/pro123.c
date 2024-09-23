#include<stdio.h>
int main()
{
    char keyword[10][10]={"if","else","while","else if","break"};
    char s1[10];
    int i;
    printf("enter the string:");
    scanf("%[^\n]s",s1);
    int j,flag=0;
    for(i=0;i<5;i++)
        {
        j=0;
    while(s1[j]==keyword[i][j]&&s1[j]!='\0'&&keyword[i][j]!='\0')
    {
           j++;
    }
    if(s1[j]=='\0'&&keyword[i][j]=='\0')
    {
        flag=1;
        break;
    }
    }
    if(flag)
        printf(" the input is keyword");
    else
        printf(" the input is not a keyword");
    return 0;

}
