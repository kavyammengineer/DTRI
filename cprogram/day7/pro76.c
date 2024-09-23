#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,n;
    printf("enter the value nth number ");
    scanf("%d",&n);
    printf("%d",a);
    printf("%d",b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("  %d",c);
    a=b;
    b=c;
    }
    return 0;
    }

