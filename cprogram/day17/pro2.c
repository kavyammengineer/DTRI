#include<stdio.h>
static int a=10;
int main()
{
    int fun(a)
    {
        printf("%d",a);
    }
    int b;
    printf("%d",b=fun(a++));
    return 0;
}
