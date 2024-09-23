#include<stdio.h>
int exponent(int a,int b);
int main()
{
    int a,b,res;
    printf("enter the base and exponent");
    scanf("%d%d",&a,&b);
    res=exponent(a,b);
    printf(" the value is%d:",res);
}
int exponent(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*exponent(a,b-1);
}

