#include<stdio.h>
int main()
{
    char s[10];
    char *ps=s;
    int*pcount_ori;
    int length,i,count_ori=0;
    printf("enter the string");
    scanf("%s",ps);
    printf("enter the string");
    printf("%s",ps);
    pcount_ori=&count_ori;
     for(i=0;ps[i]!='\0';i++)
    {
         (*pcount_ori)++;
    }
    printf("the length is %d",*pcount_ori);
    return 0;

}
