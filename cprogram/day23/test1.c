#include<stdio.h>
#include<string.h>
int* stringtoASCII(char str[],int n);
int main()
{
    char str[100];
    int i;
    printf("enter the string:");
    scanf("%s",&str);
    int n=strlen(str);
    int *res= stringtoASCII( str,n);
    for(i=0; i<n; i++)
    {
        printf("%d ",res[i]);
    }
}
int* stringtoASCII(char str[],int n)
{
    int *ascii=malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        ascii[i]=str[i];
    }
    return ascii;
}
