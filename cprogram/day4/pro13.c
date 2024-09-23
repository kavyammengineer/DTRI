#include<stdio.h>
int main()
{
    int a=9;
    (a%3==0)?(((a%3==0)&&(a%7==0))?(printf("multiple of both")):(printf(" multiply of 3"))):((a%7==0)?(printf(" multiple of 7")):(printf("not multiple of both 3 and 7")));
}
