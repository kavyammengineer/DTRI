#include<stdio.h>
int ywd(int days);
int main()
{
    int days;
    printf(" enter the days:");
    scanf("%d",&days);
    ywd(days);

}
int ywd(int days)
{
    int year,week,day;
    if(days>=365)
    {
        year=days/365;
        week=(days%365)/7;
        day=(days%365)%7;
        printf(" the number of year is %d\n week is %d\n day is %d\n",year,week,day);
    }
    else
        {
        year=0;
        week=(days%365)/7;
        day=(days%365)%7;
        printf(" the number of year is %d\n week is %d\n day is %d\n",year,week,day);
        }
}
