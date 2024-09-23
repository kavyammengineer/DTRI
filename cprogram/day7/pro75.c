#include<stdio.h>
int main()
{
    int n;
    printf(" the fact value is");
    scanf("%d",&n);
    int i,fact=1;
    for(i=n;i>=1;i--)
        fact=fact*i;
    printf(" %d",fact);
}
