#include<stdio.h>
int main()
{
    int num,a,b,c;
    printf("enter the num");
    scanf("%d",&num);
    if(num>=365)
    {
        a=num/365;
        b=(num%365)/7;
        c=(num%365)%7;
        printf("the year is %d\n week is %d\n days is %d\n",a,b,c);
    }
    else
    {
        a=0;
        b=(num%365)/7;
        c=(num%365)%7;
        printf("  year is%d\n week is %d\n   days is%d\n",a,b,c);
    }

}
