#include<stdio.h>
int main()
{
    int year,a;
    printf("enter the year");
    scanf("%d",&year);
    if((year%4==0)&&(year % 100 != 0)||(year%400==0))
    {
        printf("is a leap year");
    }

    else
    {
        a=year+(4-(year%4));
        printf("the next leap  year is %d",a);
    }


}
