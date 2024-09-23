#include<stdio.h>
void fun1(char *str);
int main()
{
    char str[10];
    printf("enter the string:");
    scanf("%s",str);
    fun1(str);

}
void fun1(char *str)
{
    int length,i,r=0;
    for(i=0;str[i]!=0;i++)
    {
        length=i;

    }
    printf("%d\n",length);
     for(i=length;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
