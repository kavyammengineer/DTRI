#include<stdio.h>

int main()
{
    int a,p=10000,r=0.03,n=12,t=3;
    a=p*(1+r/n)^(n*t);
    printf(" the compound interest is  %d",a);
}
