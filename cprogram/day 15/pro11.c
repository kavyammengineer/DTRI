#include<stdio.h>
#include<stdarg.h>
double printavg(int number,...)
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
    return (sum+0.0f)/number;
}
int main()
{
    printf("sum of the given %f\n",printavg(2,25,32));
    return 0;
}
