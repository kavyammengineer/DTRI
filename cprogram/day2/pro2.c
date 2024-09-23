#include<stdio.h>
int main()
{
    int a,b,c,res;
    printf("enter the ID of the employee");
    scanf("%d",&a);
    printf("enter hours he worked");
    scanf("%d",&b);
    printf(" enter salary per hour");
    scanf("%d",&c);
    res=b*c;
    printf("employee ID is %d and his salary is %d per day",a,res);
    return 0;
}

