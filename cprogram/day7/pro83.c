#include<stdio.h>
int square_number(int a);
int main()
{
   int a;
   printf("enter the number");
   scanf("%d",&a);
    printf(" the value is %d",square_number(a));
    return 0;
}
int square_number(int a)
{
    return a*a;
}


