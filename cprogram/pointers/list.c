#include<stdio.h>
#include<stdarg.h>
int printsum(int number,...)
{
    va_list list;
    int sum=0;
    va_start(list,number);
    for(int i=0;i<number;i++)
    {
        int n=va_arg(list,int);
        sum=sum+n;
    }
    va_end(list);
    return sum;
}
int main()
{
    printf("sum of the given %d",printsum(2,2,3));
    return 0;
}
